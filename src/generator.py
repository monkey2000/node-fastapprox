#!/usr/bin/env python

import re

pattern = re.compile('faster([a-z0-9]*)')

def read():
    with open('./fastonebigheader.h', 'r') as content_file:
	content = content_file.read()
	result = set(re.findall(pattern, content))
	
	result.remove('')
	result.remove('f')

	result = list(result)
	return result
	
def process(names):
    mapping = {}

    for func in names:
	mapping[func] = func

    for func in names:
	if func[-4:] == 'full':
	    mapping.pop(func)
	    mapping[func[0:-4]] = func

    return mapping

def template(wrapname, realname):
    wrapname = wrapname.title()
    return """
void %(wrapname)sWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = faster%(realname)s(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}
""" % locals()

HEADER = """#include <node.h>
#include <v8.h>

#include "fastonebigheader.h"
#include "helper.hpp"

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;
using v8::Number;
using v8::Exception;
"""

def register(wrapname, realname):
    wrappername = wrapname.title()

    return "NODE_SET_METHOD(exports, \"%(wrapname)s\", %(wrappername)sWrapper);" % locals()


def output(mapping):
    print HEADER
    
    for wrapname, realname in mapping.items():
        print template(wrapname, realname)

    print 'void init(Local<Object> exports) {'
    
    for wrapname, realname in mapping.items():
	print ' ' * 4 + register(wrapname, realname)

    print '}'
    print 'NODE_MODULE(approx, init)'

def main():
    names = read()
    print names
    mapping = process(names)
    output(mapping)

if __name__ == '__main__':
    main()

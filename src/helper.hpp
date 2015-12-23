#include <v8.h>

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Number;
using v8::Value;
using v8::Exception;
using v8::Handle;

namespace Helper {
    void CheckArgumentsNum(const FunctionCallbackInfo<Value>& args, int num) {
        Isolate* isolate = args.GetIsolate();

        if (args.Length() != num) {
            isolate->ThrowException(Exception::TypeError(
                String::NewFromUtf8(isolate, "Check your number of arguments")));
        }
    }

    enum HelperType {
        HNumber
    };
    void CheckArgumentsType(const FunctionCallbackInfo<Value>& args, int idx, HelperType ht) {
        Isolate* isolate = args.GetIsolate();
        
        bool fail = false;
        switch(ht) {
        case Helper::HNumber:
            if (!Handle<Number>::Cast(args[idx])->IsNumber())
                fail = true;
            break;
        }

        if (fail) {
            isolate->ThrowException(Exception::TypeError(
                String::NewFromUtf8(isolate, "Check your type of arguments")));
        }
    }
};

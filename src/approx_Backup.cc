#include <node.h>
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

void SinWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastersin(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}

void CosWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastercos(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}

void TanWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastertan(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}

void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "sin", SinWrapper);
    NODE_SET_METHOD(exports, "cos", CosWrapper);
    NODE_SET_METHOD(exports, "tan", TanWrapper);
}

NODE_MODULE(approx, init)

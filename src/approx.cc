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


void SigmoidWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastersigmoid(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void PowWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 2);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);
    Helper::CheckArgumentsType(args, 1, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterpow(float(args[0]->NumberValue()), float(args[1]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void CoshWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastercosh(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void TanWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastertanfull(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void LogWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterlog(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void Pow2Wrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterpow2(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void SinWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastersinfull(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void Log2Wrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterlog2(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void LambertwWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterlambertw(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void FcWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterfc(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void SinhWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastersinh(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void InverseerfWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterinverseerf(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void LambertwexpxWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterlambertwexpx(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void CosWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastercosfull(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void TanhWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastertanh(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void LgammaWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterlgamma(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void ErfWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastererf(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void ErfcWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fastererfc(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void ExpWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterexp(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}


void DigammaWrapper(const FunctionCallbackInfo<Value>& args) {
    Helper::CheckArgumentsNum(args, 1);
    Helper::CheckArgumentsType(args, 0, Helper::HNumber);

    Isolate* isolate = args.GetIsolate();

    float value = fasterdigamma(float(args[0]->NumberValue()));
    Local<Number> num = Number::New(isolate, value);

    args.GetReturnValue().Set(num);
}

void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "sigmoid", SigmoidWrapper);
    NODE_SET_METHOD(exports, "pow", PowWrapper);
    NODE_SET_METHOD(exports, "cosh", CoshWrapper);
    NODE_SET_METHOD(exports, "tan", TanWrapper);
    NODE_SET_METHOD(exports, "log", LogWrapper);
    NODE_SET_METHOD(exports, "pow2", Pow2Wrapper);
    NODE_SET_METHOD(exports, "sin", SinWrapper);
    NODE_SET_METHOD(exports, "log2", Log2Wrapper);
    NODE_SET_METHOD(exports, "lambertw", LambertwWrapper);
    NODE_SET_METHOD(exports, "fc", FcWrapper);
    NODE_SET_METHOD(exports, "sinh", SinhWrapper);
    NODE_SET_METHOD(exports, "inverseerf", InverseerfWrapper);
    NODE_SET_METHOD(exports, "lambertwexpx", LambertwexpxWrapper);
    NODE_SET_METHOD(exports, "cos", CosWrapper);
    NODE_SET_METHOD(exports, "tanh", TanhWrapper);
    NODE_SET_METHOD(exports, "lgamma", LgammaWrapper);
    NODE_SET_METHOD(exports, "erf", ErfWrapper);
    NODE_SET_METHOD(exports, "erfc", ErfcWrapper);
    NODE_SET_METHOD(exports, "exp", ExpWrapper);
    NODE_SET_METHOD(exports, "digamma", DigammaWrapper);
}
NODE_MODULE(approx, init)

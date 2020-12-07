//  本地模块

#include <node.h>
#include "Calc.h"
namespace demo {

using v8::Exception;
using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Number;
using v8::Object;
using v8::String;
using v8::Value;


void add(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  if (args.Length() < 2) {
    isolate->ThrowException(Exception::TypeError(String::NewFromUtf8(isolate, "Wrong number of args")));
    return;
  }
  if (!args[0]->IsNumber() || !args[1]->IsNumber()) {
    isolate->ThrowException(Exception::TypeError(String::NewFromUtf8(isolate, "Wrong args should be number")));
    return;
  }
  Local<Number> add = Number::New(isolate, Add(args[0]->NumberValue(), args[1]->NumberValue()));
  args.GetReturnValue().Set(add);
}

void sub(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
    if (args.Length() < 2) {
      isolate->ThrowException(Exception::TypeError(String::NewFromUtf8(isolate, "Wrong number of args")));
      return;
    }
    if (!args[0]->IsNumber() || !args[1]->IsNumber()) {
      isolate->ThrowException(Exception::TypeError(String::NewFromUtf8(isolate, "Wrong args should be number")));
      return;
    }
    Local<Number> sub = Number::New(isolate, Sub(args[0]->NumberValue(), args[1]->NumberValue()));
    args.GetReturnValue().Set(sub);
}

void factorial(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
    if (args.Length() < 1) {
      isolate->ThrowException(Exception::TypeError(String::NewFromUtf8(isolate, "Wrong number of args")));
      return;
    }
    if (!args[0]->IsNumber()) {
      isolate->ThrowException(Exception::TypeError(String::NewFromUtf8(isolate, "Wrong args should be number")));
      return;
    }
    Local<Number> factorial = Number::New(isolate, Factorial(args[0]->NumberValue()));
    args.GetReturnValue().Set(factorial);
}

void init(Local<Object> exports) {
   NODE_SET_METHOD(exports, "add", add);
   NODE_SET_METHOD(exports, "sub", sub);
   NODE_SET_METHOD(exports, "factorial", factorial);
}

NODE_MODULE(addon, init)

}

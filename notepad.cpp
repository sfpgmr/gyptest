#include <node.h>
#include <nan.h>
#include <windows.h>

using namespace v8;

NAN_METHOD(open_notepad) {
	NanScope();

	ShellExecute(nullptr, "open", "notepad.exe", nullptr, nullptr, SW_SHOWNORMAL);
	NanReturnValue(NanUndefined());
}

void init(Handle<Object> exports) {
	exports->Set(NanSymbol("open"), NanNew<FunctionTemplate>(open_notepad)->GetFunction());
}

NODE_MODULE(np, init)

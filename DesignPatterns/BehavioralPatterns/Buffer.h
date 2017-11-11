#pragma once
#include "stdafx.h"

class Buffer
{
private:
	Buffer() {}
	Buffer(const Buffer&) {}
	Buffer & Buffer::operator= (const Buffer&) {};
public:
	string Data;
	static Buffer& GetInstance()
	{
		static Buffer buffer;
		return buffer;
	}
};

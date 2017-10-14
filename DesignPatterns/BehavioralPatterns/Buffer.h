#pragma once
#include "stdafx.h"

class Buffer
{
private:
	Buffer() {}
public:
	string Data;
	static Buffer& GetInstance()
	{
		static Buffer buffer;
		return buffer;
	}
};

#pragma once
#include "stdafx.h"

enum LogLevel {Info, Warning, Error};

class ExternalLogger
{
public:
	void Log(string message, LogLevel level);
};
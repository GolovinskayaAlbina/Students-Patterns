#pragma once
#include "stdafx.h"

class ILogger
{
public:
	virtual ~ILogger(){}
	virtual void LogInfo(string message) = 0;
	virtual void LogWarning(string message) = 0;
	virtual void LogError(string message) = 0;
};
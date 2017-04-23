#include "stdafx.h"
#include "ExternalLoggerAdapter.h"

ExternalLoggerAdapter::ExternalLoggerAdapter()
{
	_externalLogger = new ExternalLogger();
}
void ExternalLoggerAdapter::LogInfo(string message)
{
	_externalLogger->Log(message, Info);
}
void ExternalLoggerAdapter::LogWarning(string message)
{
	_externalLogger->Log(message, Warning);
}
void ExternalLoggerAdapter::LogError(string message)
{
	_externalLogger->Log(message, Error);
}
#include "ExternalLogger.h"
#include "ILogger.h"

class ExternalLoggerAdapter: public ILogger
{
private:
	ExternalLogger* _externalLogger;
public:
	ExternalLoggerAdapter();
	virtual void LogInfo(string message);
	virtual void LogWarning(string message);
	virtual void LogError(string message);
};
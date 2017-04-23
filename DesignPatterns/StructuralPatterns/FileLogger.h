#include "ILogger.h"
#include <fstream>

class FileLogger: public ILogger
{
private:
	std::ofstream _logFile;
public:
	FileLogger();
	~FileLogger();
	virtual void LogInfo(string message);
	virtual void LogWarning(string message);
	virtual void LogError(string message);
};
#include "stdafx.h"
#include "FileLogger.h"

FileLogger::FileLogger()
{
	_logFile.open("log.txt", ios::out | ios::app);
}

FileLogger::~FileLogger()
{
	_logFile.close();
}

void FileLogger::LogInfo(string message)
{
	_logFile<<"INFORMATION: "<<message<<endl;
}
void FileLogger::LogWarning(string message)
{
	_logFile<<"WARNING: "<<message<<endl;
}
void FileLogger::LogError(string message)
{
	_logFile<<"ERROR: "<<message<<endl;
}
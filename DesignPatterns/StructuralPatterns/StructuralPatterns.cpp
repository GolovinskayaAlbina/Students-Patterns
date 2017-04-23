// StructuralPatterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FileLogger.h"

int main()
{
	ILogger* logger = new FileLogger();
	logger->LogError("error");
	logger->LogWarning("error");
	logger->LogInfo("error");
	delete logger;
	return 0;
}


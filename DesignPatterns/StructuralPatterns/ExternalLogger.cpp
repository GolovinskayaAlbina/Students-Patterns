#include "stdafx.h"
#include "ExternalLogger.h"

void ExternalLogger::Log(string message, LogLevel level)
{
	switch (level)
	{
	case Info:
		cout<<"INFORMATION: ";
		break;
	case Warning:
		cout<<"WARNING: ";
		break;
	case Error:
		cout<<"ERROR: ";
		break;
	default:
		cout<<"Unexpected level("<<level<<"): ";
	}

	cout<<message<<endl;
}

// StructuralPatterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ExternalLoggerAdapter.h"
#include "AboutWindow.h"
#include "IconWindow.h"
#include "ColorBackgroundTheme.h"
#include "ImageBackgroundTheme.h"

int main()
{
	ILogger* logger = new ExternalLoggerAdapter();
	logger->LogError("error");
	logger->LogWarning("warning");
	logger->LogInfo("information");


	IWindow* aboutWindow = new AboutWindow(new ColorBackgroundTheme(10));
	aboutWindow->DrawContent();

	IWindow* iconWindow = new IconWindow(new ImageBackgroundTheme("image.png"), "icon.ico");
	iconWindow->DrawContent();
	return 0;
}


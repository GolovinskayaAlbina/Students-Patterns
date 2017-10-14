// BehavioralPatterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Application.h"
#include "Dialog.h"
#include "Printer.h"

int main()
{
	IHelpHandler* dialogHelp = new Dialog(new Application());
	dialogHelp->HandleHelp(HelpRequest(ApplicationHelp));
	dialogHelp->HandleHelp(HelpRequest(PrinterHelp));

	IHelpHandler* printerHelp = new Printer(new Application());
	printerHelp->HandleHelp(HelpRequest(ApplicationHelp));
	printerHelp->HandleHelp(HelpRequest(PrinterHelp));
}


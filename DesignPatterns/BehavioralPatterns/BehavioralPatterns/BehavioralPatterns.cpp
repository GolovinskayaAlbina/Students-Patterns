// BehavioralPatterns.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Application.h"
#include "Dialog.h"
#include "Printer.h"
#include "Document.h"
#include "MenuItem.h"
#include "CopyCommand.h"
#include "PastCommand.h"

int main()
{
	//chain of responsibility
	IHelpHandler* dialogHelp = new Dialog(new Application());
	dialogHelp->HandleHelp(HelpRequest(ApplicationHelp));
	dialogHelp->HandleHelp(HelpRequest(PrinterHelp));

	IHelpHandler* printerHelp = new Printer(new Application());
	printerHelp->HandleHelp(HelpRequest(ApplicationHelp));
	printerHelp->HandleHelp(HelpRequest(PrinterHelp));

	//command
	Document* docSource = new Document();
	docSource->Text = "source document text";

	Document* docTarget = new Document();

	MenuItem copyMenuItem(new CopyCommand(docSource));
	MenuItem pastMenuItem(new PastCommand(docTarget));

	copyMenuItem.Click();
	pastMenuItem.Click();

	cout << docTarget->Text;
}


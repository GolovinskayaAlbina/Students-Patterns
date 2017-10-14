#pragma once
#include "ICommand.h"
#include "Document.h"
#include "Buffer.h"

class PastCommand : public ICommand
{
	Document* _document;
public:
	PastCommand(Document* document)
	{
		_document = document;
	}
	virtual void Execute()
	{
		_document->Text = Buffer::GetInstance().Data;
	}
};

#pragma once
#include "ICommand.h"
#include "Document.h"
#include "Buffer.h"

class CopyCommand : public ICommand
{
	Document* _document;
public:
	CopyCommand(Document* document)
	{
		_document = document;
	}
	virtual void Execute()
	{
		Buffer::GetInstance().Data = _document->Text;
	}
};
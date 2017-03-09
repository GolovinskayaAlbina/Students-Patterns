#include "stdafx.h"
#include "ChannelsFactory.h"


ChannelsFactory::ChannelsFactory()
{
}

IChannel ChannelsFactory::GetChannel(SignalType channelType)
{
	return IChannel();
}

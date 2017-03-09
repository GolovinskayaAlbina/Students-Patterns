#pragma once
#include "IChannel.h"
enum SignalType {Analog, Digital};
class ChannelsFactory
{
public:
	ChannelsFactory();
	IChannel GetChannel(SignalType channelType);
};


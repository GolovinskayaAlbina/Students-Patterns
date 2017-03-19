// CreationalPatterns.cpp : main project file.

#include "stdafx.h"
#include "SimpleSchemeBuilder.h"

int main()
{
	SimpleSchemeBuilder schemeBuilder;
	Scheme scheme = schemeBuilder.CreateScheme(Analog);
	scheme.Send(new AnalogSignal("10101"));

	scheme = schemeBuilder.CreateScheme(Digital);
	scheme.Send(new DigitalSignal("10101"));
    return 0;
}

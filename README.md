# Creational patterns

[![N|Solid](https://somerealreporting.files.wordpress.com/2015/12/red_line.gif?w=1000)](https://nodesource.com/products/nsolid)

# Using 

```sh
#include "SimpleSchemeBuilder.h"
```
Create scheme for analog signal 

```sh
SimpleSchemeBuilder schemeBuilder;
Scheme scheme = schemeBuilder.CreateScheme(Analog);
scheme.Send(new AnalogSignal("10101"));
```

reate scheme for digital signal 

```sh
SimpleSchemeBuilder schemeBuilder;
Scheme scheme = schemeBuilder.CreateScheme(Digital);
scheme.Send(new AnalogSignal("10101"));
```

# Class diagram 
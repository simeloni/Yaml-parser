# note yaml

reference http://www.yaml.org/spec/1.2/spec.html

# include yaml-cpp

Install the library (there should be a package for any distribution)
```
sudo apt-get install yaml-cpp
```

check that the library is correctly installed and recogned by the system

```
whereis yaml-cpp
```

should give an output similar to

```
> yaml-cpp: /usr/include/yaml-cpp
```

## Arch

insert line

```
#include "yaml-cpp/yaml.h"
```

compile with

```
g++ -lyaml-cpp -o test test.cpp
```

## manual

insert line

```
#include "yaml-cpp/yaml.h"
```

compile with

```
g++ -I/usr/local/include -L/usr/local/lib -lyaml-cpp -o testprogram main.cpp
```

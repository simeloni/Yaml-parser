# Yaml-parser
Tests and tips for the yaml package

## Installation
### Manual installation


### Automatic installation
```
sudo apt-get install libyaml-dev
```

check that the library is correctly installed and recogned by the system

```
whereis yaml-cpp
```

should give an output similar to

```
> yaml-cpp: /usr/include/yaml-cpp
```

## Usage
Add this line to the programs

```
#import "yaml-cpp/yaml.h"
```

## Compiling
For the compilation, you have to use the following string

```
g++ -L/usr/local/lib -o <binary_name> <file_name.cpp> -lyaml-cpp
```
Alternatively, you can compile without using th string `-L/usr/local/lib` by adding the path to the `LIBRARY_PATH` environment variable

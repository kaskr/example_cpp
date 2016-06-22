# example_cpp
Demonstrate how to distribute cpp code for TMB

This installs the contributed code:
```R
library(TMB)
TMB:::install.contrib("https://github.com/kaskr/example_cpp/archive/master.zip")
```

After that you can use it in a TMB model with:
```C++
#include <TMB.hpp>
#include <kasper.hpp>
using contrib::kasper::func;
```

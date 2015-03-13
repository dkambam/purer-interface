##overview
using ```std::function``` to implement callback on a member function.


## New things learned
- makefile: generating object file from source automatically
```makefile
OBJ = $(SRC:.cpp=.o)
```

##issue
1. Makefile does not track header changes
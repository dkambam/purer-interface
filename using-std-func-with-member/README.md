### Overview
using ```std::function``` to implement callback on a member function.


### New things learned
- makefile: generating object file from source automatically
```makefile
OBJ = $(SRC:.cpp=.o)
```
- compiling template classes in 2 files(header & cpp) dealing with linker issues [ref. 1]


### References
1. [How to define a template class in a .h file and implement it in a .cpp file][template_issue]

[template_issue]: http://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp

### Issues
1. Makefile does not track header changes

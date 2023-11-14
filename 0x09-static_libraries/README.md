# 0x09-static_libraries

```bash
# compile all library codes (*.c) into object files (*.o)
gcc -c -Wall -Werror -Wextra *.c
# create a static lib 
ar -rc libname.a *.o
```


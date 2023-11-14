# 0x09-static_libraries

```bash
# compile all library codes (*.c) into object files (*.o)
gcc -c -Wall -Werror -Wextra *.c
# create a static lib 
ar -rc libmy.a *.o
# list all the .o objects 
ar -t libmy.a
#
nm libmy.a
```


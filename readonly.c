// 1. Writing a read-only memory results segmentation fault error
#include <stdio.h>

    int main(void)
     {
     char *s =" Welcome to PSU";  // read-only memory
     *s ='H';  // Trying to write into H on to the string
     return 1;
    }

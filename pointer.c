
// Accessing the pointer variable x which is initialized to 0

#include<stdio.h>
     void foo()
       {
           char *x = 0;
           *x = 3;
       }
       
       int main()
       {
           foo();
          return 0;
       }

// segmentation fault

#include <stdio.h>
#include <stdlib.h>

   int main()
    {
  //    int i;
     char *buf; //null pointer or no memory
//printf("%ls\n", &i);
     buf = malloc(1<<32);
//syntax fgets(buf, Max_Size, stdin)
     fgets(buf, 1024, stdin);
     printf("%s\n", buf);

     return 1;
   }

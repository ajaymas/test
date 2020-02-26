 // Parameters are passed through this
 // function and their return addresses.

#include<stdio.h>
int g =0;
void calculate(int a){
int i = g;
  printf("%d    %x\n",g++, &i);
   if (a== 0)
   return ;
      calculate(a);
}
int main() {
   int a = 5;
   calculate(a);
}

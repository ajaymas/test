
// Improper use of scanf
#include<stdio.h>
int main()

{
int p = 10;
scanf ("%d",p); // Cant pass variable as value here,
                // it shoud be an address.
return 0;
}

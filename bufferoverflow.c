#include<stdio.h>
#include<string.h>

int main(int arc, char *argv[])//input arguments are passed here
    {
    char buf[257];
    strcpy(buf, argv[1]);//the input is passed from argv[1] is copied to buf
    printf("%s\n", buf);//buffer contains large memory space but input memory is too small
    return 0;
    }

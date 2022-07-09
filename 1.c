#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
    int a=0;
    if(fork()==0)
    {
        a=a+5;
        printf("%d ,%d \n ",a,&a);
    }
    else
    {
        a=a-5;
        printf("%d, %d \n", a,&a);
    }
    return 0;
}
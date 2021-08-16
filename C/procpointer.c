//pointer
#include<stdio.h>
void add(int *);
int main()
{
    int a=10;
    int *b=&a;
    add(b++);
    return 0;
}
void add(int *p)
{
    printf("%d\n",*p);
}
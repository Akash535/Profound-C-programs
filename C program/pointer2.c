#include<stdio.h>
void main()
{
    int a=20,*ptr;
    ptr=&a;
    printf("address of a=%u\n",&a);
    printf("address of ptr=%u\n",&ptr);
    ptr+2;
    printf("value of ptr=%d\n",*ptr);
    ptr++;
    printf("address of ptr=%u\n",&ptr);
    printf("value of ptr=%d\n",*ptr);
}
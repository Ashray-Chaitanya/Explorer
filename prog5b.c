#include<stdio.h>
#include<stdlib.h>
int count;

void tower (int n,char src,char temp,char dest)
{  if (n==0)
    return ;
tower(n-1,src,dest,temp);
count ++;
printf("move disc %d from %c to %c \n ",n,src,dest);
tower(n-1,temp,src,dest);
}

void main()
{
    int n;
    printf("Enter number of discs");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("total no of moves %d",count);
}
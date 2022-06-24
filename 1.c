#include<stdio.h>
int main()
{
    int n,m;
    n=5;m=0;
    for(int i=0;i<n;i++)//i=0
            for(;i<3;i++) m+=i; //m=0+1+2=3 i=2
    printf("%d",m);
    getchar();
}
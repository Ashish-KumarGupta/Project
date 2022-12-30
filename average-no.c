#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter Size of an array:");
    scanf("%d", &n);
    printf("Enter The elements:");
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++);
    {
        s=s+a[i];
    }
    int avg=s/n;
    printf("Average is=%d",avg);


}


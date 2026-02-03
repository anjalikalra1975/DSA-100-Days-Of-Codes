#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,num,s,*ptr,flag=0,p=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Enter the searching element:");
    scanf("%d",&s);
    for(i=0;i<n;i++) {
    if (s==*(ptr+i))
    {   flag=1;
        p=i;
        break;
    }  
    }
    if (flag==1)
    {
    printf("Found at the index %d",p);
    printf("\nComparison is %d",i+1);
    }
    else
    printf("Not found!");
}
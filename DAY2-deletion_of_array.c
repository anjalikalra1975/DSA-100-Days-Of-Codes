#include<stdio.h>
#include<stdlib.h>
void main() {
    int n,*ptr,pos,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nEnter the position of the element:");
    scanf("%d",&pos);

    if(pos<=n)
    {
    
        for(i=pos-1;i<n-1;i++)
        {
            *(ptr+i) = *(ptr+i + 1);
        }
        n--;
    }

printf("\nArray after deletion:");
for(i = 0; i < n; i++)
{
    printf(" %d", *(ptr + i));
}
}

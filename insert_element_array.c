#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*ptr,pos,num,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    ptr=(int*)malloc((n+1)*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\n Enter inserting element:");
    scanf("%d",&num);
    printf("\n Enter position of the element:");
    scanf("%d",&pos);
    if(pos>n)
    printf("\n postion of the element does not exist!");
    else
    {
    for(i=n;i>=pos-1;i--){
         *(ptr+i) = *(ptr+i-1);
    }
    *(ptr + pos - 1) = num;
    } 
    printf("\nArray after insertion:\n");
    for(i = 0; i <= n; i++)
    {
    printf("%d ", *(ptr+i));
    }
 }
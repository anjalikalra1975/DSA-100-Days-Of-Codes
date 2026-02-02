/*Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left */

#include<stdio.h>
#include<stdlib.h>
void main() {
    int n,*ptr,num,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    ptr=(int*)malloc((n+1)*sizeof(int));
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nChoose the element to be deleted:");
    scanf("%d",&num);
    for(i = 0; i < n; i++)
{
    if(num == *(ptr + i))
    {
        printf("\n%d is present in the array", *(ptr + i));
        for(; i<n-1;i++)
        {
            *(ptr+i) = *(ptr+i + 1);
        }
        n--;
        break;
    }
}
printf("\nArray after deletion:");
for(i = 0; i < n; i++)
{
    printf(" %d", *(ptr + i));
}
}

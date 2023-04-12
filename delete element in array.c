//delete element in array
#include<stdio.h>
int main()
{
    int array[100],position,c,n;
    printf("enter the number of element in array");
    scanf("%d",&n);
    printf("enter %d element=\n",n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }
    printf("enter the location where you wish to delete element:\n");
    scanf("%d",&position);
    if(position>=n+1)
    {
        printf("deletion not possible.\n");
    }
    else
    {
        for(c=position-1;c<n-1;c++)
        {
            array[c]=array[c+1];
        }
        printf("resultant array:\n");
        for(c=0;c<n-1;c++)
        {
            printf("%d\n",array[c]);
        }
    }
}

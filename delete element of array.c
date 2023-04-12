//delete element of array.
#include<stdio.h>
void main()
{
    int a[10],n,i,pos;
    for(i=0;i<5;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n enter the position\n");
    scanf("%d",&pos);

    for(i=pos;i<5;i++)
    {
        a[i-1]=a[i];
    }

    printf("\n after deletion\n ");
    for(i=0;i<4;i++)
    {
        printf("%d element:%d\n",i+1,a[i]);
    }
}

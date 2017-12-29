#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int i,c,n,d,arr[MAX],temp,j;
    printf("\n enter the no. of array element");
    scanf("%d",&n);
    printf("\n enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(c)
    {
        printf("\n1.insertion sort\n");
        printf("2.bubble sort\n");
        printf("3.selection sort\n");
        printf("4.display\n");
        printf("5.exit");
        printf("\n enter the choice");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            for(i=1;i<n;i++)
            {
                d=i;
                while(d>0)
                {
                if(arr[d]<arr[d-1])
                {
                    temp=arr[d];
                    arr[d]=arr[d-1];
                    arr[d-1]=temp;
                }
                d--;
                }
            }
            break;
        case 2:
            for(i=0;i<n;i++)
            {
                for(j=i;j<n;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            break;
        case 3:
            for (i=0;i<(n-1);i++)
            {
                d=i;
                for (j=i+1;j<n;j++)
                {
                        if (arr[d]>arr[j])
                        d=j;
                }
                if (d!=i)
                {
                        temp = arr[i];
                        arr[i] = arr[d];
                        arr[d] = temp;
                }
            }
            break;
        case 4:
            for(i=0;i<n;i++)
            {
                printf("\n%d",arr[i]);
            }
            break;
        case 5:
            c=0;
            break;
        }
    }
    return 0;
}

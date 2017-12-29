#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,arr[10],j,k;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("\n enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("\n array before deletion");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
        for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                {

                 for(k=j;k<n;k++)
                arr[k]=arr[k+1];
                n--;
                }
            else
            {

            }
        }
        }
        printf("\n array element");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }

return 0;
}

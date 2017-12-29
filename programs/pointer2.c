#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,val,len,j,n;
    char str[20];
    char *p;
    p=str;
    printf("\n enter the number");
    scanf("%d",&n);
    printf("enter the element");
    scanf("%s",p);
    printf("\n enter the value to be delete");
    scanf("%d",&val);
    for(len=0;len<5;len++);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        *(p)=*(p)-1;
        }
    }
     for(i=0;i<n;i++)
     {
         printf("%s",*p);
     }
    return 0;
}

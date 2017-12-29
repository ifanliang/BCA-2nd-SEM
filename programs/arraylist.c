#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX]={0};
int top=-1;
void push()
{
    if(top==MAX-1)
    {
        printf("\n stack is overflow");
    }
    top=top+1;
    printf("\n enter the value");
    scanf("%d",&stack[top]);
}
void pop()
{
    if(top==-1)
    {
        printf("\n stack is underflow");
        return;
    }
    printf("\n element deleted is=%d",stack[top]);
    top=top-1;
}
void peep()
{
    if(top==-1)
    {
        printf("\n stack is underflow");
        return;
    }
    printf("\n element is =%d",stack[top]);
}
int main()
{
    int c;
    while(c)
    {
        printf("\n 1.push");
        printf("\n 2.pop");
        printf("\n 3.peep");
        printf("\n 4.exit");
        printf("\n enter the choice");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
                push();
                break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            {
                c=0;
                printf("\n program finished");
            }
            break;
        default:
            printf("\n wrong choice");
            break;
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int info;
    struct node *next;
}*top=NULL,*fresh,*ptr,*prev;
void push()
{
                fresh=(struct node*)malloc(sizeof(struct node));
                fresh->next=NULL;
                printf("\n enter the info");
                scanf("%d",&fresh->info);
                if(top==NULL)
                {
                    top=fresh;
                  return;
                }
                    fresh->next=top;
                    top=fresh;
}
void display()
{
    if(top==NULL)
    printf("\n empty list..");
    else
    {
        printf("\n list is..");
        for(ptr=top;ptr!=NULL;ptr=ptr->next)
        {
            printf("\n %d",ptr->info);
        }
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("\n stack is underflow");
        return;
    }
    else
    {
        ptr=top;
        printf("\n poped stack is=%d",ptr->info);
        top=ptr->next;
         free(ptr);
         return;
    }
}
int main()
{
    int c;
    while(c)
    {
        printf("\n\n--MENU---\n");
        printf("\n 1.insert");
        printf("\n 2.delete");
        printf("\n 3.display");
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
                    display();
                    break;
        case 4:
                    c=0;
                    {
                        printf("program finished");
                    }
                    break;
        default :
                printf("\n wrong choice");
        }
    }
    return 0;
}

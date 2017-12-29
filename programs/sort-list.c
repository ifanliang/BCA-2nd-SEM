#include <stdio.h>
#include <stdlib.h>
struct node
{
  int info;
  struct node *next;
}*start=NULL,*fresh,*p1,*p2;
void insert()
{
    fresh=(struct node*)malloc(sizeof(struct node));
    fresh->next=NULL;
    printf("\n enter the info");
    scanf("%d",&fresh->info);
    if(start==NULL)
    {
        start=fresh;
        return;
    }
    if(fresh->info>start->info)
    {
        fresh->next=start;
        start=fresh;
        return;
    }
    else
    {
        p1=p2=start;
        while(p1->info>=fresh->info && p1->next!=NULL)
        {
                p2=p1;
            p1=p1->next;
        }
        p2->next=fresh;
        fresh->next=p1;
    }
}
void display()
{
    if(start==NULL)
    {
        printf("\n list is empty");
    }
    else
    {
        for(p1=start;p1!=NULL;p1=p1->next)
        {
            printf("\n %d",p1->info);
        }
    }
}
int main()
{
    int c;
    while(c)
    {
        printf("\n 1.insert");
        printf("\n 2.display");
        printf("\n 3.exit");
        printf("\n enter the choice");
        scanf("%d",&c);
    switch(c)
    {
    case 1:
            insert();
            break;
    case 2:
        display();
        break;
    case 3:
        {
            c=0;
        }
        break;
    default:
        printf("\n wrong choice");
    }
    }
    return 0;
}


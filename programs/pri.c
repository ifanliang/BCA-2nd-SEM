#include <stdio.h>
#include <stdlib.h>
struct node
{
  int info,pri;
  struct node *next;
}*start=NULL,*fresh,*p1,*p2;
void insert()
{
    fresh=(struct node*)malloc(sizeof(struct node));
    fresh->next=NULL;
    printf("\n enter the info");
    scanf("%d",&fresh->info);
    printf("\n enter the priority");
    scanf("%d",&fresh->pri);
    if(start==NULL)
    {
            start=fresh;
            return;
    }
    else if(fresh->pri>=start->pri)
    {
        fresh->next=start;
        start=fresh;
        return;
    }
    else
    {
        p1=start;
        while(p1->next!=NULL&&p1->next->pri>fresh->pri)
        {
                p1=p1->next;
        }
        fresh->next=p1->next;
        p1->next=fresh;
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
            printf("\n info=%d",p1->info);
        }
        for(p1=start;p1!=NULL;p1=p1->next)
        {
            printf("\n priority=%d",p1->pri);
        }
    }
}
void del()
{
    if(start==NULL)
    {
        printf("\n list is underflow");
        return;
    }
    else{
        p1=start;
        printf("\n info is=%d",p1->info);
        printf("\n priority=%d",p1->pri);
        start=start->next;
        free(p1);
        return;
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
        printf("\n 4.delete");
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
    case 4:
        del();
        break;
    default:
        printf("\n wrong choice");
    }
    }
    return 0;
}

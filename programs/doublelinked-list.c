#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
}*start=NULL,*fresh,*p1,*p2;
void insert()
{
    fresh=(struct node*)malloc(sizeof(struct node));
    fresh->prev=NULL;
    fresh->next=NULL;
    printf("enter the info\n");
    scanf("%d",&fresh->info);
    if(start==NULL)
    {
        start=fresh;
        return;
    }
    if(fresh->info>=start->info)
    {
        start->prev=fresh;
        fresh->next=start;
        start=fresh;
        return;
    }
    else{
        p1=p2=start;
        while(p1->info>=fresh->info&&p1!=NULL)
        {
            p2=p1;
            p1=p1->next;
        }
            fresh->prev=p2;
            p2->next=fresh;
            fresh->next=p1;
            if(p1!=NULL)
            {
                p1->prev=fresh;
            }
    }
}
void display()
{
    if(start==NULL)
    printf("\n empty list..");
    else
    {
        printf("\n list is..");
        for(p1=start;p1!=NULL;p1=p1->next)
        {
            printf("\n %d",p1->info);
        }
         printf("\n backword list..");
        for(p1=start;p1->next!=NULL;p1=p1->next);
        for(p2=p1;p2->prev!=NULL;p2=p2->prev)
        {
            printf("\n %d",p2->info);
        }
        printf("\n %d",p2->info);
    }
}
void del()
{
    int val,flag=0;
    if(start==NULL)
    {
        printf("\n link list is empty");
    }
    printf("\n enter the value");
    scanf("%d",&val);
    if(val==start->info)
    {
        if(start->next==NULL)
        {
            printf("\n only node to be deleted");
            p1=start;
            start=NULL;
            free(p1);
            return;
        }
        p1=start;
        p1->next->prev=NULL;
        start=start->next;
        start->prev=NULL;
        free(p1);
        return;
    }
    for(p1=start;p1!=NULL;p1=p1->next)
    {
        if(p1->info==val)
        {
            flag=1;
            break;
        }
        p2=p1;
    }
    if(flag==1&&p1->next!=NULL)
    {
        p2->next=p1->next;
        p1->next->prev=p2;
        free(p1);
        printf("\n deletion from the mid");
        return;
    }
    else if(flag==0)
    {
        printf("\n value not found");
    }
    else
    {
        p2->next=p1->next;
        free(p1);
        printf("\n node deleted at the end");
        return;
    }
}
void count()
{
            int ctr=0;
            for(p1=start;p1!=NULL;p1=p1->next)
            {
                ctr++;
            }
            printf("\n number of count=%d",ctr);
}
void search()
{
            int v,flag=0;
            printf("\n enter the value to search");
            scanf("%d",&v);
            for(p1=start;p1!=NULL;p1=p1->next)
            {
                    if(p1->info==v)
                    flag=1;
            }
            if(flag==1)
            printf("\n value found");
            else
            printf("\n value not found");
}
int main()
{
    int c;
    while(c)
    {
        printf("\n\n--MENU---\n");
        printf("\n 1.insert");
        printf("\n 2.count");
        printf("\n 3.search");
        printf("\n 4.delete");
        printf("\n 5.display");
        printf("\n 6.exit");
        printf("\n enter the choice");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
                    insert();
                    break;
        case 2:
                    count();
                    break;
        case 3:
                    search();
                    break;
        case 4:
                    del();
                    break;
        case 5:
                    display();
                    break;
        case 6:
                    c=0;
                    {
                        printf("program finished");
                    }
                        break;
        default:
                    printf("wrong choice..");
        }
    }
    return 0;
}

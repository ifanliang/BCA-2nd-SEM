#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void insert();
void display();
void count();
void search();
void avg();
void del();
void sort();
struct node
{
    int info;
    struct node *next;
}*start=NULL,*fresh,*ptr,*prev;
void insert()
{
                int x,n,ctr=1;
                fresh=(struct node*)malloc(sizeof(struct node));
                fresh->next=NULL;
                printf("\n enter the info");
                scanf("%d",&fresh->info);
                if(start==NULL)
                {
                    start=fresh;
                  return;
                }
                printf("\n---menu--\n");
                printf("\n 1.insert at beg\n 2.insert at end\n 3.insert at mid");
                printf("\n enter the choice");
                scanf("%d",&x);
                switch(x)
                {
                case 1:
       label:           fresh->next=start;
                        start=fresh;
                        break;
                case 2:
                        for(ptr=start;ptr->next!=NULL;ptr=ptr->next)
                        {

                        }
                            if(ptr->next==NULL)
                        {
                            ptr->next=fresh;
                        }
                         break;
            case 3:
                    printf("\n enter the position");
                    scanf("%d",&n);
                    if(n==1)
                    {
                        goto label;
                    }
                    for(ptr=start,ctr=1;ctr<=n-1;ptr=ptr->next,ctr++)
                    {
                        fresh->next=ptr->next;
                        ptr->next=fresh;
                    }
                    break;
                default :
                        printf("\n wrong choice");
                 }
}
void count()
{
            int ctr=0;
            for(ptr=start;ptr!=NULL;ptr=ptr->next)
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
            for(ptr=start;ptr!=NULL;ptr=ptr->next)
            {
                    if(ptr->info==v)
                    flag=1;
            }
            if(flag==1)
            printf("\n value found");
            else
            printf("\n value not found");
}
void avg()
{
        int ctr,s=0;
        float avg;
        for(ptr=start,ctr=0;ptr!=NULL;ptr=ptr->next,ctr++)
        {
                s=s+ptr->info;
        }
        avg=(float)s/ctr;
        printf("%f",avg);
}
void del()
{
        int ctr,pos;
        printf("\n enter the position");
        scanf("%d",&pos);
        for(ptr=start,ctr=1;ptr!=NULL;ptr=ptr->next,ctr++)
        {
            if((pos==1)&&(ctr==pos))
            {
                start=ptr->next;
                free(ptr);
                break;
            }
            else if(pos==ctr)
            {
                prev->next=ptr->next;
                free(ptr);
                break;
            }
            prev=ptr;
        }
}
void sort()
{
        int temp;
        for(ptr=start;ptr!=NULL;ptr=ptr->next)
        {
            for(fresh=start;fresh->next!=NULL;fresh=fresh->next)
            {
         if(fresh->info>ptr->info)
            {
                 temp=fresh->info;
                 fresh->info=ptr->info;
                 ptr->info=temp;
            }
            if(ptr==NULL)
            {
                break;
            }
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
        for(ptr=start;ptr!=NULL;ptr=ptr->next)
        {
            printf("\n %d",ptr->info);
        }
    }
}
void rev()
{
    struct node *p1,*p2,*p3;
    if(start==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    p1=start;
    p2=p1->next;
    p3=p2->next;
    p1->next=NULL;
    p2->next=p1;
    while(p3!=NULL)
    {
        p1=p2;
        p2=p3;
        p3=p3->next;
        p2->next=p1;
    }
    start=p2;
}
void up()
{
    int v,nv;
    printf("\n enter the value to search");
    scanf("%d",&v);
    printf("\n enter the new value");
    scanf("%d",&nv);
    for(ptr=start;ptr!=NULL;ptr=ptr->next)
    {
        if(ptr->info==v)
        {
            ptr->info=nv;
        }
    }
    for(ptr=start;ptr!=NULL;ptr=ptr->next)
    {
        printf("\n %d",ptr->info);
    }
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
        printf("\n 4.average");
        printf("\n 5.delete");
        printf("\n 6.display");
        printf("\n 7.exit");
        printf("\n 8.sort");
        printf("\n 9.reverse");
        printf("\n 10.update");
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
                    avg();
                    break;
        case 5:
                    del();
                    break;
        case 6:
                    display();
                    break;
        case 7:
                    c=0;
                    {
                        printf("program finished");
                    }
                    break;
        case 8:
                    sort();
                    break;
        case 9:
                    rev();
                    break;
        case 10:
                    up();
                    break;
        default :
                printf("\n wrong choice");
        }
    }
    return 0;
}

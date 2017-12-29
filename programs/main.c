#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
}*last,*fresh,*p1,*p2;
void insert()
{
    fresh=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the info");
    scanf("%d",&fresh->info);
    if(last==NULL)
    {
        last=fresh;
        last->next=fresh;
        return;
    }
    if(fresh->info<=last->next->info)
    {
        fresh->next=last->next;
        last->next=fresh;
        return;
    }
    else if(fresh->info>=last->info)
    {
        fresh->next=last->next;
        last->next=fresh;
        last=fresh;
        return;
    }
    else
    {
        for(p1=last->next;p1!=last&&fresh->info>=p1->info;p1=p1->next)
        {
            p2=p1;
        }
        fresh->next=p1;
        p2->next=fresh;
    }
}
void display()
{
    if(last==NULL)
    {
        printf("\n list empty..");
    }
    else
    {
        printf("\n list is..");
        for(p1=last->next;p1!=last;p1=p1->next)
        {
            printf("\n %d",p1->info);
        }
        printf("\n %d",p1->info);
    }
}
void del()
{
    int val,flag=0;
    printf("\n enter the value");
    scanf("%d",&val);
    if(val==last->next->info)
    {
        p1=last->next;
        last->next=p1->next;
        free(p1);
        printf("\n node deleted at the beg");
        return;
    }
    else if(val==last->info)
    {
        for(p1=last->next;p1!=last;p1=p1->next)
        {
            p2=p1;
            p2->next=p1->next;
            last=p2;
            free(p1);
            printf("\n node to be delete at the end");
            return;
        }
    }
    else
    {
        for(p1=last->next;p1!=last;p1=p1->next)
        {
            if(val==p1->info)
            {
                flag=1;
                break;
            }
            p2=p1;
        }
        if(flag==1)
        {
            p2->next=p1->next;
            free(p1);
            printf("\n node to be deleted at the mid");
            return;
        }
        else
        {
            printf("\n value not found");
        }
    }
}
void count()
{
    int ctr=0;
    for(p1=last->next;p1!=last;p1=p1->next)
    {
        ctr++;
    }
    printf("\n count=%d",ctr+1);
}
void search()
{
    int v,flag=0;
    printf("\n enter the value");
    scanf("%d",&v);
    if(v==last->info)
    {
        printf("\n value found");
        return;
    }
    else{
    for(p1=last->next;p1!=last;p1=p1->next)
        {
            if(v==p1->info)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("\n value found");
        else
            printf("\n value not found");
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

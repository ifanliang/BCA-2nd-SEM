#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queu[MAX];
int front=-1,rear=-1;
void insert()
{
    int val;
    printf("\n enter the value");
    scanf("%d",&val);
    if((front==0)&&(rear==MAX-1))
    {
        printf("\n queue is overflow");
        return;
    }
    else if(front==-1)
    {
        front=rear=0;
        queu[rear]=val;
    }
    else if(rear==MAX-1&&front!=0)
    {
        rear=0;
        queu[rear]=val;

    }
    else
    {
        rear++;
        queu[rear]=val;
    }
}
void dis()
{

    int i;
    if(front==-1)
    {
        printf("\n empty queue");
    }
    else if(rear>=front)
    {
        for(i=front;i<=rear;i++)
        {
            printf("\n%d",queu[i]);
        }
    }
    else{
    for(i=front;i<MAX;i++)
    {
        printf("\n %d",queu[i]);
    }
    for(i=0;i<=rear;i++)
    {
        printf("\n %d",queu[i]);
    }
    }
}
void search()
{
    int i,n,flag=0;
    printf("\n enter the value to be search");
    scanf("%d",&n);
    for(i=front;i<=rear;i++)
    {
        if(queu[i]==n)
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
void del()
{
    if(front==-1)
    {
        printf("\n queu is empty");
        return;
    }
    else if(front==rear)
    {
        printf("\n last and only node to be deleted");
        front=rear=-1;
        return;
    }
    else if(front==MAX-1)
    {
        front=0;
        printf("\n deletion successful");
    }
    else{
        front++;
        printf("\n deletion successful");
    }
}
int main()
{
    int c;
    while(c)
    {
        printf("\n 1.insert");
        printf("\n 2.display");
        printf("\n 3.search");
        printf("\n 4.delete");
        printf("\n 5.exit");
        printf("\n enter the choice");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            insert();
            break;
        case 2:
             dis();
            break;
        case 3:
            search();
            break;
        case 4:
            del();
            break;
        case 5:
            exit(c);
            break;
        default:
            printf("\n wrong choice");
        }
    }
    return 0;
}

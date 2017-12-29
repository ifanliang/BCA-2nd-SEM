#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queu[MAX];
int front,rear;
void insert()
{
    int val,temp;
    printf("\n enter the number");
    scanf("%d",&queu[rear]);
    if(rear==MAX-1)
    {
        printf("\n queu is overflow");
    }
    if(front==-1||rear==-1)
    {
        front=rear=0;
        queu[rear]=val;
        return;
    }
    else
    {
        rear=rear+1;
        queu[rear]=val;
        return;
    }
    if(queu[rear]<queu[rear+1])
    {
        temp=queu[rear+1];
        queu[rear+1]=queu[rear];
        queu[rear]=temp;
    }
}
void dis()
{

    int i;
    if(front==-1&&rear==-1)
    {
        printf("\n QUEU is empty");
    }
    for(i=front;i<rear;i++)
    {
        printf("\n %d",queu[i]);
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
        printf("\n queu is underflow");
    }
    else if(front==rear)
    {
        printf("\n last and only node to be deleted");
        front=rear=-1;
        return;
    }
    else
    {
        front=front+1;
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
            {
                c=0;
                printf("\n program finished");
            }
            break;
        default:
            printf("\n wrong choice");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int front=0,rear=0;
int queu[MAX];
void insert()
{
    int c,val,j,temp[MAX];
    while(c)
    {
        printf("\n 1.input restrictive");
        printf("\n 2.output restrictive");
        printf("\n enter the choice");
        scanf("%d",&c);
    switch(c)
    {
    case 1:
        while(c)
        {
        printf("\n----- INPUT RESTRICTIVE ----\n");
        printf("\n 1.insert in rear");
        printf("\n 2.output from front");
        printf("\n 3.output from rear");
        printf("\n 4.exit");
        printf("\n enter the choice");
        scanf("\n %d",&c);
        switch(c)
        {
        case 1:
             if(front>=MAX || rear>=MAX)
                {
                    printf("\n queue is overflow can not insert another value");
                    return;
                }
                else
                    {
                        printf("\n enter the queue");
                        scanf("%d",&queu[rear]);
                        rear=rear+1;
                    }
                break;
        case 2:
             for(j=0;j<=rear;j++)
            {
                queu[j]=queu[j+1];
            }
            rear=rear-1;
            if(rear==-1)
            {
                rear=0;
                printf("\n queue is underflow");
                return;
            }
            if(rear==0)
            {
                printf("\n last node deleted");
                return;
            }
            break;
        case 3:
            rear=rear-1;
            if(rear==-1)
            {
                rear=0;
                printf("\n queue is underflow");
                return;
            }
            if(rear==0)
            {
                printf("\n last node  deleted");
                return;
            }
            break;
        case 4:
            c=0;
            printf("\n input rest is finished");
            break;
        }
    }
    case 2:
    while(c)
    {
        printf("\n----- OUTPUT RESTRICTIVE ----\n");
        printf("\n 1.insert in rear");
        printf("\n 2.insert in front");
        printf("\n 3.output from front");
        printf("\n 4.exit");
        printf("\n enter the choice");
        scanf("\n %d",&c);
        switch(c)
        {
        case 1:
                if(front>=MAX || rear>=MAX)
                {
                    printf("\n queue is overflow can not insert another value");
                    return;
                }
                else
                    {
                        printf("\n enter the queue");
                        scanf("%d",&queu[rear]);
                        rear=rear+1;
                    }

                break;
        case 2:

            if(front>=MAX || rear>=MAX)
            {
                printf("\n queue is overflow can not insert another value");
                return;
            }
            else
            {
                printf("\n enter the queue");
                scanf("%d",&val);
            }
            for(j=0;j<=rear;j++)
            {
               temp[j]=queu[j];
            }
            for(j=1;j<=rear+1;j++)
            {
                queu[j]=temp[j-1];
            }

            rear=rear+1;
            queu[0]=val;
            break;
        case 3:
            for(j=0;j<=rear;j++)
            {
                queu[j]=queu[j+1];
            }
            rear=rear-1;
            if(rear==-1)
            {
                rear=0;
                printf("\n queue is underflow");
                return;
            }
            if(rear==0)
            {
                printf("\n last node deleted");
                return;
            }
            break;
        case 4:
            c=0;
            {
                printf("output rest is finished");
            }
            break;
        }
    }
    }
    }
}
void display()
{
    int i;
    if(rear==0)
{
        printf("\n queue is empty");
}
    for(i=0;(i<MAX&&i<rear);i++)
    {
        printf("\n %d",queu[i]);
    }
}
int main()
{
    int ch;
    while(ch)
    {
        printf("\n menu \n");
        printf("\n 1.insert");
        printf("\n 2.display");
        printf("\n 3.exit");
        printf("\n enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
                insert();
                break;
        case 2:
            display();
            break;
        case 3:
            ch=0;
            {
                printf("\n program finished");
            }
            break;
        }
    }
    return 0;
}

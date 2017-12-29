#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int top=-1;
char stack[MAX];
char ch;
void push (char ch)
{
    if(top==MAX-1)
    {
        printf("\n stack overflow");
    }
    top=top+1;
    stack[top]=ch;
}
char pop()
{
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    ch=stack[top];
    top=top-1;
    return ch;
}
int main()
{
    char str[MAX];
    int i;
    printf("enter the string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=pop();
    }
    printf("\nreverse string=%s",str);
    return 0;
}

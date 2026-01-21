#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int s[SIZE], top = -1, ele;
void push()
{
    if(top == SIZE-1)
    {
        printf("stack overflow");
        return;
    }
    printf("enter the element to be inserted:\n");
    scanf("%d",&ele);
    s[++top]=ele;
}

void pop()
{
    if(top == -1)
    {
        printf("stack underflow");
        return;
    }
    printf("element deleted is %d\n",s[top]);
    top=top-1;
}

void display()
{
    if(top == -1)
    {
        printf("stack empty");
        return;
    }
    printf("elements are:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
}

void main()
{
    int a;
    for(;;)
{
    printf("menu:\n 1.push \n.pop\n 3.display\n 4.exit\n");
    printf("enter the choice:\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:push();
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:exit(0);
        default : printf("invalid choice!");
    }
}
}
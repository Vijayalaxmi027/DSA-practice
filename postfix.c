#include<stdio.h>
char infix[100],postfix[100],s[100];
int k=0, top=-1;
void push (char ele)
{
    s[++top]=ele;
}
char pop()
{
    return s[top--];
}
int precedence(char ele)
{
    switch(ele)
    {
        case '(' : return 1;
        case '+' : 
        case '-' : return 2;
        case '*' :
        case '/' :
        case '%' :
        case '^' : return 2;
        default : return 0;
    }
}
void convert(char ch)
{
    switch(ch)
    {
        case '(' : push(ch);
                   break;
        case ')': while((ch=pop()!='('))
                  {
                   postfix[k++]=ch;
                  }
                  break;
        case '+': case '-': case '*': case '/': case '%':case '^': while(precedence(s[top])>=precedence(ch))
        {
            postfix[k++]=pop();
        }
        push(ch);
        break;
        default : postfix[k++]=ch;
    }
 }
        void main()
        {
            int i;
            printf("enter a valid infix expression :\n");
           scanf("%s",infix);
            push('\0');
            for(i=0;infix[i]!='\0';i++)
            {
                convert(infix[i]);
            }
            while(s[top]!='\0')
            {
                postfix[k++]=pop();
            }
            printf("postfix expression is %s\n",postfix);
            }
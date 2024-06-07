#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX], top=-1;
void push(int data)
{
    if(top==MAX-1)
        printf("Stack is full");
    else
    {
        top++;
        s[top]=data;
    }
}
void pop()
{
    if(top==-1)
        printf("Stack is empty");
    else
    {
        int delete = s[top];
        top--;
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\n",s[i]);
    }
}
int peek()
{
    if(top==-1)
        printf("Stack is empty");
    else
        return s[top];
}
int main()
{
    push(5);
    push(7);
    push(8);
    push(4);
    push(6);
    display();
    pop();
    display();
    printf("Last element : %d ", peek());
}

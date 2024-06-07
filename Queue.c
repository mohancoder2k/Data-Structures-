#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX], front=-1, rear=-1;
void inq(int data)
{
    if(rear==MAX-1)
        printf("Queue is full\n");
    else
    {
        if(front==-1 && rear==-1)
            front=rear=0;
        else
            rear++;
            q[rear]=data;
    }
}
void deq()
{
    if(front==-1 && rear==-1)
        printf("queue is empty\n");
    else{
        int del = q[front];
        front++;
    }
}
void display()
{
     if(front==-1 && rear==-1)
        printf("queue is empty\n");
    else
    {
        printf("Elements in the queue are :\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t", q[i]);
        }
        printf("\n");
    }
}
int main()
{
    inq(1);
    inq(2);
    inq(3);
    inq(7);
    inq(9);
    display();
    deq();
    deq();
    printf("After dequeue :\n");
    display();
    return 0;
}

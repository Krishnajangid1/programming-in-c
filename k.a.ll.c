#include<stdio.h>
#define size 5
int Q[size];
int F=-1, R = -1;
void enqueue(int x)
{
    if(R==size-1)


    {
        printf("Queue is full\n");

    }
    else{
        R=R+1;
        Q[R]=x;

    }
    if(F==-1)
    F=0;

}
void Dequeue()
{
    if(F==-1 && R==-1)
    {
        printf("Q is empty");
    }
    else
    printf("Deleted element is %d", Q[F]);
       F=F+1;
}
void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    Dequeue();
    Dequeue();
    enqueue(25);

}
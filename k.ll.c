struct node{
    int data;
    struct node to next;
};
struct node *F, *R;
int dequeue()
{
    int x=-1;
    struct node *P;
    if(F==NULL){
        printf("Q is empty");
        printf("Q is empty");
else{
    P=F;
    F=F->next;
    x=P->data;
    free(P);
    P=NULL;
    }
    return x;
    
}
void enqueue(int y)
{
    struct node*new;
    new =  (struct node*)malloc(sizeof(struct node));
    new->data=y;
    new->next=NULL;
    if(F==NULL)
    F=R=new;
}
else R->next=new;
R=new;

void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    dequeue();
}

    
}
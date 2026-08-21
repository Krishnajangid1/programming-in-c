#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head = NULL, *temp = NULL, *new = NULL;
    int ch;

    do{
        new = (struct node*)malloc(sizeof(struct node*));
        printf("Enter the element to be insert: ");
        scanf("%d",&new->data);
        new->next = NULL;
        if(head == NULL){
            head = new;
            temp = new;

        }else{
            temp->next = new;
            temp = temp->next;
        }
        printf("Do you want to add more new data in your node: ");
        scanf("%d",&ch);

    }while(ch == 1);
    struct node *p;
    p=head;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;

    }
}
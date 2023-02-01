#include<Stdio.h>

struct node
{
    int data;
    struct node *next;
    
};
void insert_Begin(struct node *head,int ele){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
  
        newnode->data=ele;
        newnode->next=head;
        head=newnode;
    
}

void show(struct node *head){
    struct node *p=head;
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;

    }
}


int main(){
    int n=5;
    struct node *head=NULL;
    printf("enter the element:");
    for(int i=0;i<n;i++){
        int ele;
        scanf("%d",&ele);
        insert_Begin(head,ele);
    }
    show(head);
    printf("inserted");
}
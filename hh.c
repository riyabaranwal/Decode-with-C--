#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next , *prev;
};
struct node *head=NULL, *tail=NULL;
struct node *newnode , *ptr;
void create_list(int n){
printf("Enter no. of nodes : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
       printf("\n overflow");
    }
    else{
        printf("Enter info of newnode");
        scanf("%d", &newnode->info);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            ptr=newnode;
        }
        else{
            ptr->next=newnode;
            ptr=ptr->next;
        }
    }
}
}

void traverse_list(){
    while(ptr->next!=NULL){
        printf("%d",newnode->info);
        ptr=ptr->next;
    }
    printf("%d",newnode->info);
}

void insert_elementatspecific_pos(){
    struct node *ptr=head;
     int pos,ele,i;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter position : ");
    scanf("%d",&pos);
    printf("Enter info to insert : ");
    scanf("%d",&ele);
     while(ptr->next!=NULL && i<pos-1 ){
        printf("%d",newnode->info);
        ptr=ptr->next;
        i++;
    }
   
   newnode->next=ptr->next ;


}
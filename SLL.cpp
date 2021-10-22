#include <iostream>

using namespace std;

struct Node{
    int val;
    Node *next;
};

Node *head= NULL;

void insert_beg(int val){
    Node *node= new Node();
    node->val=val;
    node->next=head;
    head=node;
}

void insert_after(int val,int num){
    Node *node = new Node();
    node->val=val;
    Node *ptr = head;
    while(ptr->next!=NULL){
        if(ptr->val == num){
            node->next=ptr->next;
            ptr->next=node;
            break;
        }
        ptr=ptr->next;
    }
}

void insert_end(int val){
    Node *node = new Node();
    node->val=val;
    Node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    node->next=ptr->next;
    ptr->next=node;
}

void delete_beg(){
    Node *ptr=head;
    head=ptr->next;
    ptr->next=NULL;
}

void delete_end(){
    Node *ptr1=head;
    Node *ptr2=ptr1->next;
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
        ptr1=ptr1->next;
    }
    ptr1->next=NULL;
}

void delete_num(int num){
    Node *ptr1=head;
    Node *ptr2=ptr1->next;
    while(ptr2->next!=NULL){
        if(ptr2->val==num){
            ptr1->next=ptr2->next;
            ptr2->next=NULL;
            break;
        }
        ptr2=ptr2->next;
        ptr1=ptr1->next;
    }
}

void display(){
    Node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    insert_beg(3);
   insert_beg(2);
   insert_beg(1);
   insert_end(5);
   insert_end(6);
   insert_after(4,3);
   delete_beg();\
   delete_end();
   delete_num(4);
   display();
   

    return 0;
}

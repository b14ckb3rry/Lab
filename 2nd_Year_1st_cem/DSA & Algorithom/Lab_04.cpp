#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

class node{
    public:
        int val;
        node* next;
    node(int val){
        this->val=val;
        next=NULL;
    }
};

void insertTail(node*& head, node*& tail, int val){
    node* newNode=new node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void insertHead(node*& head, int val){
    node* newNode=new node(val);
    newNode->next=head;
    head=newNode;
}

void deleteHead(node*& head){
    node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}

void findAndDelet(node*& head, int val){
    node* temp=head;
    if(temp==NULL){
        cout<<"Empty"<<nl;
        return;
    }
    while(temp!=NULL){
        if(temp->val==val){
            deleteHead(head);
            return;
        }
        else if(temp->next->val==val){
            node* deleteNode=temp->next;
            temp->next=temp->next->next;
            delete deleteNode;
            return;
        }
        temp=temp->next;
    }
}

void countNode(node* head){
    node* temp=head;
    int counter=0;
    if(head==NULL){
        cout<<"Empty"<<nl;
        return;
    }
    while(temp!=NULL){
        counter++;
        temp=temp->next;
    }
    cout<<"Total node present : "<<counter<<nl;
}

void insertPosition(node*head, int val, int pos){
    node* newNode=new node(val);
    node* temp=head;
    for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void printList(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<"Value : "<<temp->val<<nl<<" Node Address : "<<temp<<" Next Node Address : "<<temp->next<<nl;
        temp=temp->next;
    }
    cout<<nl;
}

int32_t main()
{    
    node* head=NULL;
    node* tail=NULL;

    cout<<"Enter the number of Element of List : ";
    int t; cin>>t;
    cout<<"Insert at Head ? Enter 0 Or Insert at Tail ? Enter 1 : ";
    int cmd; cin>>cmd;
    cout<<"Enter Elements : ";
    while(t--){
        int x; cin>>x;
        if(cmd==0){
            insertHead(head, x);
        }
        else if(cmd==1){
            insertTail(head, tail, x);
        }
    }
    while(true){
        cout<<nl<<"Press any key to turminate program"<<nl;
        cout<<"Enter command to to operation"<<nl<<nl<<"Enter 1 to Display List"<<nl<<"Enter 2 to delete a value"<<nl<<"Enter 3 to count Node"<<nl;
        cout<<"Command Here : ";
        cin>>cmd;
        cout<<nl;
        if(cmd==1){
            cout<<nl<<"Present List : "<<nl;
            printList(head);
            cout<<nl;
        }
        else if(cmd==2){
            cout<<"Enter value to delete : ";
            int x; cin>>x;
            findAndDelet(head, x);
            cout<<"After delete the value : "<<nl;
            printList(head);
        }
        else if(cmd==3){
            countNode(head);
        }
        else if(cmd==4){
            int val, pos; cin>>val>>pos;
            insertPosition(head,val,pos);
        }
        else{
            break;
        }
    }
    
    return maru
}
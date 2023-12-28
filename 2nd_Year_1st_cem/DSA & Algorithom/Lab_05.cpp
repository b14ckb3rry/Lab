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
    tail->next=head;
}

void insertHead(node*& head, node*& tail, int val){
    node* newNode=new node(val);
    newNode->next=head;
    head=newNode;
    tail->next=head;
}

void deleteHead(node*& head, node*& tail){
    node* deleteNode=head;
    head=head->next;
    tail->next=head;
    delete deleteNode;
}

void findAndDelet(node*& head, node*& tail, int val){
    node* temp=head;
    if(temp==NULL){
        cout<<"Empty"<<nl;
        return;
    }
    while(temp!=NULL){
        if(temp->val==val){
            deleteHead(head, tail);
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

void countNode(node* head, node* tail){
    node* temp=head;
    int counter=0;
    if(head==NULL){
        cout<<"Empty"<<nl;
        return;
    }
    while(temp!=NULL){
        counter++;
        temp=temp->next;
        if(temp==tail){
            break;
        }
    }
    cout<<"Total Node Present : "<<counter+1<<nl;
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
        cout<<temp<<" "<<temp->val<<" "<<temp->next<<nl;
        if(temp->next==head){
            break;
        }
        temp=temp->next;
    }
    cout<<nl;
}

int32_t main()
{   
    node* head=NULL;
    node* tail=NULL;

    cout<<"Enter size of linked list : ";
    int t; cin>>t;
    cout<<"Insert Value : ";
    while(t--){
        int val; cin>>val;
        insertTail(head, tail, val);
    }
    while(true){
        cout<<nl<<nl;
        cout<<"Hit 1 to Print List"<<nl;
        cout<<"Hit 2 to Insert Tail"<<nl;
        cout<<"Hit 3 to Insert Position"<<nl;
        cout<<"Hit 4 to Delete Head Node"<<nl;
        cout<<"Hit 5 to Delete Node by Value"<<nl;
        cout<<"Hit 6 to Insert Head"<<nl;
        cout<<"Hit 7 to Count Node"<<nl;
        cout<<"Hit -1 Terminate program"<<nl;
        cout<<nl<<"Enter Command : ";
        int cmd; cin>>cmd;
        cout<<nl;
        if(cmd==1){
            printList(head);
        }
        else if(cmd==2){
            cout<<"Enter the value of the Node : ";
            int val; cin>>val;
            insertTail(head, tail, val);
        }
        else if(cmd==3){
            int pos, val;
            cout<<"Enter Position : "; cin>>pos;
            cout<<"Enter Value : "; cin>>val;
            insertPosition(head, val, pos);
        }
        else if(cmd==4){
            deleteHead(head, tail);
        }
        else if(cmd==5){
            cout<<"Enter the value to delete : ";
            int val; cin>>val;
            findAndDelet(head, tail, val);
        }
        else if(cmd==6){
            cout<<"Enter the value of the Node : ";
            int val; cin>>val;
            insertHead(head, tail, val);
        }
        else if(cmd==7){
            countNode(head, tail);
        }
        else if(cmd==-1){
            break;
        }
    }
    
    return maru
}
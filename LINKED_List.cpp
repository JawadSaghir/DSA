#include <iostream>
#include <string>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class linklist{
    Node *head;
    Node *tail;
    public:
    linklist(){
    head=tail=NULL;}
    void push_front(int value){
        Node* newnode=new Node(value);
        if(head==NULL && tail==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }}
    void triverse(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<" "<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<" NULL";
        cout<<endl;
    }
    void push_back(int value){
        Node* newnode=new Node(value);
        tail->next=newnode;
        tail=newnode->next;
        }
    void pop_front(){
    Node* temp=head;//we need something that points to Node 1 when 1 shift head to node 2
    head=head->next;
    temp->next=NULL;
    delete temp;
    }
    void pop_back(){
        Node* temp=head;
        while(head->next==tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
        
    }
        
};
int main()
{
    linklist ll;
    ll.push_front(4);
    ll.push_front(7);
    ll.push_back(2);
    ll.pop_front();
    ll.triverse();
    ll.pop_back();
    ll.triverse();
}
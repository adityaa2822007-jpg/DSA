#include<iostream>
using namespace std;
struct Node
{
    Node* next;
    int data;
};
int main()
{
    Node* head = new Node;
    head->data = 10;
    head->next=nullptr;

    Node* second = new Node;
    second->data = 20;
    second->next=nullptr;

    Node* third = new Node;
    third->data=30;
    third->next=nullptr;

    head->next=second;
    second->next=third;

    Node* newnode = new Node;
    newnode->data=40;
    newnode->next=nullptr;
    Node* temp=head;

    while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
    temp->next=newnode;
    
    temp=head;
    while(temp!=nullptr)
        {
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }
    cout<<"NULL";
}

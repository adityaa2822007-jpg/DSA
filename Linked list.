#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
int main()
{
    //first node
    Node* head = new Node;
    head->data = 10;
    head->next = nullptr;


    //2nd node
    Node* second = new Node;
    second->data = 20;
    second->next = nullptr;


    //connecting head node to second
    head->next = second;


    //3rd node
    Node* third = new Node;
    third->data = 30;
    third->next = nullptr;


    //connecting 2nd to 3rd
    second->next = third;


    //print
    Node* temp = head;

    while(temp !=nullptr)
    {
        cout<<temp->data<<" ";

        temp = temp->next;
    }


}

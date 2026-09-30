#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    // Existing first node
    Node* head = new Node;
    head->data = 10;
    head->next = nullptr;

    // Second node
    Node* second = new Node;
    second->data = 20;
    second->next = nullptr;

    head->next = second;

    // Third node
    Node* third = new Node;
    third->data = 30;
    third->next = nullptr;

    second->next = third;


    // INSERT 5 AT BEGINNING

    Node* newNode = new Node;

    newNode->data = 5;

    newNode->next = head;

    head = newNode;


    // Traversal
    Node* temp = head;

    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

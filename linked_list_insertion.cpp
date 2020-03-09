#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

void print(Node* head)
{
    cout << "The elements of linked list are\n";
    Node* temp = NULL;
    temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}

int main()
{
    int size,inp;
    Node* head = NULL;
    Node* temp = NULL;
    cout << "Enter the size of linked list: ";
    cin >> size;
    cout << "Enter the elements of linked list one by one\n";
    for(int i=0;i<size;i++)
    {
        cin >> inp;
        if(head==NULL)
        {
            Node* newNode = new Node();
            newNode->data = inp;
            newNode->next = NULL;
            head = newNode;
            temp = head;
        }
        else
        {
            Node* newNode = new Node();
            newNode->data = inp;
            newNode->next = NULL;
            temp->next = newNode;
            temp = temp->next;
        }
    }
    print(head);
    return 0;
}

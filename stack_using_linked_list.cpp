#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *push(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}

void pop(Node *&head)
{
    if (head == NULL)
    {
        cout << "Stack Underflow" << endl;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete (temp);
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    Node *head = node1;
    cout << "Stack Before" << endl;
    print(head);
    cout << endl;
    push(head, 20);
    push(head, 30);
    push(head, 40);
    push(head, 50);
    cout << "Stack after" << endl;
    print(head);
    cout << endl;
    pop(head);
    print(head);
    return 0;
}
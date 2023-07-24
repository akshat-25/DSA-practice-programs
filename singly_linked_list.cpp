#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        // Memory Free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int data)
{

    // New Node Creation
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int data)
{
    // New Node Creation
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{

    // Insert At Start
    if (position == 1)
    {
        InsertAtHead(head,data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting At Last Position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }

    // Creating a node for data
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    //deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp -> next = NULL;
        delete temp;
    }

    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // for tail
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(int argc, char const *argv[])
{
    // Creating a Node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // Head pointed to new node
    Node *head = node1;
    Node *tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 22);
    print(head);

    InsertAtPosition(head, tail, 2, 56);
    print(head);

    InsertAtPosition(head, tail, 1, 111);
    print(head);

    InsertAtPosition(head, tail, 5, 112);
    print(head);

    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;

    deleteNode(5, head, tail);
    print(head);
    cout << "Head is " << head->data << endl;
    cout << "Tail is " << tail->data << endl;
    return 0;  
}
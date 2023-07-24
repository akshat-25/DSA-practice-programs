#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;

        // Memory free
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << value << endl;
    }
};

// Traversing a Linked List
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

int getLength(Node *&head)
{
    Node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // Insert At start
    if (position == 1)
    {
        insertAtHead(head, tail, data);
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
        insertAtTail(tail, head, data);
        return;
    }

    // Creating a node for data
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    (temp->next)->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    // Deleting the first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete (temp);
    }

    else
    {
        Node *curr = head;
        Node *back = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            back = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        back->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(89);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    cout << getLength(head) << endl;

    insertAtHead(head, tail, 55);
    print(head);

    insertAtHead(head, tail, 155);
    print(head);

    insertAtHead(head, tail, 255);
    print(head);

    insertAtTail(tail, head, 13);
    print(head);

    cout << "Value of head is " << head->data << endl;
    cout << "Value of tail is " << tail->data << endl;

    insertAtTail(tail, head, 1389);
    print(head);

    insertAtPosition(head, tail, 3, 56);
    print(head);

    insertAtPosition(head, tail, 1, 60);
    print(head);

    insertAtPosition(head, tail, 9, 60);
    print(head);

    deleteNode(3, head);
    print(head);

    deleteNode(1, head);
    print(head);

    deleteNode(7, head);
    print(head);
    return 0;
}
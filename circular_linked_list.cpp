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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{

    // Empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    // Non-Empty list
    // Assuming that the element is present in the list
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // Element found -> curr is representing element wala node

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{

    // Empty List
    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    // Empty List
    if (tail == NULL)
    {
        cout << "List is empty, please check again" << endl;
        return;
    }

    else
    {
        // Non -empty
        // assuming that the "value" is present in the Linked List
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 Node Linked List

        if (curr == prev)
        {
            tail = NULL;
        }

        // >=2 Node Linked List
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete (curr);
    }
}
int main(int argc, char const *argv[])
{
    Node *tail = NULL;

    // Empty list
    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 5);
    print(tail);

    insertNode(tail, 5, 8);
    print(tail);
    insertNode(tail, 8, 3);
    print(tail);
    insertNode(tail, 5, 1);
    insertNode(tail, 7, 2);
    print(tail);

    deleteNode(tail, 8);
    print(tail);
    return 0;
}
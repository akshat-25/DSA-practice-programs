#include <iostream>

using namespace std;
class ll
{
public:
    int data;
    ll *next;

    ll(int d)
    {
        this->data = d;
        this->next=NULL;
    }
};

ll *reverse(ll *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    ll *curr = head;
    ll *prev = NULL;
    ll *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    prev = head;
    return head;
}

void print(ll *&head)
{
    ll *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    ll *n1 = new ll(2);
    ll *n2 = new ll(3);
    ll *n3 = new ll(4);
    ll *n4 = new ll(5);
    ll *n5 = new ll(6);
    ll *head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    print(head);
    reverse(head);
    cout << endl;
    print(head);
    return 0;
}
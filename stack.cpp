#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
            return arr[top];

        cout << "Stack is Empty" << endl;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;

        return false;
    }
};

int main(int argc, char const *argv[])
{
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.peek() << endl;

    return 0;
}
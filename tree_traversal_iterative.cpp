#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
        return NULL;

    cout << "Enter the data to insert in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data to insert in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

/* If state is -> 
 1 -> pre, state++,left
 2 -> in, state++,right
 3 -> post,pop
*/
void solve(Node *root)
{
    stack<pair<Node *, int>> s; //(Node,state)
    s.push({root, 1});
    string pre = "";
    string in = "";
    string post = "";

    while (!s.empty())
    {
        Node *node = s.top().first;
        int state = s.top().second;

        if (state == 1)
        {
            pre += to_string(node->data);
            s.top().second = state + 1;
            if (node->left)
                s.push({node->left, 1});
        }

        else if (state == 2)
        {
            in += to_string(node->data);
            s.top().second = state + 1;
            if (node->right)
                s.push({node->right, 1});
        }

        else
        {
            post += to_string(node->data);
            s.pop();
        }
    }
    cout << pre << endl;
    cout << in << endl;
    cout << post << endl;
}
// 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 -1 -1
int main(int argc, char const *argv[])
{
    Node *root = NULL;
    root = buildTree(root);
    solve(root);
    return 0;
}
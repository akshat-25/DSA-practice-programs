#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// It is a comment to check the git status
// It is one more comment to check the status
// Third comment to check status
node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data for inserting in left of" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of" << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrdertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // Purana level traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // Queue still have some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(node *root)
{
    // base case
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root)
{
    // base case
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{
    // base case
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "Enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(int argc, char const *argv[])
{

    node *root = NULL;
    /*
   // Creating a tree
   root = buildTree(root);
   // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

   cout << "Printing the Level Order Traversal" << endl;
   levelOrdertraversal(root);

   cout << "Inorder Traversal is: " << endl;
   inOrder(root);
   cout << endl;

   cout << "Preorder Traversal is: " << endl;
   preOrder(root);
   cout << endl;

   cout << "Postorder Traversal is: " << endl;
   postOrder(root); */

    buildFromLevelOrder(root);
    levelOrdertraversal(root);
    return 0;
}

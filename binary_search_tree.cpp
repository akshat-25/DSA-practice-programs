#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > (root->data))
    {
        // insert into right part
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        // insert into left part
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrdertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
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

void inOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

Node *minValue(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxValue(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

 Node* deleteFromBST(Node* root, int val){
   //base case
   if(root == NULL)
   {
    return root;
   }

   if(root -> data == val){
    //0 child
    if(root -> left == NULL && root -> right == NULL){
        delete root;
        return NULL;
    }
    //1 child
    // left child
   if(root -> left != NULL && root -> right == NULL){
    Node* temp = root -> left;
    delete root;
    return temp;
   }

    //right child   
    if(root -> right != NULL && root -> left == NULL){
    Node* temp = root -> right;
    delete root;
    return temp;
   }
    //2 child
    if(root -> left != NULL && root -> right != NULL){
        int mini = minValue(root -> right) -> data;
        root -> data = mini;
        root -> right = deleteFromBST(root -> right,mini);
        return root;
    }
   }
   if(root -> data > val){
    root -> left = deleteFromBST(root -> left, val);
    return root;

   }
   else{
    root -> right = deleteFromBST(root -> right, val);
    return root;
   }
 }
int main(int argc, char const *argv[])
{
    Node *root = NULL;
    cout << "Enter the data to create BST" << endl;
    takeInput(root);
    cout << "Printing the BST" << endl;
    levelOrdertraversal(root);
    cout << "Printing Inorder Traversal" << endl;
    inOrder(root);
    cout << endl;
    cout << "Printing Preorder Traversal" << endl;
    preOrder(root);
    cout << endl;
    cout << "Printing Postorder Traversal" << endl;
    postOrder(root);
    cout << endl;
    cout << "Minimum value in the tree is " << minValue(root)->data << endl;
    cout << "Maximum value in the tree is " << maxValue(root)->data << endl;

    return 0;
}
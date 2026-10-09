#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

Node *buildTree(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }

    return root;
}

void printInRange(Node *root, int st, int end)
{
    if (root == NULL)
    {
        return;
    }
    if (st <= root->data && root->data <= end)
    { // c1:
        printInRange(root->left, st, end);
        cout << root->data << " ";
        printInRange(root->right, st, end);
    }
    else if (root->data < st)
    { // c2:
        printInRange(root->right, st, end);
    }
    else
    { // c3:
        printInRange(root->left, st, end);
    }
}

int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

    Node *root = buildTree(arr, 9);

    printInRange(root, 5, 12);

    return 0;
}
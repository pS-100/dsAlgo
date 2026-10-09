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
static int idx = -1;

Node *buildTree(vector<int> nodes)
{ // return root node n make strcture of left n right subtree in memory
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);  // left-sub tree
    currNode->right = buildTree(nodes); // right-sub tree

    return currNode;
}

int kthAncestor(Node* root, int node, int k) {
    if(root == NULL) {
        return -1;
    }
    if(root->data == node) {
        return 0;
    }
    
    int leftDist = kthAncestor(root->left, node, k);
    int rightDist = kthAncestor(root->right, node, k);

    if(leftDist == -1 && rightDist == -1) {
        return -1;
    }
    int validVal = leftDist == -1 ? rightDist : leftDist;

    if(validVal + 1 == k) {
        cout << "kth ancestor: " << root->data;
    }

    return validVal + 1;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node *root = buildTree(nodes);

    kthAncestor(root, 5, 2);

    return 0;
}

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

Node* lca2(Node* root, int n1, int n2) {
    // if(root-)
}


int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node *root = buildTree(nodes);

    return 0;
}

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

void getInorder(Node *root, vector<int> &nodes)
{
    if (root == NULL)
    {
        return;
    }

    getInorder(root->left, nodes);
    nodes.push_back(root->data);
    getInorder(root->right, nodes);
}

Node* bstFromVec(vector<int> nodes, int st, int end) {
    if(st > end) {
        return NULL;
    }
    int mid = st + (end - st)/2;
    Node *curr = new Node(nodes[mid]);
    curr->left = bstFromVec(nodes, st, mid - 1);
    curr->right = bstFromVec(nodes, mid + 1, end);

    return curr;
}

Node* balanceBst(Node *root) {
    //get inorder sequence
    vector<int> nodes;
    getInorder(root, nodes);

    //build balanced bst
    return bstFromVec(nodes, 0, nodes.size()-1);

}

void preorderOfBalancedBst(Node *root1) {
    if(root1 == NULL) {
        return;
    }
    cout << root1->data << " ";
    preorderOfBalancedBst(root1->left);
    preorderOfBalancedBst(root1->right);

}

int main()
{
    //bst
    Node *root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);

    Node* root1 = balanceBst(root);

    preorderOfBalancedBst(root1);

    return 0;
}
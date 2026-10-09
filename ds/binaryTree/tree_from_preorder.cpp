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

// preoder Traversal
void preorder(Node *root)
{
    if (root == NULL)
    {
        cout << "-1 ";
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// inoder Traversal
void inorder(Node *root)
{
    if (root == NULL)
    {
        // cout << "-1 ";
        return;
    }
    // left
    inorder(root->left);
    // root
    cout << root->data << " ";
    // right
    inorder(root->right);
}

// postoder Traversal
void postoder(Node *root)
{
    if (root == NULL)
    {
        // cout << "-1 ";
        return;
    }
    // left
    postoder(root->left);
    // right
    postoder(root->right);
    // root
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> Q;
    Q.push(root);
    Q.push(NULL);

    while (!Q.empty())
    {
        Node *curr = Q.front();
        Q.pop();
        if (curr == NULL)
        {
            cout << endl;
            if (Q.empty()) // for after last node
            {
                break;
            }
            Q.push(NULL); // to track next line
        }
        else
        {
            cout << curr->data << " ";

            if (curr->left != NULL)
            {
                Q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                Q.push(curr->right);
            }
        }
    }
}

// height
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt = max(leftHt, rightHt) + 1;

    return currHt;
}

// no. of nodes
int countNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = countNode(root->left);
    int rightCount = countNode(root->right);

    return leftCount + rightCount + 1;
}
// sum of node
int sumNode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftSum = sumNode(root->left);
    int rightSum = sumNode(root->right);

    return leftSum + rightSum + root->data;
}

// diameter of tree app1- O(n^2)
// int diameter(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int currDia = height(root->left) + height(root->right) + 1; // root inc
//     int leftDia = diameter(root->left);
//     int rightDia = diameter(root->right);

//     return max(currDia, leftDia, rightDia);
// }

// diam of tree approach2 - O(n)
pair<int, int> diam2(Node *root)
{
    if (root == NULL)
    {
        return make_pair(0, 0);
    }

    //(diam, height)
    pair<int, int> leftInfo = diam2(root->left);   // LD, LH
    pair<int, int> rightInfo = diam2(root->right); // RD, RH

    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDia = max(currDiam, max(leftInfo.first, rightInfo.first));
    int finalHt= max(leftInfo.second, rightInfo.second)+1;

    return make_pair(finalDia, finalHt);
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node *root = buildTree(nodes);
    // cout <<"root: " << root->data;

    preorder(root);
    cout << endl;

    inorder(root);
    cout << endl;

    postoder(root);
    cout << endl;

    levelOrder(root);

    cout << "Height: " << height(root) << "\n";

    cout << "No. Of nodes: " << countNode(root) << "\n";

    cout << sumNode(root) <<"\n";

    cout << diam2(root).first;

    return 0;
}
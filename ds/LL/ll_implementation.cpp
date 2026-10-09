#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL; // don't know future node address
    }

    ~Node()
    {
        // cout << "~Node" << "\n";
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

// collection of node
class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL; // initialy ll have no nodes
        tail = NULL;
    }

    ~List()
    {
        // cout << "list" << "\n";
        if (head != NULL)
        {
            delete head;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;
        cout << endl;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        temp = tail;
    }

    int searchItr(int key)
    {
        Node *temp = head;
        int pos = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return pos;
            }
            temp = temp->next;
            pos++;
        }
        return -1;
    }

    int searchRec(int key)
    {
        Node *temp = head;
        int pos = 0;

        return helper(key, pos, temp);
    }

    int helper(int key, int pos, Node *temp)
    {
        if (temp == NULL)
        {
            return -1;
        }

        if (temp->data == key)
        {
            return pos;
        }
        else
        {
            return helper(key, pos + 1, temp->next);
        }
    }

    void reverse()
    {
        Node *prev = NULL;
        Node *curr = head;

        while (curr != NULL)
        {
            Node *next = curr->next;
            curr->next = prev;

            // updation for next itr
            prev = curr;
            curr = next;
        }

        head = prev; // prev = newhead
    }

    int getSize()
    {
        Node *temp = head;
        int size = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            size++;
        }
        return size;
    }

    void removeNNode(int n)
    {
        int size = getSize();
        Node *prev = head;

        for (int i = 1; i < (size - n); i++) //i = size-n => prev => deletion of n
        {   
            cout << i << ","  ;
            prev = prev->next;
        }
        cout << endl;
        Node *p = prev ->next;
        cout << "go to delete: " << p->data;  
        prev->next = prev->next->next;
    }
};

int main()
{
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);

    // 2->3->4->5->NULL

    ll.push_back(6);
    ll.printList();

    ll.insert(8, 3);
    ll.printList();

    ll.pop_front();
    ll.printList();

    ll.pop_back();
    ll.printList();

    cout << ll.searchItr(4) << "\n";

    cout << ll.searchRec(8);

    ll.reverse();
    ll.printList();

    ll.removeNNode(2);
    ll.printList();

    return 0;
}
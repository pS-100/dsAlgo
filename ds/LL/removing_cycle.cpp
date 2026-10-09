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
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

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

    void makeCycle()
    {
        // tail -> node containing 3
        Node *temp = head;

        while (temp->data != 3)
        {
            temp = temp->next;
        }

        tail->next = temp;
        cout << "cycle created \n";
    }

    void removeCycle()
    {
        Node *slow = head;
        Node *fast = head;
        bool isCycle = false;
        

        while (fast != NULL && fast->next != NULL)
        {
             
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "cycle detected\n";
                isCycle = true;
                break;
            }
        }

        if (!isCycle)
        {
            cout << "cycle doesn't exist\n";
            return;
        }

        slow = head;
        if (slow == fast)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            Node *prev = fast;
            while (slow != fast)
            {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL;
            cout<< "cycle remove";
        }
    }
};

int main()
{
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);

    ll.makeCycle();

    ll.removeCycle();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev = NULL;
    int data;
    Node *next = NULL;
    Node(int d)
    {
        this->data = d;
    }
    Node()
    {
    }
} *head = new Node(), *last;
void create(vector<int> v)
{
    head->data = v[0];
    last = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *t = new Node(v[i]);
        t->prev = last;
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void print(Node *p)
{
    if (p == NULL)
        return;
    cout << p->data << " ";
    print(p->next);
}
void print_rev(Node *p)
{
    if (p == NULL)
        return;
    cout << p->data << " ";
    print_rev(p->prev);
}
void delete_d(int pos)
{
    Node *p = head;
    while (pos--)
        p = p->next;
    if (p)
    {
        (p->prev)->next = p->next;
        (p->next)->prev = p->prev;
        free(p);
    }
}
int main()
{
    create({1,2, 3, 4, 5, 6, 7, 8, 9});
    print(head);
    cout << endl;
    print_rev(last);
    cout << endl;
    delete_d(4);
    print(head);
    cout << endl;
    print_rev(last);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
} *head = new Node, *last;
void create(Node**head,vector<int> v)
{
    int n = v.size();
    (*head)->data = v[0];
    (*head)->next = NULL;
    last = *head;
    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node;
        temp->data = v[i];
        last->next = temp;
        temp->next = NULL;
        last = temp;
    }

}
void insert_at_start(int val)
{
    Node *temp = new Node;
    temp->data = head->data;
    temp->next = head->next;
    head->data = val;
    head->next = temp;
}
void insert_at_pos(int val, int pos)
{
    pos--;
    Node *p = head;
    while (--pos)
        p = p->next;
    Node *temp = new Node;
    temp->data = val;
    temp->next = p->next;
    p->next = temp;
}
void print(Node *p)
{
    if (p == NULL)
        return;
    cout << p->data << " ";
    print(p->next);
}
void printReverse(Node *p)
{
    if (p == NULL)
        return;
    print(p->next);
    cout << p->data << " ";
}
void delete_node(int pos)
{
    pos--;
    if (pos == 0)
    {
        Node *t = head;
        head = head->next;
        free(t);
    }
    else
    {
        Node *p = head, *q;
        while (pos--)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            free(p);
        }
    }
}
void reverse()
{
    Node *current = head, *forward = NULL, *previous = NULL;
    while (current != NULL)
    {
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
    }
    head = previous;
}
void reverse_recurrsion(Node *current, Node *previous)
{
    if (current == NULL)
    {
        head = previous;
        return;
    }
    reverse_recurrsion(current->next, current);
    current->next = previous;
}
Node *reverse_short(Node *Head)
{
    if (Head == NULL || Head->next == NULL)
        return Head;
    Node *chota_head = reverse_short(Head->next);
    Head->next->next = Head;
    Head->next = NULL;
    return chota_head;
}
void delete_val(int val){
    Node* p=head;
    while (p&&p->next)
    {
        if(p->next->data==val)
            p->next=p->next->next;
        else
        p=p->next;
    }
    if(head->data==val)head=head->next;
}

int main()
{
    int n;
    // cout<<"Enetr no  of e"<<endl;
    // cin >> n;
    // create(5);
    Node* HEAD=new Node;
    create(&HEAD,{1, 2, 34, 4, 5,2});
    head=HEAD;
    print(head);
    cout << endl;
    printReverse(head);
    cout << endl;
    // insert_at_start(16);
    insert_at_pos(16, 3);
    print(head);
    cout << endl;
    delete_node(3);
    print(head);
    cout << endl;
    // reverse_recurrsion(head,NULL);
    // print(head);
    // cout << endl;
    // // print(reverse_short(head));
    // cout<<endl;
    delete_val(2);
    print(head);
   
    return 0;
}
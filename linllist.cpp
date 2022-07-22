#include<bits/stdc++.h>
using namespace std ;
class Node{
    public:
    int data;
    Node *next;
};
Node* create(vector<int>v){
    Node *head=new Node();
    head->data=v[0];
    Node*temp=new Node();
    head->next=temp;
    
    return head;
}
int main()
{
    
    return 0 ;
}
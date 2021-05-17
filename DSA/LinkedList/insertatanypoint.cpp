#include<bits/stdc++.h>
using namespace std;

#define ll long long

//Defining the Class Node
class node 
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }

    node() :data(0), next(nullptr) {}

    node(int x, node *next) : data(x), next(next) {}
};
// Function to Insert new node at the tail/back

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}
// Function to print the LinkedList
void display(node* &head)
{
    cout<<endl;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
//Inserting at any node(0 based indexing)
void insertAtany(node* &head,int val,int pos)
{
    node* n=new node(val);
    node* temp=head;
    //Edge Case 
    if(pos==0 || head==NULL)
    {
        n->next=head;
        head=n;
        return;
    }
    node* curr=head;
    node* prev=head;
    while(pos!=1)
    {
        curr=curr->next;
        prev=prev->next;
        pos--;
    }
    curr=curr->next;
    n->next=curr;
    prev->next=n;

    display(head);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    node* head=NULL;

    insertAtTail(head,1);
    /*insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,3);
    insertAtTail(head,6);*/

    insertAtany(head,2,1);
    
    return 0;
}
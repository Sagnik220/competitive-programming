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

void removeDuplicate(node* &head)
{
    if(head==NULL && head->next==NULL)
        display(head);
    node* curr=head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            curr->next=curr->next->next;
        }
        else
        {
            curr=curr->next;
        }
    }
    display(head);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    removeDuplicate(head);
    
    return 0;
}
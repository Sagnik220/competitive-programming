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
void sortList(node* &head)
{
    node* tempz=head;
    if(tempz==NULL || tempz->next==NULL)
        display(tempz);
    node *start = new node();
    start->next = head;
    node *curr = head, *prev = start;
    while(curr)
    {
        if(curr->next && (curr->next->data< curr->data))
        {
            // Insertion 
            while(prev->next && (prev->next->data< curr->next->data))
                prev = prev->next;
            node *temp = prev->next;
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = temp;
            prev = start;
        } 
        else
            curr = curr->next;
    }
    display(start->next);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,3);
    insertAtTail(head,6);
    
    return 0;
}
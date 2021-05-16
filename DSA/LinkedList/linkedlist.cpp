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
// 1. Function to Insert new node at the tail/back

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
// 2. Function to insert new node at the head

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
// 3. Function to print the LinkedList

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

// 4. Function to search a node
bool search(node* head,int val)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
// 5. Function to calculate length of LinkedList
void length(node* &head)
{
    node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<count<<endl;
}
// 6. Function to Delete Node at head
void deleteAtHead(node* &head)
{
    node* temp=head;
    head=head->next;
    delete temp;
}

// 7. Function to reverse LinkedList
void reverseLinkedList(node* &head)
{
    node* temp=head;
    if(temp==NULL || temp->next==NULL)
        display(temp);
    node* curr=temp;
    node* prev=NULL;
    node* tempz;
    while(curr!=NULL)
    {
        tempz=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tempz;
    }
    display(prev);
}
// 8. Function to Sort LinkedList
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

//Main Function to test all the self defined functions
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    node* head=NULL;

    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,4);

    display(head);
    //Function to search an element in the LinkedList

    //cout<<search(head,5)<<endl;
    
    //Function to calculate length of LinkedList
    
    //length(head);
    
    //deleteAtHead(head);

    //reverseLinkedList(head);
    //display(head);
    //displaysortList(head);
    reverseLinkedList(head);

    return 0;

}


#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct TreeNode
{
    int val;
    TreeNode* left=NULL;
    TreeNode* right=NULL;
    TreeNode(): val(0),left(NULL),right(NULL){}
    TreeNode(int x): val(x),left(NULL),right(NULL){}
    TreeNode(int x,TreeNode* left,TreeNode* right): val(x),left(left),right(right){}

};

void Levelordertraversal(TreeNode* &root)
{
    TreeNode* temp=root;
    queue<TreeNode*>q;
    q.push(temp);
    while(!q.empty())
    {
        TreeNode* tmp = q.front();
        q.pop();
        cout<<tmp->val<<" ";
        if(tmp->left!=NULL)
            q.push(tmp->left);
        if(tmp->right!=NULL)
            q.push(tmp->right);
    }
    cout<<"\n";
}

void search(TreeNode* &root,int val)
{
    TreeNode* temp=root;
    if(temp==NULL)
        cout<<"Not found"<<"\n";
    queue<TreeNode*>q;
    q.push(temp);
    while(!q.empty())
    {
        TreeNode* tmp = q.front();
        q.pop();
        if(tmp->val==val)
        {
            cout<<"Found"<<"\n";
        }
        if(tmp->left!=NULL)
        {
            q.push(tmp->left);
        }
        if(tmp->right!=NULL)
        {
            q.push(tmp->right);
        }
    }
}
int main()
{
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->right=new TreeNode(4);
    root->right->left=new TreeNode(5);
    //   1
    // 2   4
    //3   5
//1.Level Order traversal of tree 1->2->4->3->5
    Levelordertraversal(root);
//2.Searching Node in BinaryTree
    search(root,3);

    return 0;
}

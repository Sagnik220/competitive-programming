#include <bits/stdc++.h>

using namespace std;

vector<int>arr[10001];     /*Adjacency list of 10^4*/
int vis[10001], dis[10001]; /*Visited and Distance array respectively to store the visited nodes and distance of those nodes from source node*/

void BFS(int src)
{
	queue<int>q;
	q.push(src);/*Push the node*/
	vis[src]=1;/*Intialize the node pushed by making it visited*/
	dis[src]=0;/*First node is always at dist 0*/

	while(!q.empty())/*Run the while loop until queue is not empty*/
	{
		int curr=q.front();/*Updating the current node*/
		q.pop();/*Popping the node after updating by curr*/

		for(auto child:arr[curr])/*Traversing through every node of the adjacency list*/
		{
			if(vis[child]==0)
			{
				q.push(child);/*Push the child node if its not visited*/
				dis[child]=dis[curr]+1;/*Update the distance of next level nodes as only the next level nodes can be accessed by the prev node in BFS*/
				vis[child]=1;/*Mark the child node now as visited*/
			}
		}
	}
}

int main()
{
	int t;
	cin>>t; /*Test Case*/
	while(t--)
	{
		int n,m; /*N=Nodes M=edges*/
		cin>>n>>m;
		for(int i=1;i<=n;i++)/*Clearing arrays after each iteration*/
		{
			arr[i].clear();
			vis[i]=0;
		}
		for(int i=1;i<=m;i++)/*Input the graph*/
		{
			int x,y;
			cin>>x>>y;
			arr[x].push_back(y);
			arr[y].push_back(x);

		}
		BFS(1);/*Call BFS from source node*/

		cout<<dis[n]<<endl;/*We store the values in distance array so we can easily print out the distance of any node*/
	}
}


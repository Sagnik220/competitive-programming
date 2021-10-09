#include <bits/stdc++.h>
using namespace std;


int main() 
{
   int nodes,edges;
   cin>>nodes>>edges;
   vector<vector<int>>graph(nodes+1,vector<int>(nodes+1,0));
   for(int i=0;i<edges;i++)
   {
       int u,v;
       cin>>u>>v;
       graph[u][v]=1;
       graph[v][u]=1;
   }
   for(int i=0;i<nodes+1;i++)
   {
       for(int j=0;j<nodes+1;j++)
       {
           cout<<graph[i][j]<<" ";
       }
       cout<<endl;
   }
    
	return 0;
}

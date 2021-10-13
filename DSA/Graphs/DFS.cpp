#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<int>*l;
    
    public:
        Graph(int v)
        {
            V=v;
            l=new vector<int>[V];
        }
        
        void add_edge(int i,int j,bool undir=true)
        {
            l[i].push_back(j);
            if(undir==true)
            {
                l[j].push_back(i);
            }
        }
        
        void dfshelper(int node,vector<bool>&visited)
        {
            visited[node]=true;
            cout<<node<<"-->";
            for(int nbrs:l[node])
            {
                if(!visited[nbrs])
                {
                    dfshelper(nbrs,visited);
                }
            }
            return;
        }
        
        void dfs(int source)
        {
            vector<bool>visited(V,false);
            dfshelper(source,visited);
            
        }
        void printlist()
        {
            for(int i=0;i<V;i++)
            {
                cout<<i<<"-->";
                for(auto node:l[i])
                {
                    cout<<node<<",";
                }
                cout<<endl;
            }
        }
};

int main() 
{
    int nodes,edges;
    cin>>nodes>>edges;
    Graph g(nodes);
    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x>>y;
        g.add_edge(x,y);
    }
    g.dfs(1);
    
	return 0;
}
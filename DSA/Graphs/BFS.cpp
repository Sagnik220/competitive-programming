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
        
        void bfs(int source)
        {
            std::queue<int>q ;
            vector<bool>visited(V,false);
            
            q.push(source);
            visited[source]=true;
            while(!q.empty())
            {
                int front=q.front();
                cout<<front<<"-->";
                q.pop();
                for(auto nbrs:l[front])
                {
                    if(!visited[nbrs])
                    {
                        q.push(nbrs);
                        visited[nbrs]=true;
                    }
                }
            }
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
    g.bfs(1);
    
	return 0;
}
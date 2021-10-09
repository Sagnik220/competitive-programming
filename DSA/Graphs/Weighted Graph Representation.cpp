#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<pair<int,int>>*l;
    
    public:
        Graph(int v)
        {
            V=v;
            l=new vector<pair<int,int>>[V];
        }
        
        void add_edge(int i,int j,int wt,bool undir=true)
        {
            l[i].push_back({j,wt});
            if(undir==true)
            {
                l[j].push_back({i,wt});
            }
        }
        
        void printlist()
        {
            for(int i=0;i<V;i++)
            {
                cout<<i<<"-->";
                for(auto node:l[i])
                {
                    cout<<node.first<<" "<<"corresponding weight"<<" "<<node.second<<" "<<",";
                }
                cout<<endl;
            }
        }
};

int main() 
{
    int nodes,edges,wt;
    cin>>nodes>>edges;
    Graph g(nodes);
    for(int i=0;i<edges;i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        g.add_edge(x,y,wt);
    }
    g.printlist();
    
	return 0;
}
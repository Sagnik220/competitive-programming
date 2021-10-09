#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int>*l;
    
    public:
        Graph(int v)
        {
            V=v;
            l=new list<int>[V];
        }
        
        void add_edge(int i,int j,bool undir=true)
        {
            l[i].push_back(j);
            if(undir==true)
            {
                l[j].push_back(i);
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
    int n;
    cin>>n;
    Graph g(n);
    for(int i=0;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        g.add_edge(x,y);
    }
    g.printlist();
    
	return 0;
}

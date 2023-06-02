#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>
class graph
{
    public:
        unordered_map<T, list<T> > adj;

        void addEdge(T u, T v, bool direction)
        {
            //direction = 0 -> undirected
            //direction = 1 -> directed

            // creating edge from u to v
            adj[u].push_back(v);
            if(direction == 0)
            {
                adj[v].push_back(u);
            }
        }

        void printAdjacent()
            {   
                for(auto i:adj)
                {
                    cout<<i.first << "->";
                    for(auto j:i.second)
                    {
                        cout<< j<<", ";
                    }
                    cout<<endl;
                }


            }
        
        

};
void AdjencyMatrix(int m)
        {
            int arr[m][m];
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if((i<j ) || (j<i ))
                    {
                         arr[i][j] = 1;
                    }
                    else{
                        arr[i][j] = 0;
                    }
                }
            }
        }
            void print(int m)
            {
                int arr[m][m];
                for(int i=0; i<m; i++)
                {
                    for(int j=0; j<m; j++)
                    {
                        cout << arr[i][j] << " ";
                    }
                    cout<< endl;
                }
            }
 int main()
 {
    /*int n;
    cout<< "Enter the number of edges"<< endl;
    cin>>n;

    int m;
    cout<<"Enter the number of nodes"<< endl;
    cin>>m;
    graph<int> g;
    for(int i=0; i<m;i++)
    {
        int u, v;
        cin>> u>>v;
        g.addEdge(u,v,0);

    }

    g.printAdjacent(); */

    int p;
    cout<<"Enter the number of nodes"<< endl;
    cin>>p;
    
    AdjencyMatrix(p);
    print(p);

    return 0;
 }
#include <iostream>
#include <vector>

using namespace std;

class graph{
    vector<vector<int>> adj_matrix;
    public:
    graph(int n){
        adj_matrix = vector<vector<int>>(n,vector<int>(n,0));
    }
    void add_edge(int u,int v){
        adj_matrix[u][v] = 1;
    }
    void print(){
        cout<<"Adjacency matrix: "<<endl;
        int n = adj_matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<adj_matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n; cin>>n;
    graph g(n);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(2,0);
    g.add_edge(1,1);
    g.print();
    return 0;
}









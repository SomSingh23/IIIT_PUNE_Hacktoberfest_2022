class Solution
{
    public:
    bool doDFS(int N, int cnt, vector<bool> visited, vector<int> adj[], int idx){
        visited[idx] = true;
        cnt++;
        if(cnt == N){
            return true;
        }
        for(auto &e : adj[idx]){
            if(visited[e] == false){
                bool isTrue = doDFS(N, cnt, visited, adj, e);
                if(isTrue){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        vector<int> adj[N];
        for(int i = 0; i < Edges.size(); i++){
            int u = Edges[i][0];
            int v = Edges[i][1];
            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        }
        vector<bool> visited(N, false);
        for(int i = 0; i < N; i++){
            bool isHamiltonian = doDFS(N, 0, visited, adj, i);
            if(isHamiltonian){
                return true;
            }
        }
        return false;
    }
};
 

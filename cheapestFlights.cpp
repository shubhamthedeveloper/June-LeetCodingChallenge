class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pair<int,int>>> list(n) ;
        
        for(vector<int>& f: flights){
            list[f[0]].push_back({f[1],f[2]});
        }
            priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
            q.push({0,src,K+1});
        
        while(!q.empty()){
            vector<int> top = q.top();
            q.pop();
            
            int d = top[0];
            int u = top[1];
            int edge = top[2];
            if(dst == u) return d;
            if(edge > 0) 
                for(pair<int,int>& v : list[u]){
                    q.push({d+v.second,v.first,edge-1});
                }
        }
            
        return -1;
    }
};
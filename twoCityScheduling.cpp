class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();        
        unsigned int minCost = 0;
        
        //sort on the diff of ith person's cost of city A - city B
        sort(begin(costs),end(costs),
             [](vector<int>& v1,vector<int>& v2)
             {return (v1[0]-v1[1]<v2[0]-v2[1]);});
      	
      	//for first half cost to city A is min.
      	//for second half cost to city B is min.
        for(int i=0;i<n;i++){
            if(i<n/2){
                minCost += costs[i][0];
            }else{
                minCost += costs[i][1];
            } 
        }
        return minCost;
    }
};


    
    
    
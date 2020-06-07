class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> result;
        sort(begin(people),end(people),
             [](const vector<int>& a,const vector<int>&b){
                 return (a[0]>b[0]||(a[0]==b[0]&&a[1]<b[1]));
             });
        
        for(auto& x:people)
        {
            result.insert(begin(result)+x[1],x);
        }
        return result;
    }
};
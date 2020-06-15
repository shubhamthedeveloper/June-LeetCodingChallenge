class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return nums;
        sort(begin(nums),end(nums));
        
        vector<int> next(n,-1);
        vector<int> size(n,1);
        int max_len = 1;
        int max_ind = 0;
      
        for(int i= n-1;i>=0;i--){
            int j =i+1;
            int _max = 0;
            int max_id = i;
            while(j<n){
                if(nums[j]%nums[i] == 0 && size[j] >_max){
                    _max = size[j];
                    max_id = j;
                }
                j++;
            }
            if(max_id != i){
                size[i] += size[max_id];
                next[i] = max_id;
                if(_max +1 > max_len){
                    max_len = _max+1;
                    max_ind = i;
                }
            }
        }
        vector<int> result;
        int cur = max_ind;
        while(cur>=0){
            result.push_back(nums[cur]);
            cur = next[cur];
        }
        return result;
    }
};
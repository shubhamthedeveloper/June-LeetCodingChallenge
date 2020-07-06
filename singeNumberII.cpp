class Solution {
public:


    int singleNumber(vector<int>& nums) {
        
     multiset<int> res;
        for(int x: nums){
            res.insert(x);
        }
        for(auto i = res.begin(); i != res.end(); i++){
            if(res.count(*i) == 1){
                return *i;
            }
        }
        return -1;    
    }


    int singleNumber(vector<int>& nums){
        map<int,int> mp;
        for(const auto& i:nums){
            mp[i]++;
        }
        for(const auto& i : mp){
            if(i.second == 1)
                return i.first;
        }
        return -1;
    }
  
    
    int singleNumber(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(count(nums.begin(),nums.end(),nums[i]) == 1)
                return nums[i];
        }
        return -1;
    }

};

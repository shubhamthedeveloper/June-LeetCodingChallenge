class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(begin(nums),end(nums),target);
            if(it == end(nums)){
                nums.push_back(target);
                sort(begin(nums),end(nums));
                auto itr = find(begin(nums),end(nums),target);
                return itr-nums.begin();
            }
        return it-nums.begin();
    }
};
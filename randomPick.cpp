class Solution {
public:
    vector<int> freq; // cummulative freq. array
    Solution(vector<int>& w) {
        freq.push_back(w[0]);
        for(int i=1;i<w.size();i++){
            freq.push_back(freq[i-1]+w[i]);
        }
    }
    
    int pickIndex() {
        int n = rand()%freq[freq.size()-1]; // het one random number
        auto it = upper_bound(begin(freq),end(freq),n); // take the lower or upper bound
        return it-freq.begin(); // get the index
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
class RandomizedSet {
    private: unordered_set<int> data;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        auto it = data.find(val);
        if(it == data.end()){
            data.insert(it,val);
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        auto it = data.find(val);
        if(it != data.end()){
            data.erase(it);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int n = rand()%data.size();
        auto s = data.begin();
        advance(s,n);
        return *s;
            
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
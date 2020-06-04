class Solution {
public:
   
    //Two Pointers 
    void reverseString(vector<char>& s) {
        int start = 0;
        int last = s.size()-1;
        if(start > last) return;
        while(start <=last){
            swap(s[start++], s[last--]);
        }      
    }
     
    //using stack
   /* void reverseString(vector<char>& s){
        stack<char> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            st.push(s[i]);
        }
        s.erase(s.begin(),s.end());
        //for(char c : s)
            //cout << c;
        //cout << s;
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
        //return s;} */
    
};
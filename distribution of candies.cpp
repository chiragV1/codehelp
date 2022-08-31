class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int n = candyType.size();
        for(int i=0;i<n ;i++) {
            s.insert(candyType[i]);
        }
        
        if(s.size()==n/2) {
            return n/2;
        }
        else if(s.size() > n/2) {
            return n/2;
        }
        else if(s.size()<n/2) {
            return s.size();
        }
        return -1;
    }
};

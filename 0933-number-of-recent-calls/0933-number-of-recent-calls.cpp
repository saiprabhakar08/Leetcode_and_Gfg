class RecentCounter {
public:
    int i = 0;
    vector<int> calls;
    RecentCounter() {}
    int ping(int t) {
        calls.push_back(t);
        if (calls.size() == 1) {
            return 1;
        }
        else
        {
            while(!(calls[i]>=(t-3000))) i++;
            return calls.size()-i;
        }
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
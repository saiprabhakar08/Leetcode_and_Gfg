class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>typesOfCandies;
        for(auto it:candyType)
        {
            typesOfCandies[it]++;
        }
        if((typesOfCandies.size()) < (candyType.size()/2)) return typesOfCandies.size();
        else return candyType.size()/2;
        
    }
};
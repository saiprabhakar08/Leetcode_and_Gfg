class Solution {
public:
    string sortSentence(string s) {
        vector<string>A;
        string z="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                A.push_back(z);
                z="";
            }
            z+=s[i];
        }
        A.push_back(z);
        z="";
        for(int i=1;i<=A.size();i++){
            for(int j=0;j<A.size();j++){
                if(A[j][A[j].size()-1]-'0'==i){
                    A[j].erase(A[j][A[j].size()-1],1);
                    z+=A[j]+" ";
                }
            }
        }
        return z;
    }
};
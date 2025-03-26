class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8) return false;
        int flag1=0,flag2=0,flag3=0;
        for(int i=0;i<password.size();i++)
        {
            int temp=(int)password[i];
            cout<<temp<<" ";
            if(temp>=65 and temp<=90) flag1=1;
            else if(temp>=97 and temp<=122) flag2=1;
            else if(temp>=48 and temp<=57) flag3=1;
        }
        if(flag1==0 or flag2==0 or flag3==0) return false;
        string special="!@#$%^&*()-+";
        int flag4=0;
        for(int i=0;i<password.size();i++)
        {
            if(special.find(password[i])!=string::npos) flag4=1;
        }
        if(flag4==0) return false;
        for(int i=0;i<password.size()-1;i++)
        {
            if(password[i]==password[i+1]) return false;
        }
        return true;
        
    }
};
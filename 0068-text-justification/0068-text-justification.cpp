class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<vector<int>>spaces;
        int linespace = 0,c = 0;
        for(int i = 0 ; i < words.size() ; i++)
        {
            int temp = linespace;
            temp += words[i].size();
            // if((i+1) != words.size()) temp += 1;
            if(temp > maxWidth)
            {
                int gaps = 0, rem = 0;
                linespace--;
                if((c-1)!=0)
                {
                    gaps = (maxWidth - linespace) / (c-1);
                    rem = (maxWidth - linespace) % (c-1);
                }
                // cout<<linespace<<endl;
                spaces.push_back({c,gaps,rem});
                c = 0;
                linespace = 0;
                i--;
            }
            else if(temp == maxWidth)
            {
                spaces.push_back({c+1,0,0});
                c = 0;
                linespace = 0;
            }
            else
            {
                c++;
                linespace = temp;
                if((linespace + 1) > maxWidth)
                {
                    spaces.push_back({c,0,0});
                    linespace = 0;
                    c = 0;
                }
                else
                {
                    linespace++;
                }
                if((i+1) == words.size())
                {
                    vector<int>tempPair = {c,0,0};
                    spaces.push_back(tempPair);
                }
            }
        }
        for(auto it : spaces)
        {
            cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
        }
        vector<string>ans;
        int i = 0;
        for(int j = 0 ; j < spaces.size() ; j++)
        {
            string temp = "";
            if(spaces[j][0] == 1)
            {
                temp += words[i];
                int temp2 = maxWidth - words[i].size();
                while(temp2--)
                {
                    temp += ' ';
                }
                i++;
            }
            else if((j+1) == spaces.size())
            {
                int line = 0;
                while(i < words.size() && spaces[j][0])
                {
                    temp+=words[i];
                    --spaces[j][0];
                    if(spaces[j][0] != 0)
                    {
                        temp += ' ';
                    }
                    i++;
                }
                int temp3 = maxWidth - temp.size();
                while(temp3--)
                {
                    temp += ' ';
                }
            }
            else
            {
                while(i < words.size() && spaces[j][0])
                {
                    temp+=words[i];
                    --spaces[j][0];
                    if(spaces[j][0] != 0)
                    {
                        temp += ' ';
                        for(int k = 0 ; k < spaces[j][1] ; k++)
                        {
                            temp += ' ';
                        }
                        if(spaces[j][2])
                        {
                            temp += ' ';
                            spaces[j][2]--;
                        }
                    }
                    i++;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
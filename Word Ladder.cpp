#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3598/

#### SOLUTION

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st;
        queue<string>q;
        bool ispresent=false;
        
        for(int i=0;i<wordList.size();i++)
        {
            st.insert(wordList[i]);
            if(wordList[i]==endWord)
                ispresent=true;
        }
        
        if(ispresent==false)
            return 0;
        
        q.push(beginWord);
        int len=0,qsize;
        
        while(!q.empty())
        {
            qsize=q.size();
            len++;
            while(qsize--)
            {
                string t=q.front();
                q.pop();
                for(int i=0;i<t.length();i++)
                {
                    string x=t;
                    for(char j='a';j<='z';j++)
                    {
                        x[i]=j;
                        if(x==t)
                            continue;
                        if(x==endWord)
                            return len+1;
                        if(st.find(x)!=st.end())
                        {
                            q.push(x);
                            st.erase(x);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
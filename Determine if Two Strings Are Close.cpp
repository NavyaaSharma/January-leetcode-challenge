#### PROBLEM LINK
//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3613/

#### SOLUTION

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;
        
        int f1[26],f2[26];
        bool m1[26],m2[26];
        
        for(int i=0;i<26;i++)
        {
            f1[i]=0;
            f2[i]=0;
            m1[i]=false;
            m2[i]=false;
        }
        
        for(int i=0;i<word1.length();i++)
        {
            f1[word1[i]-'a']++;
            f2[word2[i]-'a']++;
            m1[word1[i]-'a']=true;
            m2[word2[i]-'a']=true;
        }
        
        sort(f1,f1+26);
        sort(f2,f2+26);
        
        bool check1=true,check2=true;
        for(int i=0;i<26;i++)
        {
            if(f1[i]!=f2[i])
            {
                check2=false;
                break;
            }
            if(m1[i]!=m2[i])
            {
                check1=false;
                break;
            }
        }
        
        return (check1 && check2);
    }
};
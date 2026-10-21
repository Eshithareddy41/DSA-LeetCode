class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastseen(256,-1);
        int i=0;
        int j;
        int max_len=0;
        for(j=0;j<s.size();j++)
        { char ch=s[j];
           if(lastseen[ch]>=i)
            { i=lastseen[ch]+1; }

            lastseen[ch]=j;

            max_len=max(max_len,j-i+1);
        }

      return max_len;    
    }
};
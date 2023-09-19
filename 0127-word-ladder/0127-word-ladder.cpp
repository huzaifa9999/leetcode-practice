class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>s;
        for(auto &it:wordList)
        {
            if(it!=beginWord)
            s.insert(it);
            }
        
        
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        
        while(!q.empty())
        {
            string word=q.front().first;
            int level=q.front().second;
            if(word==endWord) return level;
            q.pop();
 
            for(int i=0;i<word.length();i++)
            {   char original =word[i];
                for(char j='a';j<='z';j++)
                {
                    word[i]=j;
                    if(s.find(word)!=s.end())
                    {
                                
                        q.push({word,level+1});
                        auto it=s.find(word);
                        s.erase(it);
                        
                    }
                }
             word[i]=original;
            }
            
        }
        return 0;
    }
};
bool isAnagram(vector<int>a,vector<int>b)
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                return false;                
            }
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int>res;
        int n=s.size();
        int m=p.size();
        if(n==0 || m>n)
        {
            return res;
        }
        
        vector<int>freqText(26,0);
        vector<int>freqPat(26,0);
        
        for(int i=0;i<m;i++)
        {
            freqText[s[i]-'a']++;
            freqPat[p[i]-'a']++;
        }
        
        if(m==n)
        {
            if(isAnagram(freqText,freqPat))
                res.push_back(0);            
            return res;
        }
        for(int i=m;i<=n;i++)
        {
            if(isAnagram(freqText,freqPat))
            {
                res.push_back(i-m);
            } 
            if(i==n)break;
            freqText[s[i]-'a']++;
            freqText[s[i-m]-'a']--;
        }
        return res;
    }
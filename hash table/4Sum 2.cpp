int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) 
    {
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
                int v=A[i]+B[j];
                mp[v]++;
            }
        }
        for(int i=0;i<C.size();i++)
        {
            for(int j=0;j<D.size();j++)
            {
                int v=0-(C[i]+D[j]);
                count+=mp[v];
            }
        }
        return count;
    }
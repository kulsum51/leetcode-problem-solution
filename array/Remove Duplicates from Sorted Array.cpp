
int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0)return n;
        int i=1, k=0;
        while(i<n)
        {
            if(nums[i]!=nums[k])
            {
                nums[++k]=nums[i];
            }
            i++;
        }
        return k+1;
    }

int search(vector<int>& nums, int target) {
        int n=nums.size(),l=0,r=n-1,res=-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(nums[m]==target)
            {
                res=m;break;
            }
            if(nums[m]<target)l=m+1;
            else r=m-1;
        }
        return res;
    }
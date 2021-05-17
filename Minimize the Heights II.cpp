// time - O(nlogn) . space - O(1)
// https://leetcode.com/problems/smallest-range-ii/
Minimize the Heights II
int getMinDiff(int nums[], int n, int k) {
        int high;
        int low;
        sort(nums,nums+n);
        //int n = nums.size();
        int res = nums[n-1]-nums[0]; // max difference initially
        for(int i=0; i<n-1; ++i)
        {
            int j = i+1;
            high = max(nums[n-1]-k,nums[i]+k); // the more closer they get the lesser the difference -> [ nums[i]+k - (nums[j]-k) ]
            low = min(nums[0]+k,nums[j]-k);
            if(low<0) // If the height becomes <0 , then, we don't consider it and move on.
                continue;
            res = min(res,high-low);
        }
        return res;
    }

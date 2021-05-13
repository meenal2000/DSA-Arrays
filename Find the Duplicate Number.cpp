// https://leetcode.com/problems/find-the-duplicate-number/

// O(nlogn)
int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size()-1;
        int mid;
        while(low < high)
        {
            mid = (low+high)/2;
            int cnt = 0;
            for(auto x: nums)
            {
                if(x <= mid)
                {
                    ++cnt;
                }
            }
            if(cnt > mid)
            {
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return high;
    }
    
    // O(n) using maps
    
    int findDuplicate(vector<int>& nums) {
        int key=0;
        map<int,int> mp;
        for(int i:nums)
        {
            if(mp[i]>0)
            {
                key=i;
                break;
            }
            mp[i]++;
        }
        return key;
    }
    
    // O(n) using bucketing
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; ++i)
        {
            if( nums[abs(nums[i])] < 0 )
            {
                ans = abs(nums[i]);
                break;
            }
            else
            {
                nums[abs(nums[i])] = (-1)*nums[abs(nums[i])];
            }
        }
        return ans;
    }

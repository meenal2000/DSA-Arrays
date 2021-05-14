// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#

// time - O(n) , space - O(n)

int trappingWater(int arr[], int n){
        int prefix[n];
        int suffix[n];
        prefix[0] = arr[0];
        suffix[n-1] = arr[n-1];
        int ans = 0;
        for(int i=1; i<n-1; ++i)
        {
            prefix[i] = max(prefix[i-1],arr[i]); 
        }
        for(int i=n-2; i>0; --i)
        {
            suffix[i] = max(suffix[i+1],arr[i]); 
        }
        for(int i=1; i<n-1; ++i)
        {
            ans += max(min(prefix[i-1],suffix[i+1])-arr[i],0 );
        }
        return ans;
    }

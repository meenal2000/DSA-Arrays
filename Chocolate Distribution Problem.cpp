// time - O(n2)
// Make all the subsets of size m using the original array


// time - O(nlogn)
// space - O(1)
// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#
long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long ans = LONG_MAX;
        for(int i=0; i<n; ++i)
        {
            if(i+m-1 < n)
            {
                ans = min(ans,a[i+m-1]-a[i]);
            }
            else
            {
                break;
            }
        }
        return ans;
    }  

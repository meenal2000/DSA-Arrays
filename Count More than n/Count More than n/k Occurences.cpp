// https://practice.geeksforgeeks.org/problems/count-element-occurences/1#
// O(n2) - Keep counting freq through a nested for loop and add it to ans if it's eligible

// O(nlogn)  - Sort the array and then, count the freq , add it to ans if it's eligible

// O(n) space , O(n) time
int countOccurence(int arr[], int n, int k) {
        map<int,int> mp;
        int ans = 0;
        for(int i=0; i<n; ++i)
        {
            mp[arr[i]]++;
        }
        for(auto x: mp)
        {
            if(x.second > (n/k) )
            {
                ++ans;
            }
        }
        return ans;
    }

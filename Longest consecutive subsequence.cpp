// Naive solution
// O(nlogn) - time 
// O(n) - space complexity
// the observation is to eliminate the duplicates first and then proceed with logic
// Sort the array . Store the array without duplicates in a new array .
vector<int> v;
v.push_back(arr[0]);
//insert repeated elements only once in the vector
for (int i = 1; i < n; i++)
{
    if (arr[i] != arr[i - 1])
        v.push_back(arr[i]);
}
// Then, intialize cnt = 0;
if(i>0 && arr[i] = arr[i-1]+1)
  ++cnt;
else
{
  cnt = 1;
}

// Update max = max(max,cnt);
// return max;  // Nd u r done . Yippie!

// time - O(n)
// space - O(n)

int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if( n < 1 )
            return 0;
        unordered_set <int> s;
        int maxlength = 1;
        for(int i=0; i<n; ++i)
        {
            s.insert(nums[i]);
        }
        for(int i=0; i<n; ++i)
        {
            if( s.find(nums[i]-1) == s.end() )
            {
                int cnt = 0;
                for(int j=nums[i] ;s.find(j) != s.end() ; ++j)
                {
                    ++cnt;
                }
                maxlength = max(maxlength, cnt);
            }
        }
        return maxlength;
    }
// It can also be done using priority queue 
// In O(n) space , O(n) time;
priority_queue<int, vector<int>, greater<int> > pq;
    for (int i = 0; i < N; i++) {
       
        // adding element from
        // array to PriorityQueue
        pq.push(arr[i]);
    }
 
    int prev = pq.top();
    pq.pop();

    int max = 1;
    while (!pq.empty()) {
       
    
        if (pq.top() - prev > 1) {
          
            c = 1;
            prev = pq.top();
            pq.pop();
        }

        else if (pq.top() - prev == 0) {
            prev = pq.top();
            pq.pop();
        }
        else {

            c++;
            prev = pq.top();
            pq.pop();
        }
       

        if (max < c) {
            max = c;
        }
    }
    return max;
}


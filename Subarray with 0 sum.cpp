O(n3) using three nested for loops

O(n2) using two nested loops . The second goes through every subarray starting from i;

O(n) using set;

bool subArrayExists(int arr[], int n)
    {
        set<int> s;
        int sum = 0;
        for(int i=0; i<n; ++i)
        {
            sum += arr[i];
            if(arr[i]==0 || s.find(sum) != s.end() || sum==0) // The sum=0 condition is necessary . consider -> (10, -10)
            {
                return true;
            }
            else
            {
                s.insert(sum);
            }
        }
        return false;
    }

// naive - time O(n3) . Generate all possible subsets and choose the desired one.

// time - O(n2)
// space - O(1)
// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#

bool find3Numbers(int A[], int n, int sum)
    {
        sort(A,A+n);
        for(int i=0; i<n-2; ++i)
        {
            int s = i+1;
            int e = n-1;
            while(s<e)
            {
                if(A[i]+A[s]+A[e] == sum)
                {
                    return true;
                }
                else if(A[i]+A[s]+A[e] > sum)
                {
                    --e;
                }
                else
                {
                    ++s;
                }
            }
        }
        return false;
    }

// Using hashing . time - O(n2) . space - O(n)

 for (int i = 0; i < arr_size - 2; i++)
    {
        // Find pair in subarray A[i+1..n-1]
        // with sum equal to sum - A[i]
        unordered_set<int> s;
        int curr_sum = sum - A[i];
        for (int j = i + 1; j < arr_size; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
            {
                printf("Triplet is %d, %d, %d", A[i],
                       A[j], curr_sum - A[j]);
                return true;
            }
            s.insert(A[j]);
        }
    }
 
    // If we reach here, then no triplet was found
    return false;

// Time - O(n*m)
// Space - O(1)

// Start from the first element of a2 and search it in a1 . Do this for all the elements in a2. Accordingly, if all elements found return true.

// Time - O(mlogm + n*logm)

// Sort a1 array . Search each element of a2 in a1 using binary search . If element not found return false else true;

string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1 + n);
    for(int i=0; i<m; ++i)
    {
        int s = 0;
        int e = n-1;
        bool check = 0;
        while(s <= e)
        {
            int m = (s+e)/2;
            if(a1[m] == a2[i])
            {
                check = 1;
                break;
            }
            else if(a1[m] > a2[i])
            {
                e = m-1;
            }
            else
            {
                s = m+1;
            }
        }
        if(!check)
           return "No";
    }
    return "Yes";  
}

//  time - O(nlogn+mlogm+n+m) . Space - O(1)

    sort(a1,a1+n);
    sort(a2,a2+m);
    int s1 = 0;
    int s2 = 0;
    bool ans = true;
    while(s1 < n && s2 < m)
    {
        if(a1[s1] == a2[s2])
        {
            ++s1;
            ++s2;
        }
        else if(a1[s1] < a2[s2])
        {
            ++s1;
        }
        else
        {
            ans = false;
            break;
        }
    }
    if(ans && s2>=m) // IMPORTANT . 
        return "Yes";
    return "No";
// Hashing . Store all a1ss . Traverse all a2 . If not found , return 0;
Time - O(nlogn + mlogn)
  space - O(n)
  
// Set . Store a1 in unordered set . Store it's size . Store a2 now . Check the size again . If not same then, no else yes..
  time - O(n+m) If ordered use O(nlogn + mlogm)
  space - O(n+m)
  
  

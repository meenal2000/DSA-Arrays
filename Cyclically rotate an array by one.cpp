// Naive solution 

// time complexity - O(n)
// space complexity - O(1)

// Given an array, rotate the array by one position in clock-wise direction.
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#
void rotate(int arr[], int n)
{
    int tmp = arr[n-1];
    for(int i = n-2; i>=0; --i)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = tmp;
}

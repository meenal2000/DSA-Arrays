// Link - https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

// O(n3) using normal subarray making

// O(n2) using advanced subarray making
long long maxProduct(int *arr, int n) {
          long long int maxProd = LONG_MIN;
          for(int i=0; i<n; ++i)
          {
              long long int prod = 1;
              for(int j=i; j<n; ++j)
              {
                  prod *= arr[j];
                  if(prod > maxProd)
                  {
                      maxProd = prod;
                  }
              }
          }
          return maxProd;
	}

// O(n)

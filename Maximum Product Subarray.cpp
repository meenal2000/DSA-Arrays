// Link - https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

// O(n3) using normal subarray making

// O(n2) using advanced subarray making

// Questions to ask - Should the product of an empty subarray be considered zero ? If yes , make necessary changes.
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

// O(n) using the concept of keeping track of maxOverall , maxEndingHere , minEndingHere

long long maxProduct(int *arr, int n) {
          long long int maxOverall = arr[0];
          long long int maxEndingHere = arr[0];
          long long int minEndingHere = arr[0];
          for(int i=1; i<n; ++i)
          {
              long long int tmp = maxEndingHere;
              maxEndingHere = max(max(maxEndingHere*arr[i]*1LL,minEndingHere*arr[i])*1LL,arr[i]*1LL);
              minEndingHere = min(min(tmp*arr[i]*1LL,minEndingHere*arr[i])*1LL,arr[i]*1LL);
              maxOverall = max(maxEndingHere,maxOverall);
          }
          return maxOverall;
	}


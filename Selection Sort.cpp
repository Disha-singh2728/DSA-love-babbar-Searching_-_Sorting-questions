//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
// selection sort is unstable and inplace sorting algorithm
// time complexity=o(n^2) and space =o(1) in all three case best , worst and average
// with each pass we maintain sorted and unsorted array
// such that minimum element is fixed at starting position at eeach pass
class Solution
{
    public:
    int select(int arr[], int i)
    {
     
    }
     
    void selectionSort(int arr[], int n)
    {
      int i,j;
      for(i=0;i<n-1;i++){
        int min_i=i;
       for( j=i+1;j<n;j++)
       {
         if(arr[j]<arr[min_i])
          min_i=j;
       }
       swap(&arr[min_i],&arr[i]);
      }
    }
};

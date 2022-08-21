//{ Driver Code Starts
//Initial Template for C++

// C program for implementation of Bubble sort
#include <stdio.h>

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    // it is a inplace and stable sorting algorithm
    //works by repeatedly swapping the adjacent elements if they are in the wrong order
    // with each pass maximum element reaches to its final position
    // so in next pass we apply for n-1 elemts as 1 elemt is already in its correct position
    // for n elements we need n-1 pass to sort them
    // worst case occurs when array are in decreasing order
    // in worst case no. of comaprison==no. of swaps=n*(n-1)/2
    // time complexity in worst case is o(n^2) , space complexity o(1)
    // best case occurs when elements are almost sorted 
    // time complexity in best case o(n) and space complexity is o(1)
    void bubbleSort(int arr[], int n)
    {
     if(n==1) return;
     for(int i=0;i<n-1;i++){  // iteration for no. of passes
     // why n-1-i as with each pass one element gets sorted 
     // hence for 1st time compare all elemets
     // next time compare n-1-1 as i=1 i.e n-2 elments and so on
       for(int j=0;j<n-1-i;j++){ // in each pass compare adjacent no.
          if(arr[j]>arr[j+1])  // if no. at lower index is higher swap 
            {   
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
           }  
           //else move to next element and repeat same process
       }
     }
    }
};

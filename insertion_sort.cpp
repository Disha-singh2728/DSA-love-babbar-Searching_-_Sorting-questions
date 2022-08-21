//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    
    //The array is virtually split into a sorted and an unsorted part.
    //Values from the unsorted part are picked and placed at the correct position
    //in the sorted part.
    // inplace and sorted algorithm
    // efficient for almost sorted array or small no. of elemets
    // best case o(n) t.c
    // worst and average o(n^2) time complexity
    
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
      for(int i=1;i<n;i++){// let us suppose array is sorted from 0 to i-1 
       int key=arr[i]; // and we need to sort from i , hence take key as i-1
       int j=i-1;// as last element of sorted array is at i-1
       while(j>=0 && key<arr[j]){ // now start checking from i-1 if element at i-1 is bigger than key
         arr[j+1]=arr[j]; // then we have to move element at i-1 to i i.e j to j+1
         j--; // decrement j and check again if key is smaller then eleemt at j
         // if key is smaller than again move j to j+1 
         //and decrement j and check the correct position of key
       }
       // after loop is over i.e right position of key is found then put key into j+1 position
       // j+1 because when condition failed then we already 
       //decremented j, hence key correct positon was just before decrementing
       // hence j++
       arr[j+1]=key;
      }
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends

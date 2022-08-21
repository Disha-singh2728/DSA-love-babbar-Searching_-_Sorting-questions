// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	int i;
	vector<int> v; // take a vector for storing answer
	for(i=0;i<n;i++) // traverse array from 0th index
	{
	  if(i+1==arr[i]){   // if for any i , i+1==arr[i] i.e 0+1==1 as array start with 0 index we add 1 as fixed point means 1st element has 1 value or 2nd eleemnt has 2 value
	   v.push_back(arr[i]);  // so if we found any nth element value equal to n , put it into answer vector
    	}
	}
	if(!v.empty()) // if answer is present return v
	return v;
	}
};

#include<stdio.h> 

// Recursive Linear Search function
// It traverse whole array and check every element in the array sequentially until the given element is found.

int linearSearch(int arr[], int l, int r, int x) 
{ 
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
     return linearSearch(arr, l+1, r-1, x); 
} 
  
int main() 
{ 
    int arr[] = {10, 60, 20, 90, 30}, i; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    // Enter element to be searched
    int x = 90; 
    int index = linearSearch(arr, 0, n-1, x); 
    if (index != -1) 
       printf("Element %d is present at index %d in given array", x, index); 
    else
        printf("Element %d is not present in given array", x); 
    return 0; 
} 
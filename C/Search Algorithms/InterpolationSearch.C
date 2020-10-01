// Interpolation Search 
// It is combination of both binary and linear search algorithm.
// To Perform Interpolation Search We need Sorted Array

// Algorithm
// Step 1 − Start searching data from middle of the list.
// Step 2 − If it is a match, return the index of the item, and exit.
// Step 3 − If it is not a match, probe position.
// Step 4 − Divide the list using probing formula and find the new midle.
// Step 5 − If data is greater than middle, search in higher sub-list.
// Step 6 − If data is smaller than middle, search in lower sub-list.
// Step 7 − Repeat until match

#include<stdio.h> 

int interpolationSearch(int arr[], int n, int x) 
{ 
  int lo = 0, hi = (n - 1); 

  while (lo <= hi && x >= arr[lo] && x <= arr[hi]) 
  { 
    if (lo == hi){ 
      if (arr[lo] == x) return lo; 
      return -1; 
    } 

    int pos = lo + (((double)(hi-lo) / (arr[hi]-arr[lo]))*(x - arr[lo])); 
    
    if (arr[pos] == x) 
      return pos; 

    // If x is greater, x is in upper part 
    if (arr[pos] < x) 
      lo = pos + 1; 

    // If x is smaller, x is in the lower part 
    else
      hi = pos - 1; 
  } 
  return -1; 
} 
  
int main() 
{ 
  // Sorted Array
  int arr[] =  {10, 20, 30, 40, 50, 60, 70, 80}; 
  int n = sizeof(arr)/sizeof(arr[0]); 

  // Element to be searched
  int x = 20;  
  int index = interpolationSearch(arr, n, x); 

  if (index != -1) 
    printf("Element found at index %d in given array", index); 
  else
    printf("Element not found in given array."); 

  return 0; 
} 
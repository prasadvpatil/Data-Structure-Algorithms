
// C code to linearly search x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 
  
#include <stdio.h> 

int main() 
{ 
    int arr[5] = {2,3,4,10,40}; 
    int x = 10; 
    for(int i = 0; i < 5; i++)
	{
	    if(arr[i] == x)
	    {
	        printf("Index: %d", i);
	        return 0;
	    }
	}
	printf("Not Found");
	return -1;
} 

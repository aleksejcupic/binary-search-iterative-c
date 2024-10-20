// Iterative Binary Search
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int left, int right, int x){
    while (left <= right){
        int mid = left + (right - 1) / 2;

        // Check if x is at mid
        if(arr[mid] == x)
            return mid;
        
        // If x is greater, ignore left half
        if(arr[mid] < x)
            left = mid + 1;
        
        // If x is smaller, ignore right half
        else
            right = mid - 1;
        
    }

    // If not found, return -1
    return -1;
}


int main()
{
    int arr[] = {2, 3, 4, 10, 40};

    int loop;
    for(loop = 0; loop < 5; loop++)
      printf("%d\n", arr[loop]);

    int n = sizeof(arr);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);

    (result == -1) ? printf("Element is not preesnt in array") 
                : printf("Element is present at index %d\n", result);

    return 0;
}

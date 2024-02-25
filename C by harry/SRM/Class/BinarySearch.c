#include <stdio.h>
 


int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
 
        // If the key is present at the middle itself
       
        if (arr[mid] == x)
            return mid;
 
        // If the key is smaller than mid
        else if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);
 
        //otherwise if present element will be in the right subarray
        else if (arr[mid] < x)
        return binarySearch(arr, mid + 1, high, x);
    }
 
    //when element is not present in the array
    return -1;
}
 


int main()
{
    int arr[] = { 2, 3, 4,5,6, 10, 40 ,60,80,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}

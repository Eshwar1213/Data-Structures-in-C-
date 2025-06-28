#include<iostream>
#include <climits>
using namespace std;

int main(){

    //Basic Array Operations in C++

    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of size 5
    printf("Elements of the array are:\n");
    for(int i = 0; i < 5; i++) { // Loop through the array
        printf("%d ", arr[i]); // Print each element
    }

    printf("\n First element of the array is %d\n", arr[0]); // Print the first element
    printf(" Last element of the array is %d\n", arr[4]); // Print the last element
//--------------------------------------------------------------------------------------------------------
    //largest and Smallest Element in an Array

    int arr[5] = {1,3,5,8,2};
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0 ; i<5 ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout << "largest : " << largest;
    cout << "\nSmallest : " << smallest;
//--------------------------------------------
    int arr[5] = {1,3,5,8,2};
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0 ; i<5 ; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]); 
    }
    cout << "largest : " << largest;
    cout << "\nSmallest : " << smallest;
//---------------------------------------
    int arr[5] = {1,3,5,8,2};
    
    int smallest_index = 0;
    int largest_index = 0;
    
    for(int i = 0 ; i<5 ; i++){
        if(arr[i] > arr[largest_index]){
            largest_index = i;
        }
        if(arr[i] < arr[smallest_index]){
            smallest_index = i;
        }
        
    }
    cout << "largest : " << largest_index;
    cout << "\nSmallest : " << smallest_index;
//--------------------------------------------------------------------------------------------------------
    //linear Search in an Array

    int arr[5] = {1,3,5,9,8};
    
    int target = 8;
    int index = 0;
    
    for(int i =0 ; i<5 ; i++){
        if(arr[i] == target){
            index = i;
            break;
        }else{
            index = -1;
        }
    }
    
    cout << "index : " << index;
//--------------------------------------------------------------------------------------------------------

    //reverse an Array
    int arr[5] = {1,3,5,9,8};
    
    int start =0;
    int end = 4;
    
    while(start < end){
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
    
    for(int i = 0; i < 5; i++) { 
        cout << arr[i] << " ";
    }
    
//--------------------------------------------------------------------------------------------------------

    
    return 0;
}
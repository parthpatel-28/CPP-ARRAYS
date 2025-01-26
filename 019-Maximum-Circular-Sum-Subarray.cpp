//Given a circular array of size n, find the maximum subarray sum of the non-empty subarray.

#include <iostream>
using namespace std;

int normalSubMAx(int arr[] , int n){
// IN HIS FUNCTION USING KADANE'S ALGORITHM FOR FINDING NORMAL MAXIMUM SUBARRAY

int normalIndexMax = arr[0];
int normalMainMax = arr[0];

for(int i=1 ; i<n ; i++ ){

normalIndexMax = max(arr[i],(arr[i]+normalIndexMax));

normalMainMax = max(normalIndexMax,normalMainMax);

}

return normalMainMax ;
}

/////////////////////////////////////////////////////////////////////////////////

int circularSubMax(int arr[], int n){

// USING KADANCE'S ALGORITHM FOR FINDING CIRCULAR MAXIMUM SUBARRAY BY FINDIND MINMUM SUBARRAY AND SUBTRACTING IT FROM NORMAL SUBARRAY

//FOR FINDING MINIMUM SUBARRAY CONVERT ALL POSITIVE ELEMENTS TO NEGATIVE AND NEGATIVE TO POSITIVE AND USE KADANE'S ALGORITHM IN THE WAY YOU USE TO FIND MAXIMUM SUBARRAY.


int normalMax = normalSubMAx(arr,n); // Gives us normal subarray value through kadane's algorithm using above function


int arrMax = 0; // will stores total of all array elements 

for(int i=0 ; i<n ; i++){

    arrMax = arrMax+ arr[i];

    arr[i] = -arr[i];
}


int circularMin = normalSubMAx(arr,n); //after inversing the array we use normalSubMAx function to get min sum subarray.



int circularMax = arrMax + circularMin; //we get circular max by subtracting circularMin from total subArray sum.


return max(circularMax , normalMax);




}








int main(){

    int array[] = {5, -2, 3, 4};

 int n = sizeof(array) / sizeof(int); 

int main = circularSubMax(array,n);

cout << main << endl; 


    return 0;
}
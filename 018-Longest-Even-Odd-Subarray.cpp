//Given an array a[] of N integers, the task is to find the length of the longest Alternating Even Odd subarray present in the array.

#include <iostream> 
using namespace std;

int evenOdd(int arr[], int n){

if (n==0)
return 0;

int maxlength = 0;
int currentlength= 1;

for(int i = 1 ; i<n ; i++ ){

if((arr[i-1]%2) != (arr[i])%2 ){

currentlength++;

}else{

maxlength = max(maxlength,currentlength);
currentlength = 1;

}
}
 
return maxlength;


}

int main(){


int arr[] = { 1, 2, 3, 4, 5, 3, 7, 2, 9, 4 };
	// longest subarray should be 1 2 3 4 5 , therefore
	// length = 5
	int n = sizeof(arr) / sizeof(int);
	cout << "Length of longest subarray of even and odds "
			"is : "
		<< evenOdd(arr, n);


    return 0;
}


//Given array of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number. 

#include <iostream>
using namespace std;

//Function for maximum difference
int maxDiff(int arr[], int n){

//arr= array
//n = length of array


int maxDiff= arr[1]-arr[0];
int min_element = arr[0];


for(int i=1 ; i<n ; i++){

if((arr[i]-arr[0])> maxDiff){
    maxDiff = arr[i]-arr[0];
}

if(arr[i]<min_element){
    min_element = arr[i];
}

}
return maxDiff;
}


///////////////////////////////////////////////////////////////
int main(){

int array[]={1, 2, 90, 10, 110};

int n = 5;

int maxdiff = 0;

maxdiff = maxDiff(array,n);

cout << "MAXIMUM DIFFERENCE:-"<<maxdiff;

    return 0;
}
//Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element). 

#include <iostream>
using namespace std;

/////////////////////////Checking Majority////////////////////////////////////////

int majorityCheck(int arr[], int n){

// We are gonna use MOORE'S VOTING ALGORITHM

int count = 1;
int res = 0; //index

for(int i=1 ; i<n ;i++){

    if(arr[i]== arr[res]){
        count++ ;     //count++ if the current element is samse as previous one
    }
    
    else{
        count-- ; 
         
        if(count == 0){ //else if not same then count-- and 
        count++;   //, if after this count=0 then make count=1 and res = i(index)
        res = i;
    } 
    
    }
}

return res; //giving index of majore element
}

////////////////////////////Finding Majority//////////////////////////////////////
int major(int arr[], int n ){


 int res =   majorityCheck(arr,n); // getting the index of majority element from previous function

int count =0;

for(int i=0 ;i<n+1 ; i++ ){

if(arr[i]== arr[res]){
    count++;
}
} 

if(count >(n/2))
    cout << arr[res] << " is the major element";

    else 
    cout << "no major element";

return arr[res];

}
/////////////////////////////////////////////////////////////////////////////////

int main(){


int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
int n = sizeof(arr) / sizeof(arr[0]);

major(arr,n);

}
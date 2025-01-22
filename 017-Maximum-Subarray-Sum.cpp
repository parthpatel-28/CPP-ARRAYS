//Given an array arr[], the task is to find the elements of a contiguous subarray of numbers that has the largest sum.

#include <iostream>
using namespace std;

int maxSub(int arr[] , int n){



int mainMax = arr[0]; 
int indexMax =arr[0];
int start = 0;
int finish = 2;

for(int i=1 ; i<n ; i++){


if(arr[i]> (arr[i]+indexMax)){
    start = i;
}
indexMax = max(arr[i] , arr[i]+indexMax);


if(indexMax > mainMax){
    finish = i;
mainMax = indexMax;
}


}


cout << "Maximum Sum Sub-Array:- [";


for(int i =start ; i<=finish ; i++){
    cout << arr[i] << ", " ;
}

cout << "]" ;
    return mainMax;


}


int main(){

int array[] = { -2, -5, 6, -2,
			-3, 1, 5, -6};

 int n = sizeof(array) / sizeof(array[0]);

int main = 3;

main = maxSub(array,n);

cout << endl;
cout << "SUM: " <<main << endl;


    return 0;
}
//Given sorted array, arr[] consisting of N integers, the task is to find the frequencies of each array element.

#include <iostream>
using namespace std;

int freq(int arr[], int n){

int current= arr[0];
int curFreq = 1;

for(int i=1 ; i<n ; i++){


if(current == arr[i]){
    curFreq++;
}


if(current != arr[i]){
    cout << "frequency of :" <<current<< "is"<<curFreq <<endl;
    current = arr[i];
    curFreq = 1;
}


}

return 0;
}



int main(){

int array[]= {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10};
int n = 14;

freq(array,n);


    return 0;
}
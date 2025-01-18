//Write a program to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.

#include <iostream>
using namespace std;

int leader(int arr[], int n ){

    int max = arr[n-1];
cout << "LEADER ELEMENT:-";
cout << max << ",";
    for(int i=n-2 ; i>0 ; i-- ){
        if(arr[i]> max){

max=arr[i];
cout << max << ",";

        }
    }
return 0;
}


int main(){

int array[] = {1,10,3,6,2};

int n = 5;

leader(array,n);

return 0;



}
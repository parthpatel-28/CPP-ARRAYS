#include <iostream>
using namespace std;

int search(int arr[],int n, int x){
    

string nf = "not found";

    for(int i=0; i<n ; i++ ){
if(arr[i]== x)
    return i;


    }

return -1;
}


int main(){

int array[6] ={1,2,4,5};

int n = 4;

int x =4;

int pos = 9;

cout << "Array:" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}



pos =search(array,n,x); 


cout << x <<" Found on Index: " << pos <<endl;
    return 0;
}
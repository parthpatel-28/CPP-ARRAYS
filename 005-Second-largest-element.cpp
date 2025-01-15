#include <iostream>
using namespace std;

int sLargest(int arr[], int n){

    int first = 0 ;
    int second = -1;

    for(int i = 1 ; i < n ; i++ ){

if(arr[i] > arr[first]){
second =  first;
first = i;
}
else if(arr[first]>arr[i]){
if((second == -1) || arr[second] < arr[i] ){
    second = i;
}
}
    }

    return second;
}






int main(){

    int array[6] ={4,2,5,1};
    int n  = 4;
int l = 0;

cout << "Array:" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}




l = sLargest(array,n);

cout <<"Second Largest Value INDEX: "<< l << " & VALUE: " << array[l] << endl;
 
}
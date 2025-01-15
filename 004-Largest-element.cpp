#include <iostream>
using namespace std;

int largest(int arr[] , int n){

int lar = 0;


for(int i=0 ; i<n ; i++){

    if(lar < arr[i])
    lar = i;
    }

return lar;


}

int main(){

    int array[6] ={1,2,4,5};
    int n  = 4;
int l = 0;

cout << "Array:" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}




l = largest(array,n);

cout <<"Largest Value INDEX: "<< l << " & VALUE: " << array[l] << endl;
 
}
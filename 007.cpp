#include <iostream>
using namespace std;

int checkSort(int arr[] , int n){



for(int i=1 ; i <n ; i++ ){

if(arr[i-1] > arr[i])
    return false;
}

return true;

}

int main(){

    int array[] ={1,2,4,5};
    int n  = 4;
bool answer = false;

cout << "Array:" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}

answer = checkSort(array,n);

if(answer == true){

    cout << "SORTED" << endl;
}else{

    cout << "UNSORTED" << endl;
}





 
}
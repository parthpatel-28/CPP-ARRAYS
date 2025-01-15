//DELETION IN ARRAY





#include <iostream>
using namespace std;


//arr - array   
//n - array length  
// x- new value 
// pos -position where new value is added
//delete function below 
int delete1(int arr[] , int n , int pos ){

int id = pos -1;

for(int i=id ; i<n ; i++){

arr[i] = arr[i+1];

}

arr[n] = 0;

return n-1;


};




int main(){


//VARIABLES


int array[6] ={1,2,4,5};

int n = 4;

int pos = 3;



cout << "Before Deletion" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}


n = delete1(array,n,pos);// DELETE function used



cout << "After Deletion" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}



    return 0;
}
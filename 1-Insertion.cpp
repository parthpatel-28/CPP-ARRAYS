//INSERTION IN ARRAYS




#include <iostream>
using namespace std;


//arr - array   
//n - array length  
//cap - array cap 
// x- new value 
// pos -position where new value is added
//insert function below 
int insert(int arr[], int n, int cap , int x , int pos){

if(n == cap)
return n;



    int id = pos - 1;

    for(int i =n-1; i>=id ; i--){

        arr[i+1]=arr[i];
    };

    arr[id]= x;


return n+1; 
};


int main(){


//VARIABLES

int cap = 6;

int array[6] ={1,2,4,5};

int n = 4;

int x = 7;

int pos = 2;






cout << "Before Insertion" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}


 n = insert(array,n,cap,x,pos); // insert function used


cout<< "AFTER INSERTION" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}


return 0;
}
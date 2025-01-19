/////////////LEFT ROTATE ANY ARRAY BY D PLACES///////////////

#include <iostream>
using namespace std;

// Rotate Function
int rotate(int arr[], int n , int d){

//arr = array
//n = length of array
//d = number of places to be rotated


int temp[d];  


for(int i=0; i<d ; i++ )
{

temp[i]= arr[i];

}


for(int i=d ; i<n ; i++)
{

arr[i-d] = arr[i];

}


for(int i=0 ; i<d ; i++)
{

    arr[n-d+i]= temp[i];
}



return 0;
}



int main(){

int array[] = {1,2,3,4,5,6,7,8};
int n =8;
int d = 3;

cout << "BEFORE ROTATION" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<< ", ";
}

///////////////////////////////////
rotate(array,n,d);/////////////Function used on array
////////////////////////////////////


cout<<endl;
cout << "After ROTATION" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<< ", ";
}



return 0;

}
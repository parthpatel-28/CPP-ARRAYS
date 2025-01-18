/////////////////////MOVE ZEROS TO THE END///////////////////////



#include <iostream>
using namespace std;

int zero(int arr[] , int n){

int count = 0;

for(int i=0; i <n ; i++){

if(arr[i]!=0){

arr[count] = arr[i];
count++;
}

}


for(int i=count ; i<n ; i++ ){

    arr[i]= 0;
}

return count;
}


//////////////////////////////////////////////////////////
int main(){

int array[] = {1,2,0,3,0,0,4,5};

int n = 8;

cout << "BEFORE MOVING ZEROS TO THE END" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}


zero(array,n); //Using remDups1 Function


cout << "AFTER MOVING ZEROS TO THE END"<<endl;
for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}



return 0;

}
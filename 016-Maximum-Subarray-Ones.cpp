//Given an array arr[], the task is to find the elements of a contiguous subarray of numbers that has the largest sum.

#include <iostream>
using namespace std;

int maxones(int arr[],int n){

int main_max = 0;
int temp_max = 0;

for(int i=1; i<n ; i++ ){

if(arr[i-1] == 1 ){
    temp_max++;
}else{
    temp_max = 0;
}


if(main_max < temp_max){
    main_max = temp_max;
}

}


return main_max;
}



int main(){

int array[] = {0,1,1,1,1,0,1,0,1,1};

 int n = sizeof(array) / sizeof(array[0]);

int main = 0;

main = maxones(array,n);
cout << main << endl;
    return 0;
}
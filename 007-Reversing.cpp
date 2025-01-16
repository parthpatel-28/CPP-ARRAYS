//Reversing an ARRAY 



#include <iostream>
using namespace std;

int reverse(int arr[], int n){

int start = 0;
int end = n-1;
int temp = 0;

while (end>start)
{
    temp = arr[end];
    arr[end] = arr[start];
    arr[start] = temp;

    end--;
    start++;
}

return 0;

}


int main(){



int array[] = {1,2,3,4,5,6};

int n = 6;

cout<< "Before Reverse" << endl;

for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}


reverse(array , n); //reverse Function used



cout<< "After Reverse" << endl;


for(int i=0 ; i<n ; i++){

    cout<< array[i]<<endl;
}


    return 0;
}
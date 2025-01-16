#include <iostream>
using namespace std;


///////////Duplicate removal function with O(n) space complexity//
int remDups1(int arr[] , int n){

int temp[n] ;
temp[0]= arr[0];

int res = 1;

for(int i=1 ; i <n ; i++){

    if(temp[res-1] != arr[i] ){
        temp[res] = arr[i];
        res++;
    }
}


for(int i = 0; i < res; i++)
	{
		arr[i] = temp[i];
	}


return res;

}


///////////Duplicate removal function with O(1) space complexity//

int remDups2(int arr[] , int n){

int res = 1;

for(int i=1 ; i<n ; i++){

if(arr[res-1] != arr[i]){

    arr[res] = arr[i];
    res++;
}

}

return res;

}





int main(){

///////////////////////Use of remDup1 Funtion/////////////////////

int array1[] = {1,2,2,2,3,4,4,5};

int n = 8;
cout << "FIRST FUNCTION"<<endl;
cout << "Before Removing Duplicates" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array1[i]<<endl;
}


n = remDups1(array1,n); //Using remDups1 Function


cout << "After Removing Duplicates" <<endl;
for(int i=0 ; i<n ; i++){

    cout<< array1[i]<<endl;
}

///////////////////////////////////////////////////////////////
///////////////////////Use of remDup2 Funtion/////////////////////
int array2[]= {1,2,2,2,3,4,4,5};

 n = 8;

cout << "SECOND FUNCTION"<<endl;
cout << "Before Removing Duplicates" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array2[i]<<endl;
}



n = remDups2(array2,n);//Using remDup2Function


cout << "After Removing Duplicates" <<endl;

for(int i=0 ; i<n ; i++){

    cout<< array2[i]<<endl;
}







    return 0;
}
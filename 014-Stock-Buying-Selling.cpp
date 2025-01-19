//The cost of a stock on each day is given in an array. Find the maximum profit that you can make by buying and selling on those days. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.

#include <iostream>
using namespace std;

int stock(int arr[], int n){

int total = 0;

for(int i=1 ; i<n ; i++){

    if(arr[i]>arr[i-1]){
        total += arr[i]-arr[i-1];
    }
}

return total;
}


int main(){

int price[] = { 100, 180, 260, 310, 40, 535, 695 };
	int n = sizeof(price) / sizeof(price[0]);

int total = 0;
    
    total = stock(price,n);
cout << total <<endl;
    return 0;
}
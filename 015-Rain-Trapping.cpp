#include <iostream>
using namespace std;

int findWater(int arr[], int n){

int water = 0;

int left[n];

int right[n];

//Left highest points
left[0]= arr[0];
for(int i=1 ; i<n ; i++){

    left[i] = max(left[i-1], arr[i]);
}

//Right highest points
right[n-1]= arr[n-1];
for(int i=n-2 ; i>=0 ; i--){

    right[i] = max(right[i+1], arr[i]);
}


// Calculate the accumulated water element by element
	// consider the amount of water on i'th bar, the
	// amount of water accumulated on this particular
	// bar will be equal to min(left[i], right[i]) - arr[i]
	// .
	for (int i = 1; i < n - 1; i++) {
		int var = min(left[i - 1], right[i + 1]);
		if (var > arr[i]) {
			water += var - arr[i];
		}
	}


return water;

}




int main(){

int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findWater(arr, n);
	



return 0;

}
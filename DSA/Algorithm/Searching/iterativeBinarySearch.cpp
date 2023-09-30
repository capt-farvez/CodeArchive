// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x){
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// If we reach here, then element is not not present
	return -1;
}


int main(){
	int size;
	cin>>size;
	int arr[size];
	for (int i= 0; i <size; i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int result = binarySearch(arr, arr[0], arr[size-1], target);
	if(result == -1){
		cout << "Element is not present in array"<<endl;
	}
	else{
		cout << "Element is present at position " << result+1 <<endl;
	}
	return 0;
}

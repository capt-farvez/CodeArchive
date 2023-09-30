// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int l, int r, int x){
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle itself
		if (arr[mid] == x){
			return mid;
		}

		// If element is smaller than mid, then it can only be present in left subarray
		if (arr[mid] > x){
			return binarySearch(arr, l, mid - 1, x);
		}

		// Else the element can only be presentin right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not present in array
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

// C++ program to illustrate recursive approach to ternary search
#include <bits/stdc++.h>
using namespace std;

int ternarySearch(int l, int r, int target, int arr[]){
	if (r >= l) {
		// Find the mid1 and mid2
		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;

		// Check if target is present at any mid
		if (arr[mid1] == target) {
			return mid1;
		}
		if (arr[mid2] == target) {
			return mid2;
		}
		// Since target is not present at mid, check in which region it is present then repeat the Search operation in that region
		if (target < arr[mid1]) {
			// The target lies in between l and mid1
			return ternarySearch(l, mid1-1, target, arr);
		}
		else if (target > arr[mid2]) {
			// The target lies in between mid2 and r
			return ternarySearch(mid2+1, r, target, arr);
		}
		else {
			// The target lies in between mid1 and mid2
			return ternarySearch(mid1+1, mid2 - 1, target, arr);
		}
	}
	// target not found
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

	//Sort the array if not sorted
	sort(arr, arr+size);

	int result = ternarySearch(0, size-1, target, arr);
	if(result == -1){
		cout << "Element is not present in array"<<endl;
	}
	else{
		cout << "Element is present in array "<<endl;
	}
	return 0;
}


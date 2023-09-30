// C++ code to linearly search x in arr[].

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x){
	for (int i = 0; i < n; i++){
		if (arr[i] == x){
			return i;
		}
	}
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

	int result = search(arr, size, target);
	if(result == -1){
		cout << "Element is not present in array"<<endl;
	}
	else{
		cout << "Element is present at index " << result <<endl;
	}
	return 0;
}

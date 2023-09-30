// Optimized implementation of Bubble sort in c++ 
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		// If no two elements were swapped by inner loop, then break
		if (swapped == false)
			break;
	}
}

// Function to print an array
void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
    cout << endl;
}

int main(){
    int size;
    cin >> size;
	int arr[size];

	for(int i=0; i<size; i++){
		cin >> arr[i];
	}

	// Function Call
	bubbleSort(arr, size);
	cout << "Sorted array: \n";
	printArray(arr, size);
	return 0;
}

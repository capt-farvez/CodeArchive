// C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n){
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		// Move elements of arr[0....i-1], that are greater than key,to one position ahead of their current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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
	insertionSort(arr, size);
	cout << "Sorted array: \n";
	printArray(arr, size);
	return 0;
}

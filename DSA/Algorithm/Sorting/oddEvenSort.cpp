// C++ Program to implement Odd-Even / Brick Sort
#include<bits/stdc++.h>
using namespace std;

// A function to sort the algorithm using Odd Even sort
void oddEvenSort(int arr[], int n){
	bool isSorted = false; // Initially array is unsorted

	while (!isSorted){
		isSorted = true;
		// Perform Bubble sort on odd indexed element
		for (int i=1; i<=n-2; i=i+2){
			if (arr[i] > arr[i+1]){
				swap(arr[i], arr[i+1]);
				isSorted = false;
			}
		}

		// Perform Bubble sort on even indexed element
		for (int i=0; i<=n-2; i=i+2){
			if (arr[i] > arr[i+1]){
				swap(arr[i], arr[i+1]);
				isSorted = false;
			}
		}
	}
	return;
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
    oddEvenSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}
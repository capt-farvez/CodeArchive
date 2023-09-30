// C++ code to implement quicksort

#include <bits/stdc++.h>
using namespace std;

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high){
	// Choosing the pivot
	int pivot = arr[high];

	// Index of smaller element and indicates the right position of pivot found so far
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++) {
		// If current element is smaller than the pivot
		if (arr[j] < pivot) {
			// Increment index of smaller element
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high){
	if (low < high) {
		// pi is partitioning index, arr[p] is now at right place
		int pi = partition(arr, low, high);
		// Separately sort elements before partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
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
    quickSort(arr, 0, size-1);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}
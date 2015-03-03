

#include "QuickSort.h"

void QuickSort::sort(string* data, int n) {
    quicksort(data, 0, n-1);
}

void QuickSort::quicksort(string* data, int low, int high) {
	int index = partition(data, low, high);
	if (low<index-1){
		quicksort(data, low, index-1);
	}
	if (index<high){
		quicksort(data, index, high);
	}
}

int QuickSort::partition(string* data, int low, int high) {
	string pivot = data[int((low+high)/2)];
	while(low <= high) {
		while(data[low] < pivot){
			low++;
		}
		while(data[high] > pivot){
			high--;
		}
		if(low <= high) {
			swap(data[low], data[high]);
			low++;
			high--;
		}
	}
	return low;
}

void QuickSort::swap(string& s1, string& s2) {
    string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}
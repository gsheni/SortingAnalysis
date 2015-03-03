#include "MergeSort.h"

void MergeSort::sort(string* data, int n) {
	    msort(data,0,n-1);
}
void MergeSort::msort(string* data, int low, int high){
	if (high <= low) {
		return;
	}
	int noOfElements = high - low + 1;
	int middleElement = (high+low)/2;
	msort(data, low, middleElement);
	msort(data, middleElement+1, high);
	merge(data, low, middleElement, high);
}

void MergeSort::merge(string* data, int low, int middle, int high){

	string* helper = new string[high-low+1];

	for (int i = low; i <= high; ++i) {
		helper[i-low] = data[i];
	}
	int i = low;
	int j = middle+1;
	int k = low;

	while(i <= middle && j <= high){
			if (helper[i-low] < helper[j-low]) {
			data[k] = helper[i-low];
			i++;
			}
		else {
			data[k] = helper[j-low];
			j++;
		}
		k++;
	}
	if (i>middle) {
		for (; j <= high; ++j) {
		data[k] = helper[j-low];
		k++;
		}
	}
	else {
		for (; i <= middle; ++i) {
		data[k] = helper[i-low];
		k++;
		}
	}
}


void MergeSort::swap(string& s1, string& s2) {
    string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}

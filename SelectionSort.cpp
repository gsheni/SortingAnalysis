#include "SelectionSort.h"

void SelectionSort::sort(string* data, int n) {
	int currentmin;
	int i, j;
	for (i = 0; i < n ;i++){
		currentmin = i;
		for (j = i+1; j < n ; j++){
			if(data[currentmin] > data[j] ) {
				currentmin = j;		
			}
		}
		if(currentmin != i){
			swap(data[i], data[currentmin]);
		}
	}
}
void SelectionSort::swap(string& s1, string& s2) {
    string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}

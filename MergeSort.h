/*
 * Definition of class SelectionSort
 *
 * author: V. P. Pauca
 * date:   2/24/2015
 */


#ifndef MERGESORT_H
#define MERGESORT_H

#include "SortAlgorithm.h"

// MergeSort implements the SortAlgorithm interface
class MergeSort : public SortAlgorithm {
public:
    void sort(string*, int);	// implementation of sort function
private:
    void swap(string&, string&); // it's own private function, not part of
    void msort(string* , int , int );
    void merge(string* , int , int , int );
};

#endif

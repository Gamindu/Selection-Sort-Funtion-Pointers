/* 
 * File:   SelectionSort.h
 * Author: Gamindu
 *
 * Created on May 6, 2015, 10:18 AM
 */

#ifndef SELECTIONSORT_H
#define	SELECTIONSORT_H
#include<iostream>
class SelectionSort {
public:
    SelectionSort()=default;
    void Sort(int arr[], const int size, bool(*compare)(int,int));
    void swap(int &a, int &b);
    

};

#endif	/* SELECTIONSORT_H */


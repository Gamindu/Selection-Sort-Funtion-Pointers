/* 
 * File:   SelectionSort.cpp
 * Author: Gamindu
 * 
 * Created on May 6, 2015, 10:18 AM
 */

#include "SelectionSort.h"

void SelectionSort::Sort(int arr[], const int size, bool(*compare)(int,int))
{
    int smallestOrLagest ;
    for(int i  = 0; i <size -1;++i)
    {
        smallestOrLagest =i;
        for(int index = i+1;index <size ;++index)
        {
            if(!(*compare)(arr[smallestOrLagest],arr[index]))
                smallestOrLagest = index;
        }
        swap(arr[smallestOrLagest],arr[i]);
        
    }
    
}

void SelectionSort::swap(int& a, int& b)
{
    int temp = a ;
        a = b;
        b = temp;
}




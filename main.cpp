/* 
 * File:   main.cpp
 * Author: Gamindu
 *
 * Created on May 6, 2015, 10:17 AM
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>
#include"SelectionSort.h"
using namespace std;

/*
 * 
 */
bool ascending(int ,int);
bool descending(int,int);
int main(int argc, char** argv)
{
    const int size = 10;
    int counter;
    
    
  int a[size] = {2,10,7,9,5,3,23,18, 57,28};
    SelectionSort s;
    cout<<"Before Sorting"<<endl;
    for(counter = 0; counter< size; ++counter)
    {
       cout<< setw(4)<<a[counter]<<" "; 
    }
    cout<<endl;
    s.Sort(a,size,ascending);
    cout<<"Array is sorted in ascending order"<<endl;
    for(counter = 0; counter< size; ++counter)
    {
       cout<< setw(4)<<a[counter]<<" "; 
    }
    cout<<endl;
    
    
    
    return 0;
}

bool ascending(int a, int b)
{
    return a<b;
}

bool descending(int a, int b)
{
    return a> b;
}
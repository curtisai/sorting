/*
    File Name: selection_sort.h
    Xiaolong Zhang
    03.11.2016
*/

#ifndef SELECTION_SORT_H_
#define SELECTION_SORT_H_

#include <vector>

typedef std::vector<int> Array;

class SelectionSort{
  public:
    void operator()( Array& elements );
};


#endif
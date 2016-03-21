/*
    File Name: merge_sort.h
    Xiaolong Zhang
    03/17/2016
*/

#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

#include <vector>

typedef std::vector<int> Array;

class MergeSort{
  private:

  	void Sort( Array& elements, int left, int right);
  	
  	void Merge( Array& element, int left, int mid, int right );

  public:

  	void operator()( Array& element);
};

#endif
/*
    File Name: quick_sort.h
    Xiaolong Zhang
    03.11.2016
*/


#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_

#include <vector>

typedef std::vector<int> Array;


class QuickSort{
  private:

  	int Partition( Array& elements, int left, int right );

  	void ToSort( Array& elements, int left, int right );

  public:

  	void operator()( Array& elements );

};



#endif
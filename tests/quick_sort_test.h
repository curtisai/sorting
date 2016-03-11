/*
    File Name: quick_sort_test.h
    Xiaolong Zhang
    03.11.2016
*/

#ifndef QUICK_SORT_TEST_H_
#define QUICK_SORT_TEST_H_

#include <gtest/gtest.h>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <functional>
#include "src/quick_sort.h"

typedef std::vector<int> Array;


class QuickSortTest : public ::testing::Test{
  public:

  	Array            d_array;

  	QuickSort        d_quick_sort;


  	QuickSortTest();

  	void SetUp();

  	void TearDown();

};


TEST_F( QuickSortTest, Sorting ){

	d_quick_sort( d_array );

	for ( int i = 1; i < d_array.size(); ++i ){
		EXPECT_TRUE( d_array[i - 1] <= d_array[i] );
	}

}


#endif
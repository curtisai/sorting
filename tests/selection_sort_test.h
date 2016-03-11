/*
    File Name: selection_sort_test.h
    Xiaolong Zhang
    03. 11. 2016
*/

#ifndef SELECTION_SORT_TEST_H_
#define SELECTION_SORT_TEST_H_

#include <gtest/gtest.h>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <functional>
#include "src/selection_sort.h"

typedef std::vector<int> Array;


class SelectionSortTest : public ::testing::Test{
  public:
  	Array                   d_array;

  	SelectionSort           d_selection_sort;

  	//constructor
  	SelectionSortTest();

  	void SetUp();
  	    //set-up work for tests

  	void TearDown();
  	    //clean-up after testing
};


TEST_F( SelectionSortTest, Sorting ){

	d_selection_sort( d_array );

	for ( int i = 1; i < d_array.size(); ++i ){
		EXPECT_TRUE( d_array[i - 1] <= d_array[i] );
	}
}

#endif
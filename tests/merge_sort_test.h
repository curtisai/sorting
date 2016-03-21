/*
    File Name: merge_sort_test.h
    Xiaolong Zhang
    03. 10. 2016
*/

#ifndef MERGE_SORT_TEST_H_
#define MERGE_SORT_TEST_H_

#include <gtest/gtest.h>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <functional>
#include "src/merge_sort.h"

typedef std::vector<int> Array;

class MergeSortTest : public ::testing::Test{
  public:

  	Array                 d_array;
  	
  	MergeSort             d_merge_sort;

  	//constructor
  	MergeSortTest();

  	//member functions

  	virtual void SetUp();
  	    // setup work for each test

  	virtual void TearDown();
  	    // clean-up after each test


};

TEST_F( MergeSortTest, Sorting ){

	d_merge_sort( d_array );

	for( int i = 1; i < d_array.size(); ++i ){

		EXPECT_TRUE( d_array[i - 1] <= d_array[i] );

	}

}

#endif
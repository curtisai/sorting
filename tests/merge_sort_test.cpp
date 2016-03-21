#include "merge_sort_test.h"


MergeSortTest::MergeSortTest()
: d_array( 100 ),
  d_merge_sort(){}

void MergeSortTest::SetUp(){

	std::random_device rnd_device;

	std::mt19937 mersenne_engine(rnd_device());

	std::uniform_int_distribution<int> dist(1, 100);

	auto gen = std::bind( dist, mersenne_engine );

	std::generate( std::begin( d_array ), std::end( d_array ), gen );
}


void MergeSortTest::TearDown(){}
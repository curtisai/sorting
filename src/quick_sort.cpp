
#include "quick_sort.h"


int QuickSort::Partition( Array& elements, int left, int right ){

	int pivot = elements[right];

	int index = left;
	    // index points to the first element that bigger than pivot

	for ( int i = index; i < right; ++i ){
		if ( elements[i] <= pivot ){
			std::swap( elements[index], elements[i] );
			index++;
		}
	}

	std::swap( elements[index], elements[right] );

	return index;

}

void QuickSort::ToSort( Array& elements, int left, int right ){
	if ( left < right ){
		int separate = Partition( elements, left, right );
		ToSort( elements, left, separate - 1 );
		ToSort( elements, separate + 1, right);
	}
	else
		return;
}


void QuickSort::operator()( Array& elements ){
	ToSort( elements, 0, elements.size() - 1);
}


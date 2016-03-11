
#include "selection_sort.h"

void SelectionSort::operator()( Array& elements ){
	for ( int i = 0; i < elements.size() - 1; ++i ){

		int iMin = i;
		
		for ( int j = i + 1; j < elements.size(); ++j ){
		
			if ( elements[j] < elements[iMin])
				iMin = j;
		
		}
		
		if ( iMin != i )
			std::swap( elements[i], elements[iMin] );
	}
	
}

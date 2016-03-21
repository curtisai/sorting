
#include "merge_sort.h"


void MergeSort::Merge( Array& elements , int left, int mid, int right ){
	int lengthLeft = mid - left + 1;
	int lengthRight = right - mid;

	Array leftArray;
	Array rightArray;

	for (int i = 0; i < lengthLeft; ++i){
		leftArray.push_back(elements[left + i]);
	}

	for (int i = 0; i < lengthRight; ++i){
		rightArray.push_back(elements[mid + 1 + i]);
	}

	int i = 0, j = 0, k = left;

	while (i < lengthLeft && j < lengthRight){
		if ( leftArray[i] <= rightArray[j] ){
			elements[k] = leftArray[i];
			i++;
		}
		else{
			elements[k] = rightArray[j];
			j++;
		}
		k++;
	}
	while (i < lengthLeft){
		elements[k] = leftArray[i];
		i++;
		k++;
	}
	while (j < lengthRight){
		elements[k] = rightArray[j];
		j++;
		k++;
	}
	

}

void MergeSort::Sort( Array& elements, int left, int right ){

	if( left < right ){
		int mid = left + (right - left) / 2;
		Sort(elements, left, mid);
		Sort(elements, mid + 1, right);
		Merge(elements, left, mid, right);
	}

}

void MergeSort::operator()( Array& elements ){
	Sort(elements, 0, elements.size() - 1);
}
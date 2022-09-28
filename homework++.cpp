#include <iostream>

int main() {
    
	const int length = 8;

	int array[length] { 3, 52, 12, 2, 7, 8, 11, 66 };


	for (int i = 0; i < length; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 1; i < length; ++i) {
		for (int r = 0; r < length - i; r++) {
			if (array[r] > array[r + 1]) {
				int temp = array[r];
				array[r] = array[r + 1];
				array[r + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < length; ++i) {
		std::cout << array[i] << " ";
	}
     std::cout << std::endl;
}
	
/*
int arr[] = { 0, -5, 9, 8, 0, 0, 0, 4, 0 };
int* linerArr = &arr[0];

const int arraySize = sizeof(arr) / sizeof(int);

for (int i = 0; i < arraySize; ++i) {
	bool hasPair = false;
	for (int y = 0; y < arraySize; ++y) {
		if (*(linerArr + i) == *(linerArr + y) && i != y) {
			hasPair = true;
		}
	}
	if (hasPair == false) {
		std::cout << "The number: " << *(linerArr + i) << " doesn't have a pair" << std::endl;
	}
}
for (int i = 0; i < arraySize; ++i) {
	std::cout << arr[i] << " ";*/
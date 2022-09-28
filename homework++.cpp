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
	 
	 std::cout << "hello" << std::endl;
}
	

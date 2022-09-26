#include<iostream>


int main () {

	const int size = 3;
	double nums[size]; 
	double average = 0;
	for (int i = 0; i < size; ++i) {
		std::cout << "Enter number #" << i + 1 << ":  ";
		std::cin >> nums[i];
		average += nums[i];
	}
	std::cout << "Average of numbers is :" << average/size << std::endl;

	return 0;
	
}



#include<iostream>

int main () {
	int num1,num2;
	std::cout << "Enter your first number  : ";
	std::cin >> num1;
	std::cout << " Enter your second number : ";
	std::cin >> num2;
	if (num1 < num2) {
		std::cout << "Maximum is " << num2 << std::endl;
	}
	else {
		 std::cout << "Maximum is " << num1 << std::endl;
	}
	
	return 0;
}

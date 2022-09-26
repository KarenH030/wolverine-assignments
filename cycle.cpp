#include<iostream>

int main() {

	int num;
	std::cout << "Enter a number ";
	std::cin >> num;
	int n = 0;
loop:
	if (n <= num) {
		std::cout << n << " " ;
		++n;
		goto loop;
	}

	return 0;
}

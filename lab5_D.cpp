#include <iostream>

int NumberActions() {
	const int n = 10;
	int sequence[n];

	std::cout << "Enter 10 numbers ";
	for (int i = 0; i < n; i++) {
		std::cin >> sequence[i];
	}

	int result = 0;
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (sequence[i] % 10 != 1) {
			result += sequence[i];
			flag++;
		}
	}
	if (flag > 0) {
		std::cout << "Sum of numbers is: " << result << std::endl;
	}
	else {
		std::cout << "Error!" << std::endl;
	}

	int min_value = INT_MAX;
	int place_min = 0;
	bool fl = 0;
	for (int i = 0; i < n; i++) {
		if (sequence[i] % 10 != 1) {
			if (min_value > sequence[i]) {
				min_value = sequence[i];
				place_min = i;
			}
			fl++;
		}
	}
	if (flag > 0) {
		std::cout << "\nMinimum number: " << min_value << "\nPlace in the sequence: " << place_min << std::endl;
	}

	return 0;
}

int RareNumber() {
	int k = 0;
	int r = 100;
	int N;
	int c = 0;
	std::cout << "Enter the number: ";
	std::cin >> N;
	for (int j = 0; j < 10; j++) {
		int n = N;
		while (n > 0) {
			if (n % 10 == j) {
				k++;
			}
			n /= 10;
		}
		if (k < r && k != 0) {
			r = k;
			k = 0;
			c = j;
		}
	}
	std::cout << "Rarest number: " << c << std::endl;

	return 0;
}

int main() {
//	NumberActions();
	RareNumber();

	return 0;
}
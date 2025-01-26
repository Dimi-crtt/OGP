#include <iostream>

int DigitalMultiplication(int x) {
	int res = 1;
	while (x > 0) {
		res *= x % 10;
		x /= 10;
	}

	return res;
}

int minD(int x) {
	int m = 100;
	while (x > 0) {
		if (x % 10 < m) {
			m = x % 10;
		}
		x /= 10;
	}
	return m;
}

int lab6_1() {
	const int SizeSeq = 10000;
	int mas[SizeSeq];
	int n;
	std::cout << "How many numbers do u want?\n";
	std::cin >> n;
	std::cout << "Enter your numbers: ";
	for (int i = 0; i < n; i++) {
		std::cin >> mas[i];
	}

	int sum = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		int copy = mas[i];
		while (copy > 0) {
			sum += copy % 10;
			copy /= 10;
		}
		if (sum == 12) {
			k++;
		}
		sum = 0;
	}
	if (k == 0) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (mas[i] > mas[j]) {
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
				}
			}
		}
	}

	std::cout << "Result is: ";
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}

	return 0;
}

int lab6_2_8() {
	const int size = 10000;
	int mas[size];
	int n;
	std::cout << "How many numbers do you want to enter?\n";
	std::cin >> n;
	std::cout << "Enter your numbers: ";
	for (int i = 0; i < n; i++) {
		std::cin >> mas[i];
	}
	int sumI = 0;
	int sumJ = 0;
	int k = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int copyI = mas[i];
			while (copyI > 0) {
				sumI += copyI % 10;
				copyI /= 10;
			}
			int copyJ = mas[j];
			while (copyJ > 0) {
				sumJ += copyJ % 10;
				copyJ /= 10;
			}
			if (sumI > sumJ) {
				int tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
			}
			else if (sumI == sumJ) {
				if (minD(mas[i]) > minD(mas[j])) {
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
				}
				else if ((minD(mas[i]) == minD(mas[j])) && mas[i] > mas[j]) {
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
				}
			}

			sumJ = 0;
			sumI = 0;

		}
	}
	std::cout << "Your result ";
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}

	return 0;
}

int lab6_3() {
	int matrix[100][100];

	int n, m;
	std::cout << "How many strok do you want to enter?\n";
	std::cin >> n;
	std::cout << "How many stolb do you want to enter?\n";
	std::cin >> m;

	std::cout << "Your matrix:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	int k = 0;
	int place = 0;
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[j][i] % 10 == 3) {
				k++;
			}
			
			
		}
		if (k > max) {
			max = k;
			place = i;

		}
		k = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i != place) {
				matrix[j][i] = -17;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}

int lab6_4() {
	const int SizeSeq = 10000;
	int mas[SizeSeq];
	int n;
	std::cout << "How many numbers do u want?\n";
	std::cin >> n;
	std::cout << "Enter your numbers: ";
	for (int i = 0; i < n; i++) {
		std::cin >> mas[i];
	}

	for (int i = 0; i < n; i++) {
		if (DigitalMultiplication(mas[i]) % 70 == 0) {
			for (int j = i; j < n - 1; j++) {
				mas[j] = mas[j + 1];
			}
			i--;
			n--;
		}
	}

	for (int i = 0; i < n; i++) {
		bool simple = 1;
		if (mas[i] == 0 || mas[i] == 1) {
			simple = 0;
		}
		for (int p = 2; p <= mas[i] / 2; p++) {
			if (mas[i] % p == 0) {
				simple = 0;
			}
		}

		if (simple == 1) {
			for (int j = n; j > i; j--) {
				mas[j] = mas[j - 1];
			}
			i++;
			n++;
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}

	return 0;

}

int main() {	
	//lab6_1();
	//lab6_2();
	//lab6_3();
	lab6_4();

	return 0;
}
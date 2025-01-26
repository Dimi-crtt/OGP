#include <iostream>


int RootCalculation()
{
	float N;
	std::cout << "Enter the degree of the root" << std::endl;
	std::cin >> N;
	float X;
	std::cout << "Enter a number" << std::endl;
	std::cin >> X;

	float res = pow(X, N);
	std::cout << "Your answer: " << res << std::endl;

	return 0;
}

int main()
{
	RootCalculation();

	return 0;
}
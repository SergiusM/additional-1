#include <iostream>

void Summa(int N, int& sum)
{
	if (N == 0)
		return;
	sum = sum + N % 10;
	N = N / 10;
	Summa(N, sum);
}

int main()
{
	int sum = 0;
	int N;
	std::cin >> N;
	Summa(N, sum);
	std::cout << sum << std::endl;
	return 0;
}

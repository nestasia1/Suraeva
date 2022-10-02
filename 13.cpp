#include <iostream>
#include <string>

using namespace std;

long int Fib(int i)
{
	if (i < 1) return 0;
	if (i == 1) return 1;
	if (i == 2) return 1;
	return Fib(i - 1) + Fib(i - 2);
}

long int main()
{
	int i = 1;
	string s;

	cout << "Enter the number\n";
	cin >> s;
	cout << "\n";

	for (int i = 0; i < size(s); i++)
	{
		if (s[i] != '1' and s[i] != '2' and s[i] != '3' and s[i] != '4' and s[i] != '5' and s[i] != '6' and s[i] != '7' and s[i] != '8' and s[i] != '9' and s[i] != '0' and s[i] != '-' and s[i] != ',' and s[i] != '.')
		{
			std::cout << "You need to enter a number\n";
			return 0;
		}
		if (s[i] == '.' or s[i] == ',')
		{
			std::cout << "You can only enter whole numbers\n";
			return 0;
		}
	}

	int N = stoi(s);

	if (N < 1)
	{
		std::cout << "You can only enter numbers more than 1\n";
		return 0;
	}

	if (N >= 47)
	{
		std::cout << "You must enter a number less than 47\n";
		return 0;
	}

	while (i <= N)
	{
		cout << Fib(i) << " ";
		i++;
	}

	return 0;
}

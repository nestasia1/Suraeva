#include <iostream>
#include <string>

int main()
{
	std::string s;
	int res;

	std::cout << "Enter the number\n";
	std::cin >> s;

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

	int n = stoi(s);
	
	if (n < 0)
	{
		std::cout << "You can only enter positive numbers\n";
		return 0;
	}

	if (n == 0)
	{
		std::cout << "Factorial = 1\n";
		return 0;
	}

	if (n >= 13)
	{
		std::cout << "You must enter a number less than 13\n";
		return 0;
	}

	res = 1;

	for (int i = 1; i <= n; i++) 
	{
		res = res * i;
	}
	std::cout << "Factorial = " << res;
}

#pragma comment(lib, "simpleMathLib.lib") 

#include <iostream>
#include "simpleMathLib.h"

int main()
{
	while (true)
	{
		int a = 0, b = 0;
		float c = 0;
		bool doexit = false;
		bool error = false;
		std::cout << "0 - quit; 1 - +; 2 - -; 3 - *; 4 - /; 5 - power;\n";
		int ch = 0;
		char op = ' ';
		std::cin >> ch;
		switch (ch)
		{
		default:
		case 0:
		{
			doexit = true;
			break;
		}
		case 1:
		{
			std::cout << "Input a, b\n";
			std::cin >> a >> b;
			op = '+';
			c = CalcSum(a, b, error);
			break;
		}
		case 2:
		{
			std::cout << "Input a, b\n";
			std::cin >> a >> b;
			op = '-';
			c = CalcDiff(a, b, error);
			break;
		}
		case 3:
		{
			std::cout << "Input a, b\n";
			std::cin >> a >> b;
			op = '*';
			c = CalcMult(a, b, error);
			break;
		}
		case 4:
		{
			std::cout << "Input a, b\n";
			std::cin >> a >> b;
			op = '/';
			c = CalcDiv(a, b, error);
			break;
		}
		case 5:
		{
			std::cout << "Input base, power\n";
			std::cin >> a >> b;
			op = '^';
			c = CalcPower(a, b, error);
			break;
		}
		}

		if (doexit) break;

		if (!error)
			std::cout << a << op << b << "=" << c << std::endl;
		else
			std::cout << "Error: division by zero!\n";
	}
}
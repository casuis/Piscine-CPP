#include <iostream>

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int y = 1; y < argc; y++)
			for (int i = 0; argv[y][i]; i++)
				std::cout << (char) std::toupper(argv[y][i]); 
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
	}
	return 0;
}
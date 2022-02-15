#include <iostream>
/* simple program to multiply two numbers;
 * uses istream
 */
int main()
{
	std::cout << "Enter two numbers to multiply:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The result of " << v1 << " multiplied by " << v2 << " is " << v1 * v1 << std::endl;
	return 0;
}

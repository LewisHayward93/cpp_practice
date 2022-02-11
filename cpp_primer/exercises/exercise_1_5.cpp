#include <iostream>
/* simple program to multiply two numbers;
 * uses istream
 */
int main()
{
	std::cout << "Enter two numbers to multiply:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The value of " << v1 << std::endl; 
	std::cout << "Multiplied by the value of " << v2 << std::endl;
	std::cout << "Is equal to " <<  v1 * v2 << std::endl;
	return 0;
}

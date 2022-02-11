#include <iostream> // name inside angle brackets refers to the 'header'
/* simple program to sum two numbers;
 * numbers taken from istream
 */
int main()
{
	std::cout << "Enter two numbers:" << std::endl; // endl - ends line and flushes buffer
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0;
}

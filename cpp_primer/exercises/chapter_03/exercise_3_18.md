Exercise 3.18: Is the following program legal? If not, how might you fix it?

vector<int> ivec;
ivec[0] = 42;

Illegal: can't push element onto the vector through subscripting.

std::vector<int> ivec;
ivec.push_back(42);

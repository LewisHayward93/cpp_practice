# Exercise_2_04

```cpp
#include <iostream>
int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2- u << std::endl; // predict 32
    std::cout << u- u2 << std::endl; // predict some large number as wrap around
    int i = 10, i2 = 42;
    std::cout << i2- i << std::endl; // predict 32
    std::cout << i- i2 << std::endl; // predict - 32
    std::cout << i- u << std::endl; // predict 0
    std::cout << u- i << std::endl; // predict 0
    return 0;
}
```

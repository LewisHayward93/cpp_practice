#include <iostream>

int main(void) {
  int i = 0;
  double *dp = &i; // illegal as different type
  int *ip = i;     // illegal needs to point to reference
  int *p = &i;     // legal
}

#include <iostream>

int main(void)
{
  // int i = -1, &r = 0; // error: a non-const reference cannot be bound to literal
  int i2;
  int *const p2 = &i2;       // ok: p2 is a const pointer to i2
  const int i = -1, &r = 0;  // ok: both i and &r are const (reference to const)
  const int *const p3 = &i2; // ok
  const int *p1 = &i2;       // ok: p1 is a pointer to const
  const int &const r2;       // error: & should be on r2 and cannot be a const
  const int i2 = i, &r = i;  // ok: r is a reference to const

  return 0;
}

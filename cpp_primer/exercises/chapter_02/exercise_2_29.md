Exercise 2.29: Using the variables in the previous exercise, which of the
following assignments are legal? Explain why.

    (a) i = ic;		(b) p1 = p3;
    (c) p1 = &ic;	(d) p3 = &ic;
    (e) p2 = p1;	(f) ic = *p3;

Variables:
int i, *const cp;
int *p1, *const p2;
const int ic, &r = ic;
const int *const p3;
const int \*p;

(a) Legal if ic were initialized; otherwise, illegal. Top-level const of ic would be ignored.
(b) Illegal: incompatible low-level const type. p1 must be a pointer to a const int to hold the address of p3.
(c) Illegal: Incompatible low-level const type. p1 must be a pointer to a const int to hold the address of ic.
(d) Illegal: p3 is a const pointer. It cannot be assigned or reassigned.
(e) Illegal: p2 is a const pointer. It cannot be assigned or reassigned.
(f) Illegal: ic is a const int. It cannot be assigned or reassigned.

Exercise 2.30: For each of the following declarations indicate whether the object being declared has top-level or low-level const:

(a) const int v2 = 0; -> top-level const
(b) int v1 = v2; -> nonconst
(c) int *p1 = &v1, &r1 = v1; -> nonconst, nonconst
(d)const int *p2 = &v2, \*const p3 = &i,, &r2 = v2; -> low-level const, top-level and low-level const

v2 -> top-level const
v1 -> nonconst
*p1 -> nonconst
&r1 -> nonconst
*p2 -> low-level const
p3 -> top-level and low-level const
&r2 -> low-level const

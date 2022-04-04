Exercise 2.31: Given the declarations from 2.30, which assignments are legal and explain how the top-level or low-level applies in each case.

(a) r1 = v2; -> illegal as reference cannot be reassigned
(b) p1 = p2; -> illegal as p2 has low-level const, p1 doesn't
(c) p1 = p3; -> illegal as top-level const p3 ignored but low-level cannot
(d) p2 = p1; -> legal but as p2 low-level const, can't be used to change p1
(e) p2 = p3; -> legal as both have low-level const, top-level const is ignored

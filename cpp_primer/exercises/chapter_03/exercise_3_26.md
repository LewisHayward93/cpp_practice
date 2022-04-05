Because mid is an iterator. As is the case with pointers, adding two iterators
will yield a meaningless result: it will not refer to an element in the given
container. To achieve the desired result of advancing mid to a point with the
container, we must advance beg by n elements (see table 3.7). This is achieved
by the expression beg + (end - beg) / 2. Note that unlike addition, subtracting
two iterators yields the distance between the iterators, not a reference.

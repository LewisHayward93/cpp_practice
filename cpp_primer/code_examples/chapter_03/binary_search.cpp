/* binary search algorith works by using the middle element and working out whether the target is to the left or right;
as a result the elements must be in order for this to work and results in O(log n) time complexity */

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> sorted = {1, 2, 4, 6, 7, 9, 13, 17, 34, 49};
    int target = 2;

    // set begin and end iterator
    auto beg = sorted.begin(), end = sorted.end();
    // middle of the vector
    auto mid = sorted.begin() + (end - beg) / 2;

    // iterate until reach the end or find the target
    while (mid != end && *mid != target)
    {
        // if target less than middle shift end to middle and recalculate middle
        if (target < *mid)
            end = mid;
        // otherwise if larger, shift beginning to the one after middle and recalculate middle
        else
            beg = mid + 1;
        // recalculate mid
        mid = beg + (end - beg) / 2;
    }

    if (mid == end)
        std::cout << "Not in the vector..." << std::endl;
    else
        std::cout << "Yeah it's in here!" << std::endl;
}
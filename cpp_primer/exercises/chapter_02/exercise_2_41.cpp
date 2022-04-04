#include <iostream>
#include <string>

// class created in same file as opposed to separate header file as requested in question
struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};

int main(void)
{
    Sales_data total; // variable to hold data for next trans
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans; // variable to hold data for running sum
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << total.bookNo << "\n"
                          << total.units_sold << "\n"
                          << total.revenue << std::endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        std::cout << total.bookNo << total.units_sold << total.revenue << std::endl;
    }
    else
    {
        std::cerr << "No data!" << std::endl;
        return -1;
    }
    return 0;
}
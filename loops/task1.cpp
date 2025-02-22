/*
You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array con-
tents and report the total sales for the year.
*/

#include <iostream>
#include <string>

int main()
{
    const std::string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    int sales[12];

    std::cout << "Enter the number of books sold each month:" << std::endl;
    for (int i = 0; i < 12; ++i)
    {
        std::cout << months[i] << ": ";
        std::cin >> sales[i];
    }

    int totalSales = 0;
    for (int i = 0; i < 12; ++i)
    {
        totalSales += sales[i];
    }

    std::cout << "\nTotal sales for the year: " << totalSales << " books." << std::endl;

    return 0;
}

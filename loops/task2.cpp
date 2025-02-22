/*
Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
10% of the original investment, or $10 each and every year:
interest = 0.10 × original balance
At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
of the current balance, including previous additions of interest:
interest = 0.05 × current balance
Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
$105, or $5.25, and so on.Write a program that finds how many years it takes for
the value of Cleo’s investment to exceed the value of Daphne’s investment and then
displays the value of both investments at that time.
*/
#include <iostream>
#include <iomanip>

int main()
{
    double daphneInvestment = 100.0;
    double cleoInvestment = 100.0;

    double daphneInterestRate = 0.10;
    double cleoInterestRate = 0.05;

    int year = 0;

    while (cleoInvestment <= daphneInvestment)
    {

        daphneInvestment += 10.0;

        cleoInvestment += cleoInvestment * cleoInterestRate;

        year++;
    }

    std::cout << "After " << year << " years:" << std::endl;
    std::cout << "Daphne's investment: $" << std::fixed << std::setprecision(2) << daphneInvestment << std::endl;
    std::cout << "Cleo's investment: $" << std::fixed << std::setprecision(2) << cleoInvestment << std::endl;

    return 0;
}

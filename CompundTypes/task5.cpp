#include <iostream>

/*
Suppose ted is a double variable. Declare a pointer that points to ted and use the
pointer to display ted’s value.
*/

int main()
{
    double ted;
    double *ptrTed = &ted;

    std::cout << "ted: " << ted << std::endl;

    std::cout << "ptrTed: " << ptrTed << std::endl;

    std::cout << "*ptrTed: " << *ptrTed << std::endl;

    std::cout << "&ted: " << &ted << std::endl;

    return 0;
}
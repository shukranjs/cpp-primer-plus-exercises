/*
Suppose treacle is an array of 10 floats. Declare a pointer that points to the first ele-
ment of treacle and use the pointer to display the first and last elements of the array.
*/

#include <iostream>

int main()
{
    float treacl[10] = {4.2, 43, 11, 0.5};

    float *ptrTreacl = treacl;

    std::cout << "First element: " << *ptrTreacl << std::endl;

    return 0;
}
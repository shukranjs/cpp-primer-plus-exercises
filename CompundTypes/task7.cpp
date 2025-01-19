/*
Write a code fragment that asks the user to enter a positive integer and then cre-
ates a dynamic array of that many ints. Do this by using new, then again using a
vector object.
*/

#include <iostream>
#include <vector>

int main()
{
    std::cout << "Enter a positive integer: ";

    int number;
    std::cin >> number;

    // Validate the input
    if (number <= 0)
    {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Using new to create a dynamic array
    int *myArray = new int[number];
    // Optionally initialize the array
    for (int i = 0; i < number; ++i)
    {
        myArray[i] = 0; // Initialize all elements to 0
    }

    // Using vector to create a dynamic array
    std::vector<int> myAnotherArray(number, 0); // Initialize with 0

    // Example: Populate both arrays
    for (int i = 0; i < number; ++i)
    {
        myArray[i] = i + 1;        // Fill with 1, 2, 3, ...
        myAnotherArray[i] = i + 1; // Same for the vector
    }

    // Example: Print both arrays
    std::cout << "Array created with new: ";
    for (int i = 0; i < number; ++i)
    {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array created with vector: ";
    for (int i = 0; i < number; ++i)
    {
        std::cout << myAnotherArray[i] << " ";
    }
    std::cout << std::endl;

    // Free the dynamically allocated memory
    delete[] myArray;

    return 0;
}

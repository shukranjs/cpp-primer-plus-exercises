/*
William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:
The name of the pizza company, which can consist of more than one word
The diameter of the pizza
The weight of the pizza
n
n
n
Devise a structure that can hold this information and write a program that uses a
structure variable of that type.The program should ask the user to enter each of the
preceding items of information, and then the program should display that informa-
tion. Use cin (or its methods) and cout.
8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.*/

#include <iostream>
#include <string>

struct Pizza
{
    std::string companyName; // Name of the pizza company
    double diameter;         // Diameter of the pizza in inches
    double weight;           // Weight of the pizza in pounds
};

int main()
{
    // Dynamically allocate memory for a Pizza structure
    Pizza *myPizza = new Pizza;

    // Request the pizza diameter first
    std::cout << "Enter the diameter of the pizza (in inches): ";
    std::cin >> myPizza->diameter;
    std::cin.ignore(); // Ignore the newline character left in the input buffer

    // Request the name of the pizza company
    std::cout << "Enter the name of the pizza company: ";
    std::getline(std::cin, myPizza->companyName); // Allows multi-word input

    // Request the weight of the pizza
    std::cout << "Enter the weight of the pizza (in pounds): ";
    std::cin >> myPizza->weight;

    // Display the pizza information
    std::cout << "\nPizza Information:" << std::endl;
    std::cout << "Company Name: " << myPizza->companyName << std::endl;
    std::cout << "Diameter: " << myPizza->diameter << " inches" << std::endl;
    std::cout << "Weight: " << myPizza->weight << " pounds" << std::endl;

    // Free the dynamically allocated memory
    delete myPizza;

    return 0;
}

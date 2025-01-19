/*
Write a C++ program that requests and displays information as shown in the fol-
lowing example of output:
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
*/

#include <iostream>

#include <string>

int main()
{
    std::string firstName, lastName;
    char grade;
    int age;

    // Prompt for first name
    std::cout << "What is your first name? ";
    std::getline(std::cin, firstName); // Allows multi-word input

    // Prompt for last name
    std::cout << "What is your last name? ";
    std::getline(std::cin, lastName);

    // Prompt for letter grade
    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;

    // Prompt for age
    std::cout << "What is your age? ";
    std::cin >> age;

    // Adjust grade downward (up one letter)
    if (grade == 'A')
    {
        grade = 'B';
    }
    else if (grade == 'B')
    {
        grade = 'C';
    }
    else if (grade == 'C')
    {
        grade = 'D';
    }

    // Display the results
    std::cout << "\nName: " << lastName << ", " << firstName << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}

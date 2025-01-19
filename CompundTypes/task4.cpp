/*
Use enum to define a type called Response with the possible values Yes, No, and
Maybe. Yes should be 1, No should be 0, and Maybe should be 2.
*/

#include <iostream>

enum Response
{
    No = 0,
    Yes = 1,
    Maybe = 2
};

int main()
{
    Response answer = Yes;
    if (answer == Yes)
    {
        std::cout << "The response is yes" << std::endl;
    }
    return 0;
}
/*
1. How would you declare each of the following?
     a. actors is an array of 30 char.
     b. betsie is an array of 100 short.
     c. chuck is an array of 13 float.
     d. dipsea is an array of 64 long double.
*/

#include <iostream>
#include <array>

int main()
{
     using namespace std;

     char actors[30] = {};

     std::array<char, 30> actorss;

     short betsie[100] = {};

     float chuck[13] = {};

     long double dipsea[64];

     return 0;
}

/*
Devise a structure declaration that describes a fish.The structure should include the
kind, the weight in whole ounces, and the length in fractional inches.
*/
#include <string>

int main()
{
    struct Fish
    {
        std::string kind;
        float weight;
        float length;
    };

    Fish x;
    x.kind = 'Sazan';
    x.weight = 3.2;
    x.length = 0.4;
    return 0;
}
// convert.cpp -- converts stone to pounds
// both stones and pounds are in "float" type
// formula: pounds = 14 * stonds

#include <iostream>
float stonetolb(float);

int main()
{
    using namespace std;
    float stone;
    cout << "Please enter the weight in stone: ";
    cin >> stone;
    float pounds = stonetolb(stone);
    cout << stone << " stones = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

float stonetolb(float sts)
{
    return 14 * sts;
}
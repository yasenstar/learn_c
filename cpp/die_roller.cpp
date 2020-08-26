// Die Roller
// Demostrates generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randomNumber = rand();

    cout << "randomNumber is " << randomNumber << endl;

    int die = (randomNumber % 6 ) + 1;
    cout << "You rolled a " << die << endl;

    return 0;
}
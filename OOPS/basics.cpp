#include <iostream>
#include <string.h>

using namespace std;

//* user-defined datatype -> 'player' class
class player
{
    //* access modifier -> public
public:
    //* data members
    int score;
    int health;
    string name;
};

int main()
{
    player vatshal; //* 'vatshal' is object 1 of class 'player'
    vatshal.name = "vatshal negi";
    vatshal.health = 90;
    vatshal.score = 80;

    cout << "player 1 name: " << vatshal.name << endl;
    cout << "player 2 score: " << vatshal.score << endl;
    cout << "player 3 health points: " << vatshal.health << endl;

    return 0;
}
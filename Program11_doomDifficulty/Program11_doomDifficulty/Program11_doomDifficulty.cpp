#include <iostream>
using namespace std;

int main()
{
    cout << "Select a difficulty:" << endl;
    cout << "1. I'm too young to die!" << endl;
    cout << "2. Hey not too rough!" << endl;
    cout << "3. Hurt me plenty." << endl;
    cout << "4. Ultra-Violence." << endl;
    cout << "5. Nightmare..." << endl;

    int difficulty;
    cin >> difficulty;

    switch (difficulty)
    {
    case 1:
        cout << "You're kidding, right?" << endl;
        break;

    case 2:
        cout << "You don't play shooters, do you?" << endl;
        break;

    case 3:
        cout << "Boring just like your personality" << endl;
        break;

    case 4:
        cout << "So you want a challenge eh?" << endl;
        break;

    case 5:
        cout << "Welcome back DemonSlayer!" << endl;
        break;
    }
  
    return 0;
}
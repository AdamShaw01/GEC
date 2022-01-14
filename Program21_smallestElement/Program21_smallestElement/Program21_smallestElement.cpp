#include <iostream>
using namespace std;

int main()
{
    cout << "Input 10 numbers" << endl;
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Input: ";
        cin >> numbers[i];
    }

    int position = 1;
    int smallestNumber = numbers[0];
    for (int i = 0; i < 10; i++)
    {
        if (smallestNumber > numbers[i])
        {
            smallestNumber = numbers[i];
            position = (i + 1);
        }
    }
    cout << "Smallest value: " << smallestNumber << endl;
    cout << "Position: " << position << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    cout << "Input 5 numbers" << endl;
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Input: ";
        cin >> numbers[i];
    }

    int position = 1;
    int largestNumber = numbers[0];
    for (int i = 0; i < 5; i++)
    {
        if (largestNumber < numbers[i])
        {
            largestNumber = numbers[i];
            position = (i + 1);
        }
    }
    cout << "Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\nArray backwards: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << "\nLargest value: " << largestNumber << endl;
    cout << "Position: " << position << endl;
    return 0;
}



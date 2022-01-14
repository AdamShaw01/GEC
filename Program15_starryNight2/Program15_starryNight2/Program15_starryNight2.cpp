#include <iostream>
using namespace std;

int main()
{
loop:
    char answer;
    int number;
    int stars = 1;

    cout << "Input a number between 1 and 10" << endl;
    cin >> number;
    if (number < 11)
    {
        for (int i = 0; i < number; i++) {
            for (int j = 0; j < stars; j++) {
                cout << "* ";
            }
            stars++;
            cout << endl;
        }

        cout << "Do you wish to have another go?\nEnter Y for yes and N for no." << endl;
        cin >> answer;

        if (answer == 'Y')
            goto loop;
        else
            cout << "Goodbye" << endl;
    }
    else
        goto loop;

    return 0;
}
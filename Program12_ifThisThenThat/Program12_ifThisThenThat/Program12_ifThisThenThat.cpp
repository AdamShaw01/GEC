#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int answer;
    int temp;

    cout << "Please tell me if it is raining with 1 or snowing with 2." << endl;
    cin >> answer;

    cout << "What is the temperature in celsius?" << endl;
    cin >> temp;

    if (answer == 2)
    {
        if (temp > 5)
        {
            cout << "Wear something warm" << endl;
        }
        else if (temp > 0)
        {
            cout << "Wrap up well, otherwise stay at home" << endl;
        }
    }
    else if (answer == 1)
    {
        if (temp > 15)
        {
            cout << "Wear a light raincoat" << endl;
        }
        else
        {
            cout << "Wear a thick coat" << endl;
        }

    }
    else
    {
        cout << "Have a nice day because it is neither raining nor snowing" << endl;
    }

    return 0;
}


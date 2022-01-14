#include <iostream>
using namespace std;

int main()
{
    int haribo = 40;
    int students = 14;
    int shares = haribo / students;
    int haribosLeft = haribo % students;

    cout << "Packets of haribo per student: " << shares << endl;
    cout << "Packets left over: " << haribosLeft << endl;

    return 0;
}


#include <iostream>
using namespace std;

int evens[9];
int odds[9];
int numOfEven = 0;
int numOfOdd = 0;
int evenTotal = 0;
int oddTotal = 0;

bool oddEven(int list);
void outputResults(int numOfOdd, int numOfEven, int oddTotal, int evenTotal);

int main()
{
	int numbers[10];
    cout << "Input 10 numbers\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
        oddEven(numbers[i]);
    }
    outputResults(numOfOdd, numOfEven, oddTotal, evenTotal);
    cin.get();
    return 0;
}
bool oddEven(int list)
{
    if (list % 2 == 0)
    {
        numOfEven++;
        evenTotal = evenTotal + list;
    }
    else
    {
        numOfOdd++;
        oddTotal = oddTotal + list;
    }
    return true;
}
void outputResults(int numOfEven, int numOfOdd, int oddTotal, int evenTotal)
{
    cout << "Number of even numbers: " << numOfEven << endl;
    cout << "Number of odd numbers: " << numOfOdd << endl;
    cout << "Total value of even numbers: " << evenTotal << endl;
    cout << "Total value of odd numbers: " << oddTotal << endl;
}
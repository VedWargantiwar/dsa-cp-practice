// Write a program in C++ to input any number and print it in words.

#include <iostream>
using namespace std;
void printnum(int);

int main()
{
    int n, a, tempn;
    int i = 0;
    int x = 0;
    
    cout << "Input any number: ";
    cin >> n;
    tempn = n;
    
    while (n >= 1)
    {
        n /= 10;
        i++;
    }
    int array[i];
    n = tempn;

    while (n >= 1)
    {
        a = n % 10;
        n /= 10;
        array[x] = a;
        x++;
    }
    
    
    for (int b = i - 1; b >= 0; b--)
    {
        printnum(array[b]);
    }

    return 0;
}

void printnum(int a)
{
    switch (a)
    {
    case 0:
        cout << "zero ";
        break;
    case 1:
        cout << "one ";
        break;
    case 2:
        cout << "two ";
        break;
    case 3:
        cout << "three ";
        break;
    case 4:
        cout << "four ";
        break;
    case 5:
        cout << "five ";
        break;
    case 6:
        cout << "six ";
        break;
    case 7:
        cout << "seven ";
        break;
    case 8:
        cout << "eight ";
        break;
    case 9:
        cout << "nine ";
        break;

    default:
        break;
    }
}
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be checked:";
    cin >> n;
    if( n%2==0 )
    {
        cout << n << " is an Even number.";
    }
    else
    {
        cout << n << " is a Odd number.";
    }

    return 0;
}

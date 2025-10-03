#include <iostream>
using namespace std;
int main()
{
    int a, b, greater;

    cout << "Enter number1:\n";
    cin >> a;
    cout << "Enter number2:";
    cin >> b;
    if (a == b)
    {
        cout << "Both Numbers are equal!"; 
    }
    else
    {
        if (a > b)
        {
            greater = a;
        }
        else
        {
            greater = b;
        }
         cout << "The greater number  is :" << greater;
    }

    int sum = a + b;
    cout<< "The sum of both numbers is :" << sum;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter your first value: ";
    cin >> a;
    cout << "Enter your second value: ";
    cin >> b;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    cout << "Your Sum is: " << sum << endl;
    cout << "Your Sub is: " << sub << endl;
    cout << "Your Multiple is: " << mul << endl;
    if (b == 0)
    {
        cout << "Error: You can not devide by 0" << endl;
    }
    else
    {
        int divide = a / b;
        cout << "Your Divide is: " << divide << endl;
    }

    return 0;
}
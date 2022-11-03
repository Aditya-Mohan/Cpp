#include <iostream>

using namespace std;

int c = 45;
int main()
{
    // ******Build in data types******
    /* int a, b, c;
     cout << "Enter the value of a:" << endl;
     cin >> a;
     cout << "Enter the value of b:" << endl;
     cin >> b;
     c = a + b;
     cout << "The sum is" << c << endl;
     cout << "The global c is" << ::c;*/

    // ******Float, Double and Long double Literals******

    /*float d = 34.4f;
    long double e = 34.4l;
    cout << "The size of 34.4 is" << sizeof(34.4) << endl;
    cout << "The size of 34.4f is" << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is" << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is" << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is" << sizeof(34.4L) << endl;

    cout << "The value of d is" << d << endl
         << "The value of e is" << e;*/

    // ******Reference Variables******
    // Rohan Das--->Monty--->Rohu--->Dangerous Coder

    /* float x = 201;
     float &y = x;
     cout << x << endl;
     cout << y << endl;*/

    // ******Typecasting******

    int m = 45;
    float n = 45.46;
    cout << "The Value of m is " << (float)m << endl;
    cout << "The Value of n is " << (int)n << endl;

    cout << "The Value of m is " << float(m) << endl;
    cout << "The Value of n is " << int(n) << endl;
    int c = int(n);

    cout << "the expression is " << m + n << endl;
    cout << "the expression is " << m + int(n) << endl;
    cout << "the expression is " << m + (int)n << endl;

    return 0;
}
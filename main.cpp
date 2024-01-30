#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a {};
    double b {};
    double c {};
    double d {};
    double root1 {};
    double root2 {};

    cout << "For quadratic equation ax^2 + bx + c = 0,\n";
    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    cout << "Enter value for c: ";
    cin >> c;

    if (a == 0)
        cout << "Invalid value for 'a'\n";
    
    d = pow(b,2) - 4*a*c;

    root1 = (-b + sqrt(d))/(2*a);

    root2 = (-b - sqrt(d))/(2*a);

    cout << "Discriminant value is: " << d << "\n";

    if (d < 0)
        cout << "Roots are imaginary";
    else if (d == 0)
    {
        cout << "Roots are real and distinct\n";
        cout << "Root of the equation is: " << root1;
    }
    else if (d > 0)
    {
        cout << "Roots are real and distinct\n";
        cout << "First root of the equation is: " << root1 << "\n";
        cout << "Second root of the equation is: " << root2;
    }
    
    return 0;

}



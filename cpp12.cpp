#include<iostream>
using namespace std;

double calculateArea(double length);

int main()
{
    double length = 5.0;
    double area = calculateArea(length);

    cout << "Area: " << area << "cm^2\n";

    return 0;
}

double calculateArea(double length)
{
    return length * length;
}
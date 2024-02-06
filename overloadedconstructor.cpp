#include<iostream>
using namespace std;
int main()
{
    // overloaded constructors = multiple constructors w/ same name, but different parameters
    // allows us to initialize objects in different ways
    class Pizza {
        public:
        string pizzaSize;
        string pizzaToppings;
        double pizzaPrice;
        Pizza()
        {
            pizzaSize="small";
            pizzaToppings="cheese";
            pizzaPrice=10.99;
        }
        Pizza(string aSize)
        {
            pizzaSize=aSize;
            pizzaToppings="cheese";
            pizzaPrice=10.99;
        }
        Pizza(string aSize,string aToppings)
        {
            pizzaSize=aSize;
            pizzaToppings=aToppings;
            pizzaPrice=10.99;
        }
        Pizza(string aSize,string aToppings,double aPrice)
        {
            pizzaSize=aSize;
            pizzaToppings=aToppings;
            pizzaPrice=aPrice;
        }
    }; 
 return 0;
}
#include<iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1,string topping2);


int main()
{
 bakePizza("pepperoni","mushroom");
 return 0;
}

void bakePizza(){
    cout<< "Here's your pizza \n";
}

void bakePizza(string topping1){

    cout << "Here's your " << topping1 << " pizza! \n";
}
/**
 * @brief Function to bake a pizza with two toppings.
 * 
 * @param topping1 The first topping for the pizza.
 * @param topping2 The second topping for the pizza.
 */
void bakePizza(string topping1,string topping2){

    cout << "Here's your " << topping1 << " and "<< topping2 << " pizza! \n";
}


//function name + parameter is known as function signature
//functions with same name but different parameters are known as overloading functions


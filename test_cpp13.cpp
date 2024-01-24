void testBakePizza() {
    // Test case 1: Check if the function correctly bakes a pizza with two toppings
    string topping1 = "pepperoni";
    string topping2 = "mushrooms";
    bakePizza(topping1, topping2); // Expected output: "Here's your pepperoni and mushrooms pizza!"

    // Test case 2: Check if the function correctly bakes a pizza with two different toppings
    topping1 = "bacon";
    topping2 = "pineapple";
    bakePizza(topping1, topping2); // Expected output: "Here's your bacon and pineapple pizza!"

    // Test case 3: Check if the function correctly bakes a pizza with two identical toppings
    topping1 = "cheese";
    topping2 = "cheese";
    bakePizza(topping1, topping2); // Expected output: "Here's your cheese and cheese pizza!"
}

int main() {
    testBakePizza();
    return 0;
}
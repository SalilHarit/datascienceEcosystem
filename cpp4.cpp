#include <iostream>
#include <cmath>

int main() {

    // double a;
    // double b;
    // double c;

    // std::cout<<"enter side a: ";
    // std::cin>>a;
    // std::cout<<"enter side b: ";
    // std::cin>>b;



    // c = sqrt(pow(a, 2) + pow(b, 2));



    // std::cout<<"side C: "<<c;

    // int age;

    // std::cout<<"enter your age: ";
    // std::cin>>age;

    // if (age >= 18){

    //     std::cout<<"welcome to the site";

    // }
    // else if (age <0)
    // { std::cout<<"you are not born yet";}
    
    //     else{
    
    //         std::cout<<"you are not old enough to enter";
    
    //     }
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    if(month==1){
        std::cout << "It is january";
    }

    else if(month == 2){
        std::cout << "It is February";
    }

    else if(month == 3){
        std::cout << "It is March";
    }
    else if(month == 4){
        std::cout << "It is April";
    }
    else if(month == 5){
        std::cout << "It is May";
    }
    else if(month == 6){
        std::cout << "It is July";
    }
    else if(month == 7){
        std::cout << "It is August";
    }
    else if(month == 8){
        std::cout << "It is September";
    }
    else if(month == 9){
        std::cout << "It is October";
    }
    else if(month == 10){
        std::cout << "It is November";
    }
    else if(month == 11){
        std::cout << "It is December";
    }
    return 0;
}
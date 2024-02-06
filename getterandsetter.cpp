#include<iostream>
using namespace std;
    class Stove{
        private:
        int temp;
        public:
        void setTemp(int aTemp)
        {
            if(aTemp<100)
            {
                temp=100;
            }
            else
            {
                temp=aTemp;
            }
        }
        int getTemp()
        {
            return temp;
        }
    };
    Stove kitchenStove;
int main()
{
    // getter and setter functions = allows us to control access to private variables
    // getter = returns the value of the variable
    // setter = sets the value of the variable
    kitchenStove.setTemp(300);
 return 0;
}
#include<iostream>
using namespace std;
int main()
{
    //fill()=fills a range of elements with a specified value
    //fill(begin,end,value)
    //string foods[10]={"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    string foods[100];
    fill(foods,foods +100,"pizza");
    for(string food : foods)
    {
        cout << food << '\n';
    }
 return 0;
}
#include<iostream>
using namespace std;
template <typename T,typename U>
auto max(T x,U y){
    return (x>y)?x:y;
}
// double max(double x,double y){
//     return (x > y) ? x:y;
// }
int main()
{
    // function template = describes what a function looks like.
                        //    can be used to generate as many overloaded functions as needed using different data types
    cout << max (1,2) << '\n';

    

 return 0;
}
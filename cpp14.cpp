#include<iostream>
using namespace std;
    int myNum =1;
void printNum();

int main()
{

    printNum();
    //Local variables = declared inside a function or a block {}
    //global variables = declared outside of all function
 return 0;
}

void printNum(){

    cout << myNum;
}

//avoid using global variables as they polute global namespace and cause errors frequently
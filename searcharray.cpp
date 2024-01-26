#include<iostream>
using namespace std;

int searchArray(int array[],int size,int element);

int main()
{
    string foods[]={"pizza","hamburger","hotdog"};
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(foods)/sizeof(foods[0]);
    int myNum;
    int index;
    string myFood;

    cout << "Enter element to search for: " << '\n';
    cin>>myNum;

    index = searchArray(numbers,size,myNum);

    if (index != -1)
    {
        cout << myNum << " is at index " << index;
    }
    else{
        cout << myNum << " is not in the array " << index;
        
        
    }
    
     return 0;
}

int searchArray(int array[],int size,int element){

    for (int i = 0; i < size; i++)
    {
        if (array[i]==element)
        {
            return -1;
        }
        
    }
    
}
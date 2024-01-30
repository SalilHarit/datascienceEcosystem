#include<iostream>
using namespace std;
int main()
{
    // int *pNum = NULL;
    // pNum = new int;
    // *pNum=21;

    // cout << "address : " << pNum << '\n';
    // cout << "address : " << *pNum << '\n';

    // delete pNum;
    char *pGrades = NULL;
    int size;

    cout << "How many grades to enter in ? : ";
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a grade #" << i +1 << ": ";
        cin >> pGrades[i];
        
        
            }
    for (int i = 0; i < size; i++)
    {
        
    }
    delete [] pGrades;
 return 0;
}
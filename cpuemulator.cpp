#include<stdio.h>
#include <stdlib.h>


using namespace std;

struct CPU
{
    using Byte = unsigned char;
    using Word = unsigned short;

    Word PC; //program counter
    Word SP; //stack pointer

    Byte A,X,Y; //registers

    Byte C: 1; 
    Byte Z: 1; 
    Byte I: 1; 
    Byte I: 1; 
    Byte I: 1; 
    Byte I: 1; 


}

int main()
{

 return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
    
//     int row = 1;
//     int count = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= n)
//         {
//             cout << count;
//             col++;
//         }
//         cout << endl; // Add a newline character after each column iteration
//         count++;
//     }
    
#include <iostream>

void printTriangle(int n) {
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << count << " ";
            count++;
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    printTriangle(n);
    return 0;
}
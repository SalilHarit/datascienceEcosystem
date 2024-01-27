#include<iostream>
#include<string> // Add the missing include statement for the string library

using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    //based on luhn algorithm
    // 1. Double every second digit from right to left
    // if doubled number is 2 digits,split them
    // 2.Add all single digits from step 1
    // 3.Add all odd numbered digits from right to left
    // 4.Sum results from steps 2&3
    // 5.If step 4 is divisible by 10, # is valid
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card #: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if (result % 10 == 0) {
        cout << cardNumber << " is valid ";
    } else {
        cout << cardNumber << " is not valid ";
    }

    return 0;
}

int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}

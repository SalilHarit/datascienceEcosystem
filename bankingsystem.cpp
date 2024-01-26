#include<iostream>
#include<iomanip> // Add the missing header file

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);


/**
 * @brief The main function of the banking system program.
 * 
 * This function allows the user to interact with the banking system by choosing various options such as
 * showing the balance, depositing money, withdrawing money, or exiting the program.
 * 
 * @return int The exit status of the program.
 */
int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        cout << "**********\n";
        cout << "Enter your choice:\n";
        cout << "**********\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);  // Show the updated balance after deposit
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);  // Show the updated balance after withdrawal
            break;
        case 4:
            cout << "Thanks for visiting! \n";
            break;
        default:
            break;
        }
    } while (choice != 4);

    return 0;
}


void showBalance(double balance)
{
    cout << "Your balance is: $" << fixed << setprecision(2)<<fixed << balance << '\n'; // Format the balance output
}

double deposit()
{
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;
    if (amount>0)
    {
        return amount;
    }
    
    
}

double withdraw(double balance)
{
    double amount =0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "insufficient funds \n";
    }
    else if (amount <0){
        cout << "That's not a valid amount \n";
    }
    
    return balance;
}
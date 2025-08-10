#include <iostream>

// Forward declaration of the BankAccount class
class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void checkBalance() {
        std::cout << "Account balance: $" << balance << std::endl;
    }

    friend class BankEmployee; // Declare BankEmployee as a friend class
};
class BankEmployee {
public:
    // Friend function to access and modify the balance of a BankAccount
    void accessAccountBalance(BankAccount& account, double newBalance);
};



// Define the accessAccountBalance function after the BankAccount class is fully declared
void BankEmployee::accessAccountBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
    std::cout << "Bank employee updated account balance to $" << newBalance << std::endl;
}

int main() {
    BankAccount myAccount(1000.0);
    BankEmployee employee;

    myAccount.checkBalance(); // Check initial balance

    // The BankEmployee can modify the balance directly
    employee.accessAccountBalance(myAccount, 1500.0);

    myAccount.checkBalance(); // Check the updated balance

    return 0;
}
    
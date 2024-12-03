#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance=1000;

    do {
        cout << "ATM Menu:\n1. Check Balance\n2. Withdraw Money\n3. Deposit Money\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: 
                cout<<"Current balance: $"<<balance<<endl; 
                break;
            case 2: {
                double withdraw;
                cout<<"Enter amount to withdraw: ";
                cin>>withdraw;
                if(withdraw <= balance)
                    balance -= withdraw;
                else
                    cout << "Insufficient balance.\n";
                break;
            }
            case 3: {
                double deposit;
                cout << "Enter amount to deposit: ";
                cin >> deposit;
                balance += deposit;
                break;
            }
            case 4: break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

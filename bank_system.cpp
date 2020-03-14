#include <iostream>

using std::cout;
using std::cin;
using std::endl;




void homescreen(int balance = 0){
    int choice {};
    char redo {};
    redo = toupper(redo);
    do{
        cout << "What would you like to do?\n1.Deposit Funds\n2.Withdraw Funds\n3.Check Balance\n4.Quit" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                int deposit_cash;
                cout << "Please enter the amount that you will deposit: ";
                cin >> deposit_cash;
                cout << "Congratulations! You have deposited " << deposit_cash << " pesos." << endl;
                balance += deposit_cash;
                cout << "Your balance is now: " << balance << " pesos." << endl;
                break;
            case 2:{
                int withdraw_cash;
                cout << "Please enter the amount that you will withdraw: ";
                cin >> withdraw_cash;
                if( (balance - withdraw_cash) >= 0){
                    cout << "You have withdrawed " << withdraw_cash << " pesos." << endl;
                    balance -= withdraw_cash;
                    cout << "Your balance is now: " << balance << endl;
                }else{
                    do{
                        cout << "Sorry, the the balance that you have is insufficient. Would you like to try again?(Y/N): ";
                        cin >> redo;
                        if(redo == 'Y'){
                            continue;
                        }else if(redo != 'N'){
                            break;
                        }
                    }while(redo != 'N');
                    
                }
            }
            case 3:
                cout << "Your balance is: " << balance << endl;
                break;
            case 4:
                cout << "Thank you for using the Jim's Bank. Have a nice day! "<< endl;
                break;
            default:
                cout << "Sorry your input is invalid. " << endl;
                break;
        }
    }while(choice != 4);
    
    
}

void login(){
    int account_number;
  
   
    cout << "Please enter your account number: ";
    cin >> account_number;
    if(account_number == 1){
        cout << "Welcome!" << endl;
    }else{
        cout << "Please try again." << endl;
        login();
    }
}

int main(){
    
    cout << "Good Day! Welcome to Jim's Bank!" << endl;
    
    login();
    homescreen();
    
    
    return 0;
}
#include <iostream>

void deposit();
void withdraw();
double balanceMoney = 0;

int main(){
    int entry;
    do{ 
        do{
            std::cout << "****BANKING PROGRAM****\n";
            std::cout << "Choose from the following:\n";
            std::cout << "1 for Deposit\n";
            std::cout << "2 for Withdraw\n";
            std::cout << "3 for Balance\n";
            std::cout << "4 for Exit\n";
            std::cin >> entry;

            if (entry == 1){
                deposit();
            }
            else if (entry == 2){
                withdraw();
            }
            else if (entry == 3){
                std::cout << "Current Balance: Rs." << balanceMoney << "\n";
            }
        }while(entry != 1 && entry != 2 && entry != 3 && entry != 4); // When Entry is nothing from 1 to 4.
    }while(entry != 4);

    if(entry == 4){
        std::cout << "***COME BACK AGAIN***\n";
    }


    return 0;
}

void deposit(){
    double deposit;
    do{
        std::cout << "How much to deposit? Rs.";
        std::cin >> deposit;
    }while(deposit < 0);
    balanceMoney += deposit;
    std::cout << "Current Balance is Rs." << balanceMoney << "\n";
}

void withdraw(){
    double withdrawNotSure, withdrawValid;
    do{
        std::cout << "How much to withdraw? Rs.";
        std::cin >> withdrawNotSure;    
        if(withdrawNotSure > balanceMoney){
            std::cout << "No sufficient funds!\n";
        }
        
    }while(withdrawNotSure < 0 || withdrawNotSure > balanceMoney);

    withdrawValid = withdrawNotSure;

    balanceMoney = balanceMoney - withdrawValid;
    std::cout << "Current Balance is Rs." << balanceMoney << "\n";
}

   

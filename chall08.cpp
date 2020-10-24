/** Program that tell the denomination and number of notes required
    to tender a particular amount.
    @ file chall08.cpp
    @ author Peter Saffold
    @ date 10/23/2020

    The currency is made up of Rupee denominations
    Re. 1, Rs 2, Rs. 5, Rs. 10, Rs 50, Rs.100, Rs 500, and Rs. 2000
*/
#include <iostream>

void listBankNotes(int amount);

int main(int argc, char *argv[]) {
    int amount = 0;
    std::cout << "Enter the amount: ";
    std::cin >> amount;
    std::cout << std::endl;
    listBankNotes(amount);
}

void listBankNotes(int amount) {
    int denomination[] = {1,2,5,10,50,100,500,2000};

    if (amount >= 0) {       
        for (int i = 7; i >= 0; i--) {
            int numNotes = amount / denomination[i];
            if (numNotes > 0) {
                amount -= numNotes * denomination[i];
                std::cout << numNotes << " of " << denomination[i] << std::endl;
            }
        }
    }
}

    

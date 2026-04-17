//Project 1: ATM Management
#include <stdio.h>

//Global Variables
int pin = 1234;
float amt;

//-----FUNCTIONS-----
//Function 1: Deposit Money
void add() {
    float deposit;
    printf("Enter Amount to Deposit: ");
    scanf("%f", &deposit);
    if (deposit <= 0) {
        printf("\nInvalid deposit amount. Please enter a positive value.\n");
    } else {
        amt += deposit;
        printf("\nSuccessfully Deposited\n");
    }
}
//Function 2: Withdraw Money
void sub() {
    float withdraw;
    printf("Enter Amount to Withdraw: ");
    scanf("%f", &withdraw);
    if (withdraw <= 0) {
        printf("\nInvalid withdrawal amount. Please enter a positive value.\n");
    } else if (amt < withdraw) {
        printf("\nInsufficient Balance. Unable to withdraw.\n");
    } else {
        amt -= withdraw;
        printf("\nSuccessfully Withdrawn\n");
    }
}
//Function 3: Check Balance
void bal() {
    printf("\nCurrent Balance: %.2f\n", amt);
}
//Function 4: Change Pin
void changepin() {
    int oldpin, newpin;
    printf("Enter Old Pin: ");
    scanf("%d", &oldpin);
    if (oldpin == pin) {
        printf("Enter New Pin: ");
        scanf("%d", &newpin);
        pin = newpin;
        printf("\nSuccessfully Changed Pin to: %d\n", pin);
    } else {
        printf("\nWrong Pin. Access Denied.\n");
    }
}
//Function 5: Help
void help() {
    printf("\nENQUIRY NUMBER!\n");
    printf("+91-0123456789\n");
}


//Main Function
void main() {
    int entered_pin, choice;
    printf("Enter Pin: ");
    scanf("%d", &entered_pin);
    if (entered_pin == pin) {
        printf("Login Successful...\n");
        while(1) {
            int ch;
            printf("\nC H O I C E S\n");
            printf("Press 1 to Deposit money\n");
            printf("Press 2 to Withdraw money\n");
            printf("Press 3 to Check Balance\n");
            printf("Press 4 to Change Pin\n");
            printf("Press 5 for Help\n");
            printf("Press 6 to Exit\n");
            printf("\nENTER YOUR CHOICE : ");
            scanf("%d",&ch);
            if(ch==1) {
                add();
            } else if(ch==2) {
                sub();
            } else if(ch==3) {
                bal();
            } else if(ch==4) {
                changepin();
            } else if(ch==5) {
                help();
            } else if(ch==6) {
                printf("\nThankyou for visiting...\n");
                printf("EXITED\n");
                break;
            } else {
                printf("I N V A L I D  C H O I C E\n");
            }
        }
    }
    else {
        printf("Invalid Pin...");
    }
}

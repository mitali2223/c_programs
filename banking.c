/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

 int balance=0,deposit,withdraw;

void accountBalance(void){
    printf("your current account balance: %d\n",balance);
}
 
void Deposit(void){
    printf("enter amount to deposit: ",deposit) ;
    scanf("%d",&deposit);
    if(deposit<0){
        printf("please enter valid amount\n");
    }
    else{
    balance += deposit;
        
    }
}
 
void Withdraw(void){
    printf("enter amount to withdraw: ",withdraw);
    scanf("%d",&withdraw);
    if(balance>=withdraw){
        balance -= withdraw;
    }
    else if(withdraw<0){
        printf("please enter valid amount\n"); 
    }
    else if(withdraw>balance){
        printf("you do not have sufficient balance\n");
    }
}

int main(void) {
    
    
        int button;
        char username[30];
        char password[20]="Mitali@123";
        char pwd[20];
        printf("Enter your username: \n");
        scanf("%s",username);
        printf("Enter your password: ");
        scanf("%s",pwd);
        
        printf("%s",pwd);
        
        if(strcmp(pwd, password) == 0){
            printf("\n Welcome.Login Success!\n");
        }
        else {
            printf("\n wrong password");
            return -1;
        }
         
        while(1){
            printf("What would you like to do :\n");
            printf("\tPress '1' to check account balance\n");
            printf("\tPress '2' to deposit money\n");
            printf("\tPress '3' to withdraw money\n");
            printf("\tPress '0' to exit\n");
            scanf("%d",&button);
            
            if(button==0){
                    return -1;
            }
           
            switch(button){
                case 1: 
                    accountBalance();
                    break;
                case 2: 
                    Deposit();
                    printf("current account balance:%d\n",balance);
                    break;
                case 3:
                    Withdraw();
                    printf("current account balance:%d\n",balance);
                    break;
                default:
                    printf("Enter valid value!");
                    break;
                }
            }
        
    return 0;
}



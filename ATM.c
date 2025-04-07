#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int create_account(char account_number[9], char pin[4])
{
    char ac_num[100], p[20];
    int count = 0;
    srand(time(0));
    for(int i=0; i<9; i++)  // creating random account number
    {
        account_number[i]=rand()%10+48;
    }

    for(int i=0; i<4; i++) // creating random pin
    {
        pin[i]=rand()%10+48;
    }

    printf("Dear User! Your Account has been created Successfully\n");

    printf("Your Account Number is = ");

    for(int i=0; i<9; i++)
        printf("%c", account_number[i]);

    printf("\nYour 4 digit pin is = ");
    for(int i=0; i<4; i++)
        printf("%c", pin[i]);

    printf("\n");

    printf("Your Balance is 0\n");

while(1)
{
    int f=1;
    if(count==3)
    {
        return 0;
    }
    printf("Please Enter Your 9 Digit Account Number = ");
    scanf("%s", ac_num); // Taking the Account Number from User
    if(strlen(ac_num)!=9) // Checking if given account number matches the actual account number. if does not match then program ends after 3 tries
    {
        printf("Wrong Account Number\n");
        f=0;
        count++;
    }
    else
    {
        for(int i=0; i<9; i++)
            if(account_number[i]!=ac_num[i])
        {
            printf("Wrong Account Number\n");
            count++;
            f=0;
            break;
        }
    }

    if(f==1)
        break;
    if(count<4)
    {
        printf("You have %d more chances\n", (3-count));
    }
}
count=0;

while(1)
{
    int f=1;
    if(count==3)
    {
        return 0;
    }
    printf("Enter your 4 Digit Pin = ");
    scanf("%s", p); // Taking the Pin from user
    if(strlen(p)!=4) // Checking if given pin matches the Actual pin. if does not match then program ends after 3 tries
    {
        printf("Wrong Pin\n");
        f=0;
        count++;
    }
    else
    {
        for(int i=0; i<4; i++)
            if(pin[i]!=p[i])
        {
            printf("Wrong Pin\n");
            count++;
            f=0;
            break;
        }
    }
    if(f==1)
        break;
    if(count<4)
    {
        printf("You have %d more chances\n", (3-count));
    }
}
return 1;
}

int deposit(int balance) // Deposit the Amount
{
    int money;
    printf("Enter the Amount You want to Deposit\nDeposit Limit(10000 BDT)\n");
    scanf("%d", &money);

    if(money>10000)
    {
        printf("Limit Exceed\n");
    }
    else
        balance+=money;

    return balance;
}

int withdraw(int balance) // Withdraw the amount given by the user
{
    int money;
    printf("Enter the Amount You want to Withdraw\n");
    scanf("%d", &money);

    if(money>balance)
    {
        printf("Insufficient Balance\n");
    }
    else
    {
        if(money%20==0)
            balance-=money;
        else
            printf("Only the amount which is multiple of 20 will be accepted\n");
        }
        return balance;
    }

    void show_balance(int balance) // Print the Balance in Account
    {
        printf("Your Account Balance is = %d\n", balance);
        fflush(stdin);
    }

int main()
    {
        printf("\n                              ******** Welcome to STATE BANK ATM Service ***********\n");
printf("\n                              ******** It is a pleasure to have you here ***********\n");
printf("\n                ******** Please Follow the Steps Below to Learn About the Procedures ********\n");
printf("\n");

char account_number[9], pin[4];
int balance=0;
int p=create_account(account_number, pin);
if(p==0)
    return 0;
int count=0;

while(1)
{
    int z;
    int f=0;
    printf("\n");
    printf("\nEnter 1 for Deposit\n");
    printf("\nEnter 2 for Withdraw\n");
    printf("\nEnter 3 to Check Balance\n");
    printf("\nEnter 4 to Exit\n");
    printf("\n");
    scanf("%d", &z);

    switch(z)
    {
    case 1:
        {
            balance=deposit(balance);
            count++;
            break;
        }
    case 2:
        {
            balance=withdraw(balance);
            count++;
            break;
        }
    case 3:
        {
            show_balance(balance);
            count++;
            break;
        }
    case 4:
        {
        int c;
        printf("Do you want to Continue?\nPress 1 for Yes");
        scanf("%d", &c);

        if(c==1)
            f=1;
        break;
    }
    default:
        {
            printf("Wrong Input\n");
        }
}
if(f==1)
    break;

    int x;
    printf("Do you want another Transaction?\nPress 1 for another Transaction\n");
    scanf("%d", &x);

    if(x!=1)
    {
        printf("***** Thanks You *****");
        break;
    }
    }
    getch();
    }



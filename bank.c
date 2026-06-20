
#include <stdio.h>
#include <stdlib.h>

struct Bank
{
    int accno;
    char name[50];
    float balance;
};

int main()
{
    FILE *fp, *temp;
    struct Bank b;
    int choice, acc, found = 0;
    float amt;
    while(1)
    {
        printf("\n===== BANK MANAGEMENT SYSTEM =====");
        printf("\n1. Create Account");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Check Balance");
        printf("\n5. Exit");

        printf("\n\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {case 1:
            fp = fopen("bank.txt", "a");
            printf("\nEnter Account Number: ");
            scanf("%d", &b.accno);
            printf("Enter Name: ");
            scanf("%s", b.name);
            printf("Enter Balance: ");
            scanf("%f", &b.balance);
            fprintf(fp, "%d %s %.2f\n",b.accno, b.name, b.balance);
            fclose(fp);
            printf("\nAccount Created Successfully!");
            break;
        case 2:
            printf("\nEnter Account Number: ");
            scanf("%d", &acc);
            printf("Enter Deposit Amount: ");
            scanf("%f", &amt);
            fp = fopen("bank.txt", "r");
            temp = fopen("temp.txt", "w");
            found = 0;
            while(fscanf(fp, "%d %s %f",  &b.accno, b.name, &b.balance) != EOF)
            {if(b.accno == acc)
                {
                    b.balance = b.balance + amt;
                    found = 1;
                }
                fprintf(temp, "%d %s %.2f\n",
                        b.accno, b.name, b.balance);
            }
            fclose(fp);
            fclose(temp);
            remove("bank.txt");
            rename("temp.txt", "bank.txt");
            if(found)
                printf("\nAmount Deposited Successfully!");
            else
                printf("\nAccount Not Found!");
            break;
        case 3:
            printf("\nEnter Account Number: ");
            scanf("%d", &acc);
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amt);
            fp = fopen("bank.txt", "r");
            temp = fopen("temp.txt", "w");
            found = 0;
            while(fscanf(fp, "%d %s %f", &b.accno, b.name, &b.balance) != EOF)
            {
                if(b.accno == acc)
                {
                    if(amt <= b.balance)
                    {
                        b.balance = b.balance - amt;
                        printf("\nWithdrawal Successful!");
                    }
                    else
                    {
                        printf("\nInsufficient Balance!");
                    }

                    found = 1;
                }
                fprintf(temp, "%d %s %.2f\n",
                        b.accno, b.name, b.balance);
            }
            fclose(fp);
            fclose(temp);
            remove("bank.txt");
            rename("temp.txt", "bank.txt");
            if(found == 0)
                printf("\nAccount Not Found!");
            break;
        case 4:
            printf("\nEnter Account Number: ");
            scanf("%d", &acc);
             fp = fopen("bank.txt", "r");
            found = 0;
             while(fscanf(fp, "%d %s %f",&b.accno, b.name, &b.balance) != EOF)
    {if(b.accno == acc)
        {
            printf("\n===== ACCOUNT DETAILS =====");
            printf("\nAccount Number : %d", b.accno);
            printf("\nName           : %s", b.name);
            printf("\nBalance        : %.2f", b.balance);
            found = 1;
            break;
        }
    }
    fclose(fp);
    if(found == 0)
    {
        printf("\nAccount Not Found!");
    }
    break;
        case 5:
            printf("\nThank You!");
            exit(0);
        default:
            printf("\nInvalid Choice!");
        }
    }
    return 0;
}
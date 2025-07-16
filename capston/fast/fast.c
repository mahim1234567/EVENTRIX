#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
int registe();
int login();
struct login
{

    char fname[100];
    char lname[100];
    char username[100];
    char pass[100];
};

int registe()
{
    FILE *log;

    log = fopen("login.txt", "w");
    struct login l;

    printf("Enter Fast name: ");
    scanf("%s", l.fname);
    printf("Enter Last name: ");
    scanf("%s", l.lname);
    printf("Enter User name: ");
    scanf("%s", l.username);
    printf("Enter password: ");
    scanf("%s", l.pass);
    fwrite(&l, sizeof(l), 1, log);

    fclose(log);

    printf("\n Registration successfully\n");

    printf("\n Your User name is your User id\n");

    printf("Any key to continue..........");
    getch();
    system("CLS");
    login();
}
int login()
{
    char username[100];
    char pass[100];
    FILE *log;
    log = fopen("login.txt", "r");
    struct login l;
    printf("Enter user ID: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", pass);

    while (fread(&l, sizeof(l), 1, log))
    {
        if (strcmp(username, l.username) == 0 && strcmp(pass, l.pass) == 0)
        {
            printf("Successfully login\n");
        }
        else
        {
            printf("Enter correct password");
        }
    }
    fclose(log);
}
int main()
{
    int cho;
    printf("<<<<<-----WELCOME EVENTRIX----->>>>>\n\n");

    printf("Press 1 for Registration\nPress 2 for Login\n");
    printf("Enter Your choice: ");
    scanf("%d", &cho);

    if (cho == 1)
    {
        system("CLS");
        registe();
    }
    else if (cho == 2)
    {
        system("CLS");
        login();
    }
}

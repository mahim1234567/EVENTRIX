#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define AC_BLACK "\x1b[30m"
#define AC_RED "\x1b[31m"
#define AC_GREEN "\x1b[32m"
#define AC_YELLOW "\x1b[33m"
#define AC_BLUE "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN "\x1b[36m"
#define AC_WHITE "\x1b[37m"
#define AC_NORMAL "\x1b[m"


void front()
{
    printf("\n");
    printf("%s",AC_BLUE);
    printf("\t\t\t\t\t");
    printf("<o>      \\o/   v\\ \\o/       o       <o>      \\o      |      o/   \\o   \n");
    printf("\t\t\t\t\t");
    printf(" |        |     <\\ |       <|        |        v\\     o     /v     v\\  \n");
    printf("\t\t\t\t\t");
    printf("/ \\      / \\      < \\      / \\      / \\        <\\  __|>_  />       <\\ \n");

    printf("\n\n\n");

    printf("%s",AC_RED);
    printf("\t\t\t\t");
    printf("_////////_//         _//_////////_///     _//_///////////_/////// _ //////_//      _//\n"AC_RED);
    printf("\t\t\t\t");
    printf("_//       _//       _// _//      _/ _//   _//     _//    _//    _//  _//   _//   _//  \n");
    printf("\t\t\t\t");
    printf("_//        _//     _//  _//      _// _//  _//     _//    _//    _//  _//    _// _//   \n");
    printf("\t\t\t\t");
    printf("_//////     _//   _//   _//////  _//  _// _//     _//    _/ _//      _//      _//     \n");
    printf("\t\t\t\t");
    printf("_//          _// _//    _//      _//   _/ _//     _//    _//  _//    _//    _// _//   \n");
    printf("\t\t\t\t");
    printf("_//           _////     _//      _//    _/ //     _//    _//    _//  _//   _//   _//  \n");
    printf("\t\t\t\t");
    printf("_////////      _//      _////////_//      _//     _//    _//      _ //////_//      _//\n");


    printf("\n\n\n");
    printf("%s",AC_CYAN);

    printf("\t\t\t\t");
    printf("     __          _            __                        __            ___         \n");
    printf("\t\t\t\t");
    printf("    (_ . _  _ |.(_  . _  _   |_    _ _ |_  |  |.|_|_   (_  _  _  _|_   | _. _|  _ \n");
    printf("\t\t\t\t");
    printf("    __)|||||_)||| \\/|| )(_)  |__\\/(-| )|_  |/\\|||_| )  __)|||(_|| |_   || |(_|(_) \n");
    printf("\t\t\t\t");
    printf("           |      /     _/                                                         \n");

}
void frontpage()
{
    front();
    printf("%s",AC_GREEN);
    printf("\n\n\n\n\t\t\t\t\t\t\t    Any key to continue............");
    getch();
    system("CLS");
}
void drawLine(int len)
{
    for (int i = 0; i < len; i++) printf("=");
    printf("\n");
}

int main()
{

    //frontpage();
    frontnext();



}

void frontnext()
{
    printf("%s",AC_RED);
    int cho,cho2,cho3;
    drawLine(118);
    printf("======\t\t\t\t\t <<<<<-----WELCOME TO EVENTRIX----->>>>>  \t\t\t\t======\n");
    drawLine(118);
    printf("\n\n");
    printf("%s",AC_BLUE);
    printf("\t\t\t\t\t\t  [1].User/Coustomer.\n\n");
    printf("%s",AC_MAGENTA);
    printf("\t\t\t\t\t\t  [2].Admin/Manager.\n\n");
    printf("%s",AC_RED);
    printf("\t\t\t\t\t\t  [3].Exit.\n\n");
    printf("%s",AC_CYAN);
    printf("\t\t\t\t\t\t  Enter your Choice: ");
    scanf("%d",&cho);
    while(1)
    {
        if (cho == 1)
        {

            system("CLS");
            printf("%s",AC_RED);
            drawLine(120);
            printf("  [ EVENTTRIX ]\t\t\t <<<<<-----User Registration/Login Page----->>>>>\t\t\t[ EVENTTRIX ]\n");
            drawLine(120);
            printf("\n\n");
            printf("%s",AC_BLUE);
            printf("\t\t\t\t\t\t  [1].Registration.\n\n");
            printf("%s",AC_MAGENTA);
            printf("\t\t\t\t\t\t  [2].Login.\n\n");
            printf("%s",AC_RED);
            printf("\t\t\t\t\t\t  [0].Back.\n\n");
            printf("%s",AC_CYAN);
            printf("\t\t\t\t\t\t  Enter your Choice: ");
            scanf("%d",&cho2);

            if(cho2==1)
            {
                int cr;
                system("CLS");
                printf("%s",AC_RED);
                drawLine(120);
                printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----User Registration----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
                drawLine(120);
                printf("\n\n");
                printf("%s",AC_BLUE);
                printf("\t\t\t\t\t  [1].Complete Your Registration.\n\n");
                printf("%s",AC_MAGENTA);
                printf("\t\t\t\t\t  [0].Back.\n\n");
                printf("%s",AC_CYAN);
                printf("\t\t\t\t\t  Enter your Choice: ");
                scanf("%d",&cr);

                if(cr==1)
                {
                    system("CLS");
                    printf("%s",AC_RED);
                    drawLine(120);
                    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----User Registration----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
                    drawLine(120);
                    printf("\n\n");
                    registe();
                }
                else
                {
                    system("CLS");
                    frontnext();
                }


            }
            else if(cho2==2)
            {
                system("CLS");
                printf("%s",AC_RED);
                drawLine(120);
                printf("  [ EVENTTRIX ]\t\t\t\t <<<<<-----User Login Page----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
                drawLine(120);
                printf("\n\n");
                login();
            }
            else if(cho2==0)
            {
                system("CLS");
                frontnext();
            }
            else
            {
                system("CLS");
                printf("\nWrong Choice.Try again.........");
                printf("\n\nAny key to continue............");
                getch();
                system("CLS");
                main();

            }
        }

        ///////////////////////////////////////
        else if (cho == 2)
        {
            system("CLS");
            printf("%s",AC_RED);
            drawLine(120);
            printf("  [ EVENTTRIX ]\t\t\t <<<<<-----Admin Registration/Login Page----->>>>>\t\t\t[ EVENTTRIX ]\n");
            drawLine(120);
            printf("\n\n");
            printf("%s",AC_BLUE);
            printf("\t\t\t\t\t\t  [1].Registration.\n\n");
            printf("%s",AC_MAGENTA);
            printf("\t\t\t\t\t\t  [2].Login.\n\n");
            printf("%s",AC_RED);
            printf("\t\t\t\t\t\t  [0].Back.\n\n");
            printf("%s",AC_CYAN);
            printf("\t\t\t\t\t\t  Enter your Choice: ");
            scanf("%d",&cho3);


            if(cho3==1)
            {
                int cr;
                system("CLS");
                printf("%s",AC_RED);
                drawLine(120);
                printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Admin Registration----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
                drawLine(120);
                printf("\n\n");
                printf("%s",AC_BLUE);
                printf("\t\t\t\t\t  [1].Complete Your Registration.\n\n");
                printf("%s",AC_MAGENTA);
                printf("\t\t\t\t\t  [0].Back.\n\n");
                printf("%s",AC_CYAN);
                printf("\t\t\t\t\t  Enter your Choice: ");
                scanf("%d",&cr);


                if(cr==1)
                {
                    system("CLS");
                    printf("%s",AC_RED);
                    drawLine(120);
                    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Admin Registration----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
                    drawLine(120);
                    printf("\n\n");
                    registeA();
                }
                else
                {
                    system("CLS");
                    frontnext();
                }


            }
            else if(cho3==2)
            {
                system("CLS");
                printf("%s",AC_RED);
                drawLine(120);
                printf("  [ EVENTTRIX ]\t\t\t\t <<<<<-----Admin Login Page----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
                drawLine(120);
                printf("\n\n");
                loginA();
            }
            else if(cho2==0)
            {
                system("CLS");
                frontnext();
            }
            else
            {
                system("CLS");
                printf("\nWrong Choice.Try again.........");
                printf("\n\nAny key to continue............");
                getch();
                system("CLS");
                main();

            }
        }
        else if(cho3==3)
        {
            system("CLS");
            printf("\n\n");
            drawLine(120);
            printf("===\t\t\t\tThanks for using Eventrix Hope to see you again soon.\t\t\t\t     ===\n");
            drawLine(120);
            printf("\n\n");
            getch();
            system("CLS");
            front();
            break;

        }

        else
        {
            system("CLS");
            main();


        }
    }
    getch();
}
char loggedInUser[100];
struct login
{

    char fname[100];
    char lname[12];
    char username[100];
    char pass[100];
    char num[100];
};

int registe()
{
    struct login l;
    printf("%s",AC_BLUE);
    printf("\t\t\t\t\tEnter First name: ");
    scanf("%s", l.fname);
    printf("\n\t\t\t\t\tEnter Last name: ");
    scanf("%s", l.lname);
    printf("%s",AC_MAGENTA);
    printf("\n\t\t\t\t\tEnter User name: ");
    scanf("%s", l.username);

    int valid = 0;

    while (!valid)
    {

        printf("\n\t\t\t\t\tEnter a number (11 digits, starting with 01): ");
        scanf("%16s", l.num);

        int len = strlen(l.num);

        if (len != 11)
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\tInvalid: Number must be exactly 11 digits.\n");
            continue;
        }

        if (l.num[0] != '0' || l.num[1] != '1')
        {
            printf("\n\t\t\t\t\tInvalid: Number must start with 01.\n");
            continue;
        }


        if (!isdigit(l.num[2]) || l.num[2] <= '2')
        {
            printf("\n\t\t\t\t\t\tInvalid: 3rd digit must be greater than 2.\n");
            continue;
        }



        int all_digits = 1;
        for (int i = 0; i < 11; i++)
        {
            if (!isdigit(l.num[i]))
            {
                all_digits = 0;
                break;
            }
        }

        if (!all_digits)
        {
            printf("\n\t\t\t\t\tInvalid: Must contain only digits.\n");
            continue;
        }

        valid = 1;
    }

    printf("\n\t\t\t\t\tEnter password: ");
    getPassword(l.pass);



    FILE *log;

    log = fopen("login.txt", "a");
    if (log == NULL)
    {
        printf("File not found!\n");
        return;
    }


    fprintf(log, "%s\t\t%s\t\t%s\t\t%s\t\t%s\n", l.fname, l.lname, l.username, l.pass, l.num);

    fclose(log);
    printf("%s",AC_YELLOW);

    printf("\n\n\t\t\t\t\tRegistration successfully\n");

    printf("\n\t\t\t\t\tYour User name is your User id\n\n");

    printf("%s",AC_GREEN);
    printf("\t\t\t\t\tAny key to continue..........");
    getch();
    system("CLS");
    login();
}
int registeA()
{
    struct login l;
    printf("%s",AC_BLUE);
    printf("\t\t\t\t\tEnter First name: ");
    scanf("%s", l.fname);
    printf("\n\t\t\t\t\tEnter Last name: ");
    scanf("%s", l.lname);
    printf("%s",AC_MAGENTA);
    printf("\n\t\t\t\t\tEnter User name: ");
    scanf("%s", l.username);

    int valid = 0;

    while (!valid)
    {

        printf("\n\t\t\t\t\tEnter a number (11 digits, starting with 01): ");
        scanf("%16s", l.num);

        int len = strlen(l.num);

        if (len != 11)
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\tInvalid: Number must be exactly 11 digits.\n");
            continue;
        }

        if (l.num[0] != '0' || l.num[1] != '1')
        {
            printf("\n\t\t\t\t\tInvalid: Number must start with 01.\n");
            continue;
        }


        if (!isdigit(l.num[2]) || l.num[2] <= '2')
        {
            printf("\n\t\t\t\t\t\tInvalid: 3rd digit must be greater than 2.\n");
            continue;
        }



        int all_digits = 1;
        for (int i = 0; i < 11; i++)
        {
            if (!isdigit(l.num[i]))
            {
                all_digits = 0;
                break;
            }
        }

        if (!all_digits)
        {
            printf("\n\t\t\t\t\tInvalid: Must contain only digits.\n");
            continue;
        }

        valid = 1;
    }

    printf("\n\t\t\t\t\tEnter password: ");
    getPassword(l.pass);



    FILE *log;

    log = fopen("loginA.txt", "a");
    if (log == NULL)
    {
        printf("File not found!\n");
        return;
    }


    fprintf(log, "%s\t\t%s\t\t%s\t\t%s\t\t%s\n", l.fname, l.lname, l.username, l.pass, l.num);

    fclose(log);
    printf("%s",AC_YELLOW);

    printf("\n\n\t\t\t\t\tRegistration successfully\n");

    printf("\n\t\t\t\t\tYour User name is your User id\n\n");

    printf("%s",AC_GREEN);
    printf("\t\t\t\t\tAny key to continue..........");
    getch();
    system("CLS");
    loginA();
}
int login()
{


    int cr;
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t\t<<<<<-----User Login----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");
    printf("%s",AC_BLUE);
    printf("\t\t\t\t\t       [1].Complete Your Loging.\n\n");
    printf("%s",AC_MAGENTA);
    printf("\t\t\t\t\t       [0].Back.\n\n");
    printf("%s",AC_CYAN);
    printf("\t\t\t\t\t       Enter your Choice: ");
    scanf("%d",&cr);
    system("CLS");

    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t\t<<<<<-----User Login----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);


    if(cr==1)
    {

        while(1)
        {

            char username[100];
            char pass[100];
            FILE *log;
            log = fopen("login.txt", "r");
            struct login l;
            printf("%s",AC_BLUE);
            printf("\n\t\t\t\t\t\t  Enter user ID: ");
            scanf("%s", username);
            printf("\n\t\t\t\t\t\t  Enter Password: ");
            getPassword(pass);

            int found = 0;
            if (log == NULL)
            {
                printf("File not found!\n");
                return;
            }

            while (fscanf(log,"%s\t\t%s\t\t%s\t\t%s\t\t%s", l.fname, l.lname, l.username, l.pass, l.num) != EOF)
            {
                if (strcmp(username, l.username) == 0 && strcmp(pass, l.pass) == 0)
                {
                    printf("%s",AC_MAGENTA);
                    printf("\n\n\t\t\t\t\t\t  Successfully login\n");
                    printf("%s",AC_GREEN);
                    printf("\n\t\t\t\t\t\t  Any key to continue..........");
                    getch();
                    system("CLS");
                    coustomer_dashboard();
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("%s",AC_RED);
                printf("\n\n\t\t\t\t\t\t  Incorrect username or password try again............\n\n");
            }
            fclose(log);

        }
    }

    else
    {
        system("CLS");
        frontnext();
    }


}
int loginA()
{
    int cr;
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t\t<<<<<-----Admin Login----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");
    printf("%s",AC_BLUE);
    printf("\t\t\t\t\t       [1].Complete Your Loging.\n\n");
    printf("%s",AC_MAGENTA);
    printf("\t\t\t\t\t       [0].Back.\n\n");
    printf("%s",AC_CYAN);
    printf("\t\t\t\t\t       Enter your Choice: ");
    scanf("%d",&cr);
    system("CLS");

    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t\t<<<<<-----Admin Login----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);


    if(cr==1)
    {

        while(1)
        {

            char username[100];
            char pass[100];
            FILE *log;
            log = fopen("loginA.txt", "r");
            struct login l;
            printf("%s",AC_BLUE);
            printf("\n\t\t\t\t\t\t  Enter user ID: ");
            scanf("%s", username);
            printf("\n\t\t\t\t\t\t  Enter Password: ");
            getPassword(pass);

            int found = 0;
            if (log == NULL)
            {
                printf("File not found!\n");
                return;
            }

            while (fscanf(log,"%s\t\t%s\t\t%s\t\t%s\t\t%s", l.fname, l.lname, l.username, l.pass, l.num) != EOF)
            {
                if (strcmp(username, l.username) == 0 && strcmp(pass, l.pass) == 0)
                {
                    printf("%s",AC_MAGENTA);
                    printf("\n\n\t\t\t\t\t\t  Successfully login\n");
                    printf("%s",AC_GREEN);
                    printf("\n\t\t\t\t\t\t  Any key to continue..........");
                    getch();
                    system("CLS");
                    admin_dashboard();
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("%s",AC_RED);
                printf("\n\n\t\t\t\t\t\t  Incorrect username or password try again............\n\n");
            }
            fclose(log);

        }
    }

    else
    {
        system("CLS");
        frontnext();
    }
}

void Delete_Event()
{
    system("CLS");


    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Delete Event----->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1].Delete Event\n\n");
    printf("\t\t\t\t\t      [0].Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");


    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t  <<<<<-----Booking Event----->>>>>  \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");


    char pname[100],dname[100],uname[100],vname[100],ename[100],number[100],approve[100];
    FILE *M = fopen("booking.txt", "r");

    if (M == NULL)
    {
        printf("%s",AC_RED);
        printf("File not found!\n");
        printf("%s",AC_BLUE);
        return;
    }

    char evname[100], uvname[100], vnumber[100], vvname[100], pename[100], day[100], date[100], startTime[100], endTime[100];

    printf("Event Type\tName\t\tNumber\t\tVenue\tPlace\tDate\t\tTime\n");
    drawLine(120);
    while (fscanf(M, "%s %s %s %s %s %s %s %s-%s\n", evname, uvname, vnumber, vvname, pename, day, date, startTime, endTime) != EOF)
    {
        printf("%s\t%s\t\t%s\t%s\t%s\t%s\t%s-%s\n", evname, uvname, vnumber, vvname, pename, date, startTime, endTime);
    }

    fclose(M);





    printf("\n\n\n");

    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Delete Event----->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");



    if(choice==1)
    {
        char ename[100], uname[100];
        char tempE[100], tempU[100], number[100], vname[100], pname[100], day[100], date[100], startTime[10], endTime[10];
        int found = 0;

        FILE *fp, *temp;
        fp = fopen("booking.txt", "r");
        temp = fopen("temp.txt", "w");

        if (fp == NULL || temp == NULL)
        {
            printf("\n\t\t\t\t\t      Error opening file!\n");
            return;
        }
        printf("%s",AC_BLUE);
        printf("\n\n\t\t\t\t\t      Enter Event Name to delete: ");
        scanf("%s", ename);
        printf("\n\n\t\t\t\t\t      Enter User Name to delete: ");
        scanf("%s", uname);

        while (fscanf(fp, "%s %s %s %s %s %s %s %s-%s",
                      tempE, tempU, number, vname, pname, day, date, startTime, endTime) != EOF)
        {
            if (strcmp(tempE, ename) == 0 && strcmp(tempU, uname) == 0)
            {
                found = 1;
            }
            else
            {
                fprintf(temp, "%s %s %s %s %s %s %s %s-%s\n",
                        tempE, tempU, number, vname, pname, day, date, startTime, endTime);
            }
        }

        fclose(fp);
        fclose(temp);

        remove("booking.txt");
        rename("temp.txt", "booking.txt");

        if (found)
            printf("\n\n\t\t\t\t\t      Event deleted successfully!\n");
        else
            printf("\n\n\t\t\t\t\t      Event not found!\n");


        printf("\n\n\t\t\t\t\t      Press any key to continue...");
        getch();
        system("CLS");
        admin_dashboard();

    }

    else
    {
        system("CLS");
        admin_dashboard();

    }







}



int coustomer_dashboard()
{
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Customer Dashboard----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s",AC_BLUE);
    printf("\n\n");
    printf("  \t\t      [1].Event Selection");
    printf("\t\t      [2].Service Request\n\n");
    printf("  \t\t      [3].Equipment Rental");
    printf("%s",AC_MAGENTA);
    printf("\t\t      [4].View Offer for Discount\n\n");
    printf("  \t\t      [5].View Rules and Condition");
    printf("\t      [6].All Event Approval Message\n\n");
    printf("  \t\t      [7].Scarce Approval");
    printf("%s",AC_CYAN);
    printf("\t\t      [8].Submit Feedback\n\n");
    printf("  \t\t      [9].Contact Us");
    printf("\t\t\t      [10].Password Change\n\n");
    printf("%s",AC_BLUE);
    printf("  \t\t      [11].Edit Event Booking");
    printf("\t\t      [12].Cancel Event\n\n");
    printf("  \t\t      [13].Show Upcoming Events");
    printf("%s",AC_GREEN);
    printf("\t\t      [0].Home Page\n\n");
    printf("\n");
    int c;
    printf("%s",AC_CYAN);
    printf("\t\t\t\t\t      Enter your Choice: ");
    scanf("%d",&c);

    if(c==1)
    {
        system("CLS");
        Event_Selection();
    }
    else if(c==2)
    {
        Service_Request();
    }
    else if(c==3)
    {
        Equipment_Rental();
    }
    else if(c==4)
    {
        viewa();
    }
    else if(c==5)
    {

        system("CLS");
        viewr();
    }
    else if(c==6)
    {
        system("CLS");
        drawLine(120);
        printf("\t\t\t\t<<<<<-----Password Change----->>>>>\n");
        drawLine(120);
        printf("\n\n\n");
        View_Event_Approval();
        printf("\n\nAny key to continue..........");
        getch();
        system("CLS");
        coustomer_dashboard();

    }
    else if(c==7)
    {
        Scarce_Approval();

    }
    else if(c==8)
    {
        Submit_Feedback();

    }
    else if(c==9)
    {
        Contact_Us();

    }
    else if(c==10)
    {
        system("CLS");
        drawLine(120);
        printf("\t\t\t\t<<<<<-----Event Approval Message----->>>>>\n");
        drawLine(120);
        printf("\n\n\n");

        change_password();
        printf("\n\nAny key to continue..........");
        getch();
        system("CLS");
        coustomer_dashboard();

    }
    else if(c==11)
    {
        User_update_Event();
    }
    else if(c==12)
    {
        Cancel_Event();
    }
    else if(c==13)
    {
        Show_Upcoming_Events(); // pass logged-in user
    }
    else
    {
        system("CLS");
        main();
    }

}

int admin_dashboard()
{
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t  <<<<<-----Admin Dashboard----->>>>>  \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s",AC_BLUE);
    printf("\n");
    printf("\n\t\t\t\t\t      [1].View All Event\n");
    printf("\n\t\t\t\t\t      [2].Find Event.\n");
    printf("\n\t\t\t\t\t      [3].Event Approval\n");
    printf("\n\t\t\t\t\t      [4].View Service Request & Approval\n");
    printf("%s",AC_MAGENTA);
    printf("\n\t\t\t\t\t      [5].View Equipment Rental Request & Approval\n");
    printf("\n\t\t\t\t\t      [6].View payment\n");
    printf("\n\t\t\t\t\t      [7].Delete Event\n");
    printf("\n\t\t\t\t\t      [8].Manage Discount and Offer\n");
    printf("%s",AC_CYAN);
    printf("\n\t\t\t\t\t      [9].Set Rules and Condition\n");
    printf("\n\t\t\t\t\t      [10].View Feedback History\n");
    printf("\n\t\t\t\t\t      [11].Update Event Items\n");
    printf("%s",AC_GREEN);
    printf("\n\t\t\t\t\t      [0].Home Page\n");
    int ch;
    printf("\n\t\t\t\t\t      Enter your Choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        adminview();
    }
    else if(ch==2)
    {
        system("CLS");
        printf("%s",AC_RED);
        drawLine(120);
        printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Find Event---->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
        drawLine(120);
        printf("%s",AC_BLUE);
        Find_Event();
        printf("%s",AC_GREEN);
        printf("\n\nAny key to continue..........");
        getch();
        system("CLS");
        admin_dashboard();
    }
    else if(ch==3)
    {

        Event_Approval();
        printf("%s",AC_GREEN);
        printf("\n\n\t\t\t\t\t   Any key to continue..........");
        getch();
        system("CLS");
        admin_dashboard();
    }
    else if(ch==4)
    {
        View_Service_Request();
    }
    else if(ch==5)
    {
        View_Equipment_Rental_Request();
    }
    else if(ch==6)
    {
        view_payment();
    }
    else if(ch==7)
    {

        Delete_Event();

    }
    else if(ch==8)
    {
        Manage_Discount_and_Offer();
    }
    else if(ch==9)
    {
        Rules_and_Condition();
    }
    else if(ch==10)
    {
        View_Feedback_History();
    }
    else if(ch==11)
    {
        system("CLS");
        printf("%s",AC_RED);
        drawLine(120);
        printf("  [ EVENTTRIX ]\t\t\t   <<<<<-----Update Event Items----->>>>>   \t\t\t[ EVENTTRIX ]\n");
        drawLine(120);
        printf("\n");
        printf("%s",AC_GREEN);
        printf("\n\t\t\t\t\t      [1].Update Venue.\n\t\t\t\t\t      [0].Exit.\n\n");



        while(1)
        {
            int cho;
            printf("\n\t\t\t\t\t      Enter Your Choice: ");
            scanf("%d",&cho);
            if(cho==1)
            {
                add_item();
                break;
            }
            else if(cho==0)
            {
                system("CLS");
                admin_dashboard();
                break;
            }
            else
            {
                printf("\n\t\t\t\t\t      Wrong choice\n");
            }
            break;
        }

    }

    else
    {
        system("CLS");
        main();
    }

}

void Find_Event()

{

    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Find Event----->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1] Find Event\n\n");
    printf("\t\t\t\t\t      [0] Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");


    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Find Event----->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");



    if(choice==1)
    {


        char searchName[100],number[100];
        getchar();
        printf("\n\t\t\t\t      Enter user name to Find Event: ");
        gets(searchName);
        printf("\n\t\t\t\t      Enter user Number to Find Event: ");
        gets(number);

        FILE *M = fopen("booking.txt", "r");

        if (M == NULL)
        {
            printf("\n\t\t\t\t      Error opening files.\n");
            return 1;
        }

        int found = 0;

        char evname[100], uvname[100], vnumber[100], vvname[100], pename[100], day[100], date[100], startTime[100], endTime[100];
        printf("\n\n");
        printf("Event Type\tName\t\tNumber\t\tVenue\tPlace\tDate\t\tTime\n");
        drawLine(120);

        while (fscanf(M, "%s %s %s %s %s %s %s %s-%s\n", evname, uvname, vnumber, vvname, pename, day, date, startTime, endTime) != EOF)
        {
            if (strcmp(searchName, uvname) == 0 &&  strcmp(number, vnumber) == 0)
            {
                printf("%s\t%s\t\t%s\t%s\t%s\t%s\t%s-%s\n", evname, uvname, vnumber, vvname, pename, date, startTime, endTime);
                found=1;
            }
        }

        fclose(M);

        if(found==0)
        {
            printf("\n\nSearch Event Not Found.");
        }


        printf("\n\n\n");
        int found1 = 0;
        FILE *sr = fopen("service_request.txt", "r");
        if (sr == NULL)
        {
            printf("File not found!\n");
            return;
        }

        char name[100], a[100], b[100], c[100], d[100],fnumber[100];
        int sum,due,return_tk;

        printf("Name\tNumber\t\tDecoration\tLighting\tSound\tPhoto/Video\tPayment\tDue\tReturn_tk\n");
        drawLine(120);

        while (fscanf(sr, "%s %s %s %s %s %s %d %d %d\n",name,fnumber, a, b, c, d, &sum, &due, &return_tk) != EOF)
        {
            if (strcmp(searchName, name) == 0 &&  strcmp(number, fnumber) == 0)

            {
                printf("%s\t%s\t%s\t\t%s\t\t%s\t\t%s\t%d\t%d\t%d\n",name,fnumber, a, b, c, d, sum, due, return_tk);
                found1=1;
            }

        }

        fclose(sr);

        if(found1==0)
        {
            printf("\n\n\t\t\t\t      Search Event Not Found.");
        }


        printf("\n\n\n");

        int found2 = 0;

        FILE *file;
        file = fopen("equipment_rental.txt", "r");

        if (file == NULL)
        {
            printf("\n\t\t\t\t      Error opening file!\n");
            return;
        }


        printf("Name\t\tNumber\t\tCount\tPay\treturn_tk\tDue\tEquipment\n");
        drawLine(120);
        printf("\n");


        char namef[100],equipment[100],numberef[100];
        int quantity, ab, return_tkf, duef;


        while (fscanf(file, "%s %s %s %d %d %d %d\n", namef, numberef,equipment, &quantity, &ab, &return_tkf, &duef) != EOF)
        {
            if (strcmp(searchName, namef) == 0 &&  strcmp(number, numberef) == 0)
            {
                printf("%s\t\t%s\t%d\t%d\t%d\t\t%d\t%s\n", namef, numberef,  quantity, ab, return_tkf, duef,equipment);
                found2=1;
            }

        }

        fclose(file);


        if(found2==0)
        {
            printf("\n\n\t\t\t\t      Search Event Not Found.");
        }


        printf("\n\n\n");

        int found3 = 0;
        char namel[100],number2[100],dayf[100];

        long int g,n,du,amu;

        FILE *p2 = fopen("paybooking.txt", "r");

        if (p2 == NULL)
        {
            printf("\n\t\t\t\t      File not found!\n");
            return;
        }

        while (fscanf(p2,"%s %s %ld %ld %ld %ld %s\n", namel, number2, &g, &amu, &n, &du, dayf) != EOF)
        {
            if (strcmp(searchName, namel) == 0 &&  strcmp(number, number2) == 0)

            {
                printf("\n\t\t\t\t\t  ");
                drawLine(30);
                printf("\n\t\t\t\t\t  Payment Details %s\n\n",namel);
                printf("\t\t\t\t\t  Name\t :%s\n\t\t\t\t\t  Number :%s\n\t\t\t\t\t  Guest\t :%ld\n\t\t\t\t\t  Payment:%ld\n\t\t\t\t\t  Due\t :%ld\n\t\t\t\t\t  Return :%ld\n\t\t\t\t\t  Date\t :%s", namel, number2, g, amu, n, du, dayf);
                printf("\n");
                printf("\n\t\t\t\t\t  ");
                drawLine(30);
                printf("\n\n");
                found3=1;
            }

        }

        fclose(p2);



        if(found3==0)
        {
            printf("\n\n\t\t\t\t      Search Event Not Found.");
        }

        printf("%s",AC_GREEN);
        printf("\n\n\t\t\t\t      Any key to continue..........");
        getch();
        system("CLS");
        admin_dashboard();

        return 0;

    }





    else
    {
        system("CLS");
        admin_dashboard();

    }

}





void Scarce_Approval()
{

    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t <<<<<-----Scarce Approval----->>>>> \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1] Scarce Approval\n\n");
    printf("\t\t\t\t\t      [0] Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");


    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t <<<<<-----Scarce Approval----->>>>> \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");



    if(choice==1)
    {


        char searchName[100],number[100];
        getchar();
        printf("\n\t\t\t\t      Enter user name to Scarce Approval: ");
        gets(searchName);
        printf("\n\t\t\t\t      Enter user Number to Scarce Approval: ");
        gets(number);

        FILE *M = fopen("approveEventbooking.txt", "r");

        if (M == NULL)
        {
            printf("\n\t\t\t\t      Error opening files.\n");
            return 1;
        }

        int found = 0;

        char evname[100], uvname[100], vnumber[100], vvname[100], pename[100], app[100], date[100], startTime[100], endTime[100];
        printf("\n\n");
        printf("Event Type\tName\t\tNumber\t\tVenue\tDate\t\tstatus\tPlace\n");
        drawLine(120);

        while (fscanf(M, "%s\t%s\t%s\t%s\t%s\t%s\t%s\n", evname, uvname, vnumber, vvname, pename, app, date) != EOF)
        {
            if (strcmp(searchName, uvname) == 0 &&  strcmp(number, vnumber) == 0)
            {
                printf("%s\t%s\t\t%s\t%s\t%s\t%s\t%s\n", evname, uvname, vnumber, vvname, pename, app, date);
                found=1;
            }
        }

        fclose(M);

        if(found==0)
        {
            printf("\n\nSearch Event Not Found.");
        }

        printf("\n\n\n");
        int found1 = 0;
        FILE *sr = fopen("approveServiceRequest.txt", "r");
        if (sr == NULL)
        {
            printf("File not found!\n");
            return;
        }

        char usname[100],number2[100],approvesr[100],light[100],decora[100],sound[100],photo[100];


        printf("Name\tNumber\t\tDecoration\tLighting\tSound\tPhoto/Video\tStatus\n");
        drawLine(120);

        while (fscanf(sr,"%s %s %s %s %s %s %s\n", usname, number2, decora, light, sound, photo, approvesr) != EOF)
        {
            if (strcmp(searchName, usname) == 0 &&  strcmp(number, number2) == 0)

            {
                printf("%s\t%s\t%s\t\t%s\t\t%s\t\t%s\t%s\n", usname, number2, decora, light, sound, photo, approvesr);
                found1=1;
            }

        }

        fclose(sr);

        if(found1==0)
        {
            printf("\n\n\t\t\t\t      Search Event Not Found.");
        }

        printf("\n\n\n");

        int found2 = 0;

        FILE *file;
        file = fopen("approveEquipment.txt", "r");

        if (file == NULL)
        {
            printf("\n\t\t\t\t      Error opening file!\n");
            return;
        }


        printf("Name\t\tNumber\t\tCount\tstatus\t\tEquipment\n");
        drawLine(120);
        printf("\n");


        char namef[100],equipment[100],numberef[100],ap[100];
        int quantity;


        while (fscanf(file, "%s %s %d %s %s\n", namef, numberef, &quantity, ap, equipment) != EOF)
        {
            if (strcmp(searchName, namef) == 0 &&  strcmp(number, numberef) == 0)
            {
                printf( "%s\t\t%s\t%d\t%s\t\t%s\n", namef, numberef, quantity, ap, equipment);
                found2=1;
            }

        }

        fclose(file);


        if(found2==0)
        {
            printf("\n\n\t\t\t\t      Search Event Not Found.");
        }


        printf("\n\n");

        printf("%s",AC_GREEN);
        printf("\n\n\t\t\t\t      Any key to continue..........");
        getch();
        system("CLS");
        coustomer_dashboard();

        return 0;

    }





    else
    {
        system("CLS");
        coustomer_dashboard();

    }






}













void Event_Approval()
{


    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t  <<<<<-----Event Approval----->>>>>  \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1].EventApproval\n\n");
    printf("\t\t\t\t\t      [0].Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");


    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t  <<<<<-----Event Approval----->>>>>  \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");


    if(choice==1)
    {
        char pname[100],dname[100],uname[100],vname[100],ename[100],number[100],approve[100];
        FILE *M = fopen("booking.txt", "r");

        if (M == NULL)
        {
            printf("%s",AC_RED);
            printf("File not found!\n");
            printf("%s",AC_BLUE);
            return;
        }

        char evname[100], uvname[100], vnumber[100], vvname[100], pename[100], day[100], date[100], startTime[100], endTime[100];

        printf("Event Type\tName\t\tNumber\t\tVenue\tPlace\tDate\t\tTime\n");
        drawLine(120);
        while (fscanf(M, "%s %s %s %s %s %s %s %s-%s\n", evname, uvname, vnumber, vvname, pename, day, date, startTime, endTime) != EOF)
        {
            printf("%s\t%s\t\t%s\t%s\t%s\t%s\t%s-%s\n", evname, uvname, vnumber, vvname, pename, date, startTime, endTime);
        }

        fclose(M);

        printf("\n\n\n");

        printf("%s",AC_MAGENTA);
        drawLine(120);
        printf("\t\t\t\t\t<<<<<-----Event Approval----->>>>>\n");
        drawLine(120);
        printf("\n\n");
        getchar();
        printf("\n\t\t\t\t\t   Enter Event Type: ");
        gets(ename);
        printf("\n\t\t\t\t\t   Enter User Name: ");
        gets(uname);
        printf("\n\t\t\t\t\t   Enter User Number: ");
        gets(number);
        printf("\n\t\t\t\t\t   Enter Place Name: ");
        gets(pname);
        printf("\n\t\t\t\t\t   Enter Venue Name: ");
        gets(vname);
        printf("\n\t\t\t\t\t   Enter Event Date: ");
        gets(dname);
        printf("\n\t\t\t\t\t   Enter Event Status: ");
        gets(approve);

        printf("\n\n");

        FILE *p;

        p = fopen("approveEventbooking.txt", "a");
        if (p == NULL)
        {
            printf("\n\t\t\t\t\t   File not found!\n");
            return;
        }

        fprintf(p,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n", ename, uname, number, vname, dname, approve, pname);

        fclose(p);

    }

    else
    {
        system("CLS");
        admin_dashboard();

    }




}


void View_Event_Approval()
{

    char pname[100],dname[100],uname[100],vname[100],ename[100],number[100],approve[100];

    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Payment List----->>>>>\n");
    drawLine(120);
    printf("\n\n");

    FILE *p = fopen("approveEventbooking.txt", "r");

    if (p == NULL)
    {
        printf("File not found!\n");
        return;
    }




    while (fscanf(p,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n", ename, uname, number, vname, dname, approve, pname) != EOF)
    {
        printf("\t\t\t\t\t");
        drawLine(30);
        printf("\t\t\t\t\t\tEvent Message\n");
        printf("\t\t\t\t\t\t-------------\n\n");
        printf("\t\t\t\t\tEvent\t:%s\n\t\t\t\t\tName\t:%s\n\t\t\t\t\tNumber  :%s\n\t\t\t\t\tVenue\t:%s\n\t\t\t\t\tDate\t:%s\n\t\t\t\t\tStatus\t:%s\n\t\t\t\t\tPlace\t:%s\n", ename, uname, number, vname, dname, approve, pname);
        printf("\t\t\t\t\t");
        drawLine(30);
        printf("\n\n");
    }

    fclose(p);


    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();

}

void Event_Selection()
{
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Event Selection----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n\n\n");
    printf("%s",AC_CYAN);
    printf("\t\t\t\t    <<<<<-----[Available Event Type]----->>>>>\n");
    for(int i=1; i<=120; i++)
    {
        printf("-");
    }
    printf("\n\n");
    printf("\t\t\t\t\t   [A].Marriage Event Booking.\n\n");
    printf("\t\t\t\t\t   [B].Birthday Event Booking.\n\n");
    printf("\t\t\t\t\t   [C].Institution Event Booking.\n\n");
    printf("\t\t\t\t\t   [D].Cultural Event Booking.\n\n");
    printf("\t\t\t\t\t   [E].Seminar Event Booking.\n\n\n");
    printf("\n\n\t\t\t\t\t   Any key to continue..........");
    getch();
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t    <<<<<------Decision----->>>>>    \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n\n");
    int cho;
    printf("%s",AC_MAGENTA);
    printf("\t\t\t\t\t   [1].Event Booking.\n\n\t\t\t\t\t   [2].Back To Customer Dashboard.");
    printf("%s",AC_CYAN);
    printf("\n\n\t\t\t\t\t   Enter your Choice: ");
    scanf("%d",&cho);

    if(cho==1)
    {
        system("CLS");
        Booking();
    }
    else
    {
        system("CLS");
        coustomer_dashboard();
    }

}

int isLeapYear(int year)
{
    return ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
}

int isValidDate(int d, int m, int y)
{
    if (y < 1900 || m < 1 || m > 12 || d < 1) return 0;

    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeapYear(y)) daysInMonth[2] = 29;

    if (d > daysInMonth[m]) return 0;
    return 1;
}

int isFutureDate(int d, int m, int y)
{
    time_t t = time(NULL);
    struct tm today = *localtime(&t);

    int cd = today.tm_mday;
    int cm = today.tm_mon + 1;
    int cy = today.tm_year + 1900;

    if (y > cy) return 1;
    if (y == cy && m > cm) return 1;
    if (y == cy && m == cm && d >= cd) return 1;

    return 0;
}


void Booking()
{
    char pname[100],dname[100],uname[100],vname[100],ename[100],number[100];
    int g,b,cho;
    printf("%s",AC_RED);
    drawLine(120);

    printf("  [ EVENTTRIX ]\t\t\t\t    <<<<<-----Event Booking----->>>>>    \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n\n");
    getchar();

    printf("%s",AC_BLUE);




    while (1)
    {
        printf("\t\t\t\t\t  Enter Event Type: ");
        gets(ename);

        FILE *log3 = fopen("eventtype.txt", "r");
        if (!log3)
        {
            printf("%s", AC_RED);
            printf("\n\t\t\t\t\t  File not found!\n");
            exit(1);
        }

        int found = 0;
        char evname[100];

        while (fscanf(log3, "%s", evname) != EOF)
        {
            if (strcmp(ename, evname) == 0)
            {
                found = 1;
                break;
            }
        }
        fclose(log3);

        if (!found)
        {
            printf("%s", AC_RED);
            printf("\n\n\t\t\t\t\t  Wrong event Try again....\n\n");
            printf("%s", AC_BLUE);
        }
        else
        {
            break;
        }
    }



    printf("\n\t\t\t\t\t  Enter User Name:  ");
    scanf("%s",uname );




    int valid = 0;

    while (!valid)
    {

        printf("\n\t\t\t\t\t  Enter User number[01XX..]:  ");
        scanf("%16s", number);

        int len = strlen(number);

        if (len != 11)
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Invalid Number...\n");
            printf("%s",AC_BLUE);
            continue;
        }

        if (number[0] != '0' || number[1] != '1')
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Invalid Number...\n");
            printf("%s",AC_BLUE);
            continue;
        }


        if (!isdigit(number[2]) || number[2] <= '2')
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Invalid Number...\n");
            printf("%s",AC_BLUE);
            continue;
        }



        int all_digits = 1;
        for (int i = 0; i < 11; i++)
        {
            if (!isdigit(number[i]))
            {
                all_digits = 0;
                break;
            }
        }

        if (!all_digits)
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Invalid Number...\n");
            printf("%s",AC_BLUE);
            continue;
        }

        valid = 1;
    }

    printf("%s",AC_MAGENTA);
    // -------------------- Date Input --------------------
    int day, month, year;
    while (1)
    {
        printf("\n\t\t\t\t\t  Enter Booking Date (dd mm yyyy): ");
        scanf("%d %d %d", &day, &month, &year);
        getchar();

        if (!isValidDate(day, month, year))
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Invalid date format! Try again.\n");
            printf("%s",AC_BLUE);
            continue;
        }
        if (!isFutureDate(day, month, year))
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Invalid! Past date not allowed.\n");
            printf("%s",AC_BLUE);
            continue;
        }
        break;
    }
    // -----------------------------------------------------

    struct tm bookingDate = {0}; // Initialize to 0
    bookingDate.tm_mday = day;
    bookingDate.tm_mon = month - 1; // Month 0-11
    bookingDate.tm_year = year - 1900; // Years since 1900

    // Normalize and calculate weekday
    mktime(&bookingDate);

    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("\n\t\t\t\t\t  Day of the week: %s\n", days[bookingDate.tm_wday]);


    char startTime[10], endTime[10];

    printf("%s", AC_BLUE);
    printf("\n\t\t\t\t\t  Enter Event Starting Time (HH:MM): ");
    scanf("%9s", startTime);

    printf("\n\t\t\t\t\t  Enter Event Ending Time (HH:MM): ");
    scanf("%9s", endTime);





    printf("\n");
    while (1)
    {
        printf("%s",AC_BLUE);
        printf("\n\t\t\t\t\t  <<<Place Name>>>\n");
        printf("\t\t\t\t\t  ");
        drawLine(20);
        printf("%s",AC_GREEN);
        printf("\n\t\t\t\t\t    [1].Dhaka");
        printf("\n\t\t\t\t\t    [2].Chattogram");
        printf("\n\t\t\t\t\t    [3].Rajshahi");
        printf("\n\t\t\t\t\t    [4].Gazipur");
        printf("\n\t\t\t\t\t    [5].Tangail");
        printf("%s",AC_CYAN);
        printf("\n\n\t\t\t\t\t  Enter Your Choice: ");
        scanf("%d", &cho);
        getchar();

        if (cho ==1 )
        {
            while (1)
            {
                printf("%s",AC_BLUE);
                printf("\n\n\t\t\t\t\t  Enter Place Name: ");
                gets(pname);

                FILE *log2 = fopen("dhaka.txt", "r");
                if (!log2)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  File not found!\n");
                    exit(1);
                }

                int found = 0;
                char cname[100];

                while (fscanf(log2, "%s", cname) != EOF)
                {
                    if (strcmp(pname, cname) == 0)
                    {
                        printf("%s",AC_CYAN);
                        printf("\n\n\t\t\t\t\t  <<<Venue Name>>>\n");
                        printf("\t\t\t\t\t  ");
                        drawLine(20);
                        printf("\n\t\t\t\t\t  [1].Dhaka Convention Center(DCC)\n\t\t\t\t\t  [2].International Convention City Bashundhara (ICCB)");
                        found = 1;
                        break;
                    }
                }
                fclose(log2);

                if (!found)
                {
                    printf("%s",AC_RED);
                    printf("\n\n\t\t\t\t\t  Wrong Format Try again....\n");
                }
                else
                {
                    break;
                }
            }
            break;
        }

        else if (cho ==2 )
        {
            while (1)
            {
                printf("%s",AC_BLUE);
                printf("\n\t\t\t\t\t  Enter Place Name: ");
                gets(pname);

                FILE *log2 = fopen("Chattogram.txt", "r");
                if (!log2)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  File not found!\n");
                    exit(1);
                }

                int found = 0;
                char cname[100];

                while (fscanf(log2, "%s", cname) != EOF)
                {
                    if (strcmp(pname, cname) == 0)
                    {
                        printf("%s",AC_MAGENTA);
                        printf("\n\n\t\t\t\t\t  <<<Venue Name>>>\n");
                        printf("\t\t\t\t\t  ");
                        drawLine(20);
                        printf("%s",AC_GREEN);

                        printf("\n\t\t\t\t\t  [1].GEC Covention Center(GCC)\n\t\t\t\t\t  [2].Radisson Blu Chattogram Bay View(RBCBY)");
                        found = 1;
                        break;
                    }
                }
                fclose(log2);

                if (!found)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Wrong Format Try again....\n");
                }
                else
                {
                    break;
                }
            }
            break;
        }

        else if (cho ==3 )
        {
            while (1)
            {
                printf("%s",AC_BLUE);
                printf("\n\t\t\t\t\t  Enter Place Name: ");
                gets(pname);

                FILE *log2 = fopen("Rajshahi.txt", "r");
                if (!log2)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  File not found!\n");
                    exit(1);
                }

                int found = 0;
                char cname[100];

                while (fscanf(log2, "%s", cname) != EOF)
                {
                    if (strcmp(pname, cname) == 0)
                    {
                        printf("%s",AC_BLUE);
                        printf("\n\t\t\t\t\t  <<<Venue Name>>>\n");
                        printf("\t\t\t\t\t  ");
                        drawLine(20);
                        printf("\n\t\t\t\t\t  [1].Padma Convention Center(PCC)\n\t\t\t\t\t  [2].Hotel Nice International Banquet Hall(HNIBH)");
                        found = 1;
                        break;
                    }
                }
                fclose(log2);

                if (!found)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Wrong Format Try again....\n");
                }
                else
                {
                    break;
                }
            }
            break;
        }

        else if (cho ==4 )
        {
            while (1)
            {
                printf("%s",AC_BLUE);
                printf("\n\t\t\t\t\t  Enter Place Name: ");
                gets(pname);

                FILE *log2 = fopen("Gazipur.txt", "r");
                if (!log2)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  File not found!\n");
                    exit(1);
                }

                int found = 0;
                char cname[100];

                while (fscanf(log2, "%s", cname) != EOF)
                {
                    if (strcmp(pname, cname) == 0)
                    {
                        printf("%s",AC_MAGENTA);
                        printf("\n\t\t\t\t\t  <<<Venue Name>>>\n");
                        printf("\t\t\t\t\t  ");
                        drawLine(20);
                        printf("%s",AC_GREEN);
                        printf("\n\t\t\t\t\t  [1].Dream Square Resort(DSR)\n\t\t\t\t\t  [2].Padma Resort(PR)");
                        found = 1;
                        break;
                    }
                }
                fclose(log2);

                if (!found)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Wrong Format Try again....\n");
                }
                else
                {
                    break;
                }
            }
            break;
        }

        else if (cho ==5 )
        {
            while (1)
            {
                printf("%s",AC_BLUE);
                printf("\n\t\t\t\t\t  Enter Place Name: ");
                gets(pname);

                FILE *log2 = fopen("Tangail.txt", "r");
                if (!log2)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  File not found!\n");
                    exit(1);
                }

                int found = 0;
                char cname[100];

                while (fscanf(log2, "%s", cname) != EOF)
                {
                    if (strcmp(pname, cname) == 0)
                    {
                        printf("%s",AC_MAGENTA);
                        printf("\n\t\t\t\t\t  <<<Venue Name>>>\n");
                        printf("\t\t\t\t\t  ");

                        drawLine(20);
                        printf("%s",AC_GREEN);
                        printf("\n\t\t\t\t\t  [1].Tangail Town Convention Hall(TTCH)\n\t\t\t\t\t  [2].Elenga Resort(ER)");
                        found = 1;
                        break;
                    }
                }
                fclose(log2);

                if (!found)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Wrong Format Try again....\n");
                }
                else
                {
                    break;
                }
            }
            break;
        }

        else
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Wrong Choice, try again...\n\n");
        }
    }

    while(1)
    {
        printf("%s",AC_BLUE);
        printf("\n\n\t\t\t\t\t  Enter Venue Name[Like (DCC)]: ");
        gets(vname);
        FILE *log1;
        log1 = fopen("venu.txt", "r");

        int found = 0;
        char ckname[100];

        while (fscanf(log1,"%s", ckname) != EOF)
        {
            if (strcmp(vname, ckname) == 0)
            {
                printf("%s",AC_GREEN);
                printf("\n\t\t\t\t\t  Successfully select venue\n");
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("%s",AC_RED);
            printf("\n\t\t\t\t\t  Wrong Format Try again....\n");
        }
        else
        {
            break;
        }
        fclose(log1);
    }

    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t    <<<<<-----Payment Process----->>>>>    \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n\n");

    printf("%s",AC_BLUE);
    printf("\n\n\t\t\t\t\t\t  Booking successfully\n\n");
    printf("\n\n\t\t\t\t\t\t  Complete Your Payment\n\n");
    printf("%s",AC_GREEN);
    printf("\n\n\t\t\t\t\t\t  Any key to continue..........");
    getch();
    system("CLS");

    FILE *M;
    M = fopen("booking.txt", "a");
    if (M == NULL)
    {
        printf("%s",AC_RED);
        printf("\n\t\t\t\t\t  File not found!\n");
        return;
    }

    fprintf(M,"%s %s %s %s %s %s %02d/%02d/%04d %s-%s\n",ename, uname, number, vname, pname, days[bookingDate.tm_wday],day, month, year, startTime, endTime);
    fclose(M);

    paymentp(days[bookingDate.tm_wday],day, month, year);
}



void paymentp(char day[],int days,int month,int year)
{
    char weekf[100]= {"Friday"};
    char weeks[100]= {"Saturday"};
    long int g,b,a,c,d,e,f,i,h,amount,cho,return_tk,due;
    char dname[100];
    int found=0;

    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t    <<<<<-----Payment Process----->>>>>    \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s",AC_MAGENTA);
    if (strcmp(day, weekf) == 0 || strcmp(day, weeks) == 0)
    {
        while (1)
        {
            printf("\n\t\t\t\t\t  Enter Number of Guest [MAX-100]: ");
            scanf("%ld", &g);
            getchar();

            if (g <= 100) // 100 or less allowed
            {
                a = g * 325;
                b = g * 485;

                while (1)
                {
                    printf("\n\t\t\t\t\t  ***Budget Type***\n");
                    printf("\t\t\t\t\t  ");
                    drawLine(20);
                    printf("\n\t\t\t\t\t  Your selected date is %s, So You get [35 Percent] discount\n", day);
                    printf("\n\t\t\t\t\t\t  [1].Common Type [%ld TK]\n\t\t\t\t\t\t  [2].Premium Type [%ld TK]", a, b);
                    printf("\n\n\t\t\t\t\t  Enter Your Choice: ");
                    scanf("%d", &cho);

                    if (cho == 1)
                    {
                        amount = a;
                        break;
                    }
                    else if (cho == 2)
                    {
                        amount = b;
                        break;
                    }
                    else
                    {
                        printf("\n\t\t\t\t\t  Wrong Choice, try again... ");
                    }
                }
                break;
            }
            else
            {
                printf("\n\t\t\t\t\t  Max 100 Guests allowed. Try again....\n");
            }
        }
    }


////////////////////////////////////
    else
    {
        while (1)
        {
            printf("\n\t\t\t\t\t  Enter Number of Guest[MAX-100]: ");
            scanf("%ld", &g);
            getchar();

            if (g > 0 && g <= 40)
            {
                printf("\n\t\t\t\t\t  ***Budget Type***\n");
                printf("\n\t\t\t\t\t  ");
                drawLine(20);

                a = g * 500;
                b = g * 750;

                while (1) // choice validation loop
                {
                    printf("\n\t\t\t\t\t\t  [1].Common Type[%ld TK]\n\t\t\t\t\t\t  [2].Premium Type[%ld TK]", a, b);
                    printf("\n\n\t\t\t\t\t  Enter Your Choice: ");
                    scanf("%d", &cho);

                    if (cho == 1)
                    {
                        amount = a;
                        break; // exit choice loop
                    }
                    else if (cho == 2)
                    {
                        amount = b;
                        break; // exit choice loop
                    }
                    else
                    {
                        printf("\n\t\t\t\t\t  Invalid choice! Please enter 1 or 2.\n");
                    }
                }
                break; // exit guest loop
            }
            else if (g > 40 && g <= 60)
            {
                printf("\n\n\t\t\t\t\t  ***Budget Type***\n");
                printf("\n\t\t\t\t\t  ");
                drawLine(20);
                c = g * 450;
                d = g * 675;
                printf("\n\t\t\t\t\t  You've got [10 Percent] discount on the original Budget price\n\n");

                while (1) // choice validation loop
                {
                    printf("\n\t\t\t\t\t  \t[1].Common Type[%ld TK]\n\t\t\t\t\t  \t[2].Premium Type[%ld TK]", c, d);
                    printf("\n\n\t\t\t\t\t  Enter Your Choice: ");
                    scanf("%d", &cho);

                    if (cho == 1)
                    {
                        amount = c;
                        break;
                    }
                    else if (cho == 2)
                    {
                        amount = d;
                        break;
                    }
                    else
                    {
                        printf("\n\t\t\t\t\t  Invalid choice! Please enter 1 or 2.\n");
                    }
                }
                break;
            }
            // g > 60 && g <= 80
            else if (g > 60 && g <= 80)
            {
                printf("\n\t\t\t\t\t  ***Budget Type***\n");
                printf("\n\t\t\t\t\t  ");
                drawLine(20);
                e = g * 400;
                f = g * 600;
                printf("\n\t\t\t\t\t  You've got [20 Percent] discount on the original Budget price\n\n");

                while (1) // choice validation loop
                {
                    printf("\n\t\t\t\t\t  \t[1].Common Type[%ld TK]\n\t\t\t\t\t  \t[2].Premium Type[%ld TK]", e, f);
                    printf("\n\t\t\t\t\t  Enter Your Choice: ");
                    scanf("%d", &cho);

                    if (cho == 1)
                    {
                        amount = e;
                        break;
                    }
                    else if (cho == 2)
                    {
                        amount = f;
                        break;
                    }
                    else
                    {
                        printf("\n\t\t\t\t\t  Invalid choice! Please enter 1 or 2.\n");
                    }
                }
                break;
            }
            // g > 80 && g <= 100
            else if (g > 80 && g <= 100)
            {
                printf("\n\t\t\t\t\t  ***Budget Type***\n");
                printf("\n\t\t\t\t\t  ");
                drawLine(20);
                i = 350 * g;
                h = 525 * g;
                printf("\n\t\t\t\t\t  You've got [30 Percent] discount on the original Budget price\n\n");

                while (1) // choice validation loop
                {
                    printf("\n\t\t\t\t\t  \t[1].Common Type[%ld] TK\n\t\t\t\t\t  \t[2].Premium Type[%ld TK]", i, h);
                    printf("\n\t\t\t\t\t  Enter Your Choice: ");
                    scanf("%d", &cho);

                    if (cho == 1)
                    {
                        amount = i;
                        break;
                    }
                    else if (cho == 2)
                    {
                        amount = h;
                        break;
                    }
                    else
                    {
                        printf("\n\t\t\t\t\t  Invalid choice! Please enter 1 or 2.\n");
                    }
                }
                break;
            }
            else
            {
                printf("\n\t\t\t\t\t  Invalid guest number.\n");
            }
        }
    }









    int ch;
    char number[100],pin[10],name[100];
    long int amu;

    while (1)
    {
        printf("\n\t\t\t\t\t  Select Payment Method\n\n");
        printf("\t\t\t\t\t  [1]. Bkash\n");
        printf("\t\t\t\t\t  [2]. Nagad\n");
        printf("\t\t\t\t\t  [3]. Rocket\n");

        printf("\n\t\t\t\t\t  Enter your Choice: ");
        scanf("%d", &ch);
        getchar();
        if (ch >= 1 && ch <= 3)
        {
            printf("\n\t\t\t\t\t  Enter User Name: ");
            gets(name);

            int valid = 0;

            while (!valid)
            {

                printf("\n\t\t\t\t\t  Enter User number[01XX..]:  ");
                scanf("%16s", number);

                int len = strlen(number);

                if (len != 11)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Invalid Number...\n");
                    printf("%s",AC_BLUE);
                    continue;
                }

                if (number[0] != '0' || number[1] != '1')
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Invalid Number...\n");
                    printf("%s",AC_BLUE);
                    continue;
                }


                if (!isdigit(number[2]) || number[2] <= '2')
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Invalid Number...\n");
                    printf("%s",AC_BLUE);
                    continue;
                }



                int all_digits = 1;
                for (int i = 0; i < 11; i++)
                {
                    if (!isdigit(number[i]))
                    {
                        all_digits = 0;
                        break;
                    }
                }

                if (!all_digits)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Invalid Number...\n");
                    printf("%s",AC_BLUE);
                    continue;
                }

                valid = 1;
            }

            printf("%s",AC_MAGENTA);





            printf("\n\t\t\t\t\t  Enter Amount: ");
            scanf("%ld", &amu);


            int valid1 = 0;

            while (!valid1)
            {

                printf("\n\t\t\t\t\t  Enter PIN[XXXX]:  ");
                scanf("%16s", pin);

                int len1 = strlen(pin);

                if (len1 != 4)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Invalid Pin...\n");
                    printf("%s",AC_BLUE);
                    continue;
                }



                int all_digits1 = 1;
                for (int i = 0; i < 11; i++)
                {
                    if (!isdigit(number[i]))
                    {
                        all_digits1 = 0;
                        break;
                    }
                }

                if (!all_digits1)
                {
                    printf("%s",AC_RED);
                    printf("\n\t\t\t\t\t  Invalid Pin...\n");
                    printf("%s",AC_BLUE);
                    continue;
                }

                valid1 = 1;
            }


            break;
        }
        else
        {
            printf("\n\t\t\t\t\t  Invalid choice! Please try again.\n");
        }
    }

    printf("\n");

    if(amu==amount)
    {
        due=0;
        return_tk=0;
        printf("\n\t\t\t\t\t  Payment successfully\n");
    }
    else if(amu>amount)
    {
        return_tk=amu-amount;
        due=0;
        printf("\n\t\t\t\t\t  Payment successfully.Return %ld Tk.\n",return_tk);
    }
    else if(amu<amount)
    {
        due=amount-amu;
        return_tk=0;
        printf("\n\t\t\t\t\t  Payment Not successfully.Due %ld Tk.\n",due);
    }


    FILE *p;

    p = fopen("paybooking.txt", "a");
    if (p == NULL)
    {
        printf("\n\t\t\t\t\t  File not found!\n");
        return;
    }

    fprintf(p,"%s %s %ld %ld %ld %ld %02d/%02d/%04d\n", name, number, g, amu, return_tk, due, days, month, year);

    fclose(p);


    system("CLS");
    printf("%s", AC_CYAN);
    printf("\t\t\t\t\t  -------------------------------------");
    printf("\n\t\t\t\t\t         PAYMENT RECEIPT\n");
    printf("\t\t\t\t\t  -------------------------------------");

    printf("\n\t\t\t\t\t  Customer Name   : %s", name);
    printf("\n\t\t\t\t\t  Phone Number    : %s", number);
    printf("\n\t\t\t\t\t  Event Date      : %02d/%02d/%04d", days, month, year);
    printf("\n\t\t\t\t\t  Guests          : %ld", g);

    printf("\n\t\t\t\t\t  Total Amount    : %ld Tk", amount);
    printf("\n\t\t\t\t\t  Paid Amount     : %ld Tk", amu);
    printf("\n\t\t\t\t\t  Return Amount   : %ld Tk", return_tk);
    printf("\n\t\t\t\t\t  Due Amount      : %ld Tk", due);

    printf("\n\t\t\t\t\t  Status          : ");
    if(due==0)
    {
        printf("Payment Completed");
    }
    else
    {
        printf("Pending (Due Left)");
    }

    printf("\n");
    printf("\n\t\t\t\t\t  -------------------------------------");
    printf("\n\t\t\t\t\t  Thank you for booking with EVENTTRIX!\n");
    printf("\t\t\t\t\t  -------------------------------------");

    printf("\n\n\n\t\t\t\t\t  Any key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();

}

void view_payment()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t     <<<<<-----View Payment Details----->>>>>      \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);


    char name[100],number[100],day[100];

    long int g,n,due,amu;

    FILE *p = fopen("paybooking.txt", "r");

    if (p == NULL)
    {
        printf("\n\t\t\t\t\t  File not found!\n");
        return;
    }

    printf("%s",AC_MAGENTA);
    printf("\n\n");

    while (fscanf(p,"%s %s %ld %ld %ld %ld %s\n", name, number, &g, &amu, &n, &due, day) != EOF)
    {
        printf("\n\t\t\t\t\t  ");
        drawLine(30);
        printf("\n\t\t\t\t\t  Payment Details %s\n\n",name);
        printf("\t\t\t\t\t  Name\t :%s\n\t\t\t\t\t  Number :%s\n\t\t\t\t\t  Guest\t :%ld\n\t\t\t\t\t  Payment:%ld\n\t\t\t\t\t  Due\t :%ld\n\t\t\t\t\t  Return :%ld\n\t\t\t\t\t  Date\t :%s", name, number, g, amu, n, due, day);
        printf("\n");
        printf("\n\t\t\t\t\t  ");
        drawLine(30);
        printf("\n\n");
    }

    fclose(p);

    printf("%s",AC_GREEN);
    printf("\n\n\t\t\t\t\t  Any key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();
}



void View_Event_Information()
{
    char pname[100], number[100], uname[100], vname[100], ename[100], date[100], day[100];
    char startTime[10], endTime[10];

    system("CLS");

    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Event Booking List----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n\n");

    FILE *M = fopen("booking.txt", "r");

    if (M == NULL)
    {
        printf("   File not found!\n");
        return;
    }
    printf("%s", AC_CYAN);
    while (fscanf(M, "%s %s %s %s %s %s %s %s-%s", ename, uname, number, vname, pname, day, date, startTime, endTime) != EOF)
    {
        printf("\n\t\t\t\t\t   ");
        drawLine(30);
        printf("\n\t\t\t\t\t   Booking Details: %s\n\n", uname);

        printf("\t\t\t\t\t   | Event : %s\n", ename);
        printf("\t\t\t\t\t   | Name  : %s\n", uname);
        printf("\t\t\t\t\t   | Number: %s\n", number);
        printf("\t\t\t\t\t   | Venue : %s\n", vname);
        printf("\t\t\t\t\t   | Place : %s\n", pname);
        printf("\t\t\t\t\t   | Date  : %s\n", date);
        printf("\t\t\t\t\t   | Time  : %s - %s\n", startTime, endTime);

        printf("\n\t\t\t\t\t   ");
        drawLine(30);
        printf("\n\n");
    }

    fclose(M);
    printf("%s", AC_GREEN);
    printf("\n\n\t\t\t\t\t   Press any key to continue...");
    getch();
    system("CLS");
}

void userview()
{
    View_Event_Information();
    coustomer_dashboard();

}
void adminview()
{
    View_Event_Information();
    admin_dashboard();
}


void Service_Request()
{
    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Service Request----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1] Service Request\n\n");
    printf("\t\t\t\t\t      [0] Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");
    getchar();
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Service Request----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");

    if(choice==1)
    {
        char a[100];
        int c1,c2,c3,c4,s1,s2,s3,s4;
        printf("\n\t\t\t\t\t      Decoration Services\n\n\t\t\t\t\t      \t[1].Stage.(10000TK)\n\n\t\t\t\t\t      \t[2].Floral.(12000TK)\n\n\t\t\t\t\t      \t[3].Balloon.(5000TK)\n");
        printf("\n\t\t\t\t\t      Enter Your Choice: ");
        scanf("%d",&c1);


        while(1)
        {
            if(c1==1)
            {
                s1=10000;
                break;
            }
            else if(c1==2)
            {
                s1=12000;
                break;
            }
            else if(c1==3)
            {
                s1=5000;
                break;
            }
            else
            {
                printf("%s", AC_RED);
                printf("\n\n\t\t\t\t\t    Wrong choice...\n\n");
                printf("%s", AC_MAGENTA);
            }

            break;
        }
        getchar();
        printf("\n\t\t\t\t\t      Write Here: ");
        gets(a);

        char b[100];
        printf("\n\n\t\t\t\t\t      Lighting Services\n\n\t\t\t\t\t      \t1.Yes(4000TK)\n\n\t\t\t\t\t      \t2.No\n");
        printf("\t\t\t\t\t      Enter Your Choice: ");
        scanf("%d",&c2);


        while(1)
        {
            if(c2==1)
            {
                s2=4000;
                break;
            }
            else if(c2==2)
            {
                s2=0;
                break;
            }
            else
            {
                printf("\n\t\t\t\t\t      Wrong choice...\n\n");
            }

            break;
        }
        getchar();
        printf("\n\t\t\t\t\t      Write Here: ");
        gets(b);

        char c[100];
        printf("\n\n\t\t\t\t\t      Sound System Setup Services\n\n\t\t\t\t\t      \t1.Yes(3000TK)\n\n\t\t\t\t\t      \t2.No\n");
        printf("\n\t\t\t\t\t      Enter Your Choice: ");
        scanf("%d",&c3);


        while(1)
        {
            if(c3==1)
            {
                s3=3000;
                break;
            }
            else if(c3==2)
            {
                s3=0;
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong choice...\n\n");
            }

            break;
        }
        getchar();
        printf("\n\t\t\t\t\t      Write Here: ");
        gets(c);

        char d[100];
        printf("\n\n\t\t\t\t\t      Photography & Videography Services\n\n\t\t\t\t\t      \t1.Yes(2000TK)\n\n\t\t\t\t\t      \t2.No\n");
        printf("\n\t\t\t\t\t      Enter Your Choice: ");
        scanf("%d",&c4);

        while(1)
        {
            if(c4==1)
            {
                s4=2000;
                break;
            }
            else if(c1==2)
            {
                s4=0;
                break;
            }
            else
            {
                printf("\n\n\t\t\t\t\t      Wrong choice...\n\n");
            }

            break;
        }
        getchar();
        printf("\n\t\t\t\t\t      Write Here: ");
        gets(d);


        int sum;

        sum=s1+s2+s3+s4;




        system("CLS");


        printf("%s", AC_RED);
        drawLine(120);
        printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Payment Process----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
        drawLine(120);
        printf("%s", AC_MAGENTA);
        printf("\n\n");


        printf("\n\t\t\t\t\t    Complete Your Payment %d Tk\n",sum);

        int ch,return_tk,due;
        char number[100],pin[10],name[100];
        long int amu;

        while (1)
        {
            printf("\n\t\t\t\t\t    Select Payment Method\n\n");
            printf("\t\t\t\t\t    [1]. Bkash\n");
            printf("\t\t\t\t\t    [2]. Nagad\n");
            printf("\t\t\t\t\t    [3]. Rocket\n");

            printf("\n\t\t\t\t\t    Enter your Choice: ");
            scanf("%d", &ch);
            getchar();

            if (ch >= 1 && ch <= 3)
            {
                printf("\n\t\t\t\t\t    Enter User Name: ");
                gets(name);

                int valid = 0;

                while (!valid)
                {

                    printf("\n\t\t\t\t\t    Enter User number[01XX..]:  ");
                    scanf("%16s", number);

                    int len = strlen(number);

                    if (len != 11)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }

                    if (number[0] != '0' || number[1] != '1')
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }


                    if (!isdigit(number[2]) || number[2] <= '2')
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }



                    int all_digits = 1;
                    for (int i = 0; i < 11; i++)
                    {
                        if (!isdigit(number[i]))
                        {
                            all_digits = 0;
                            break;
                        }
                    }

                    if (!all_digits)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }

                    valid = 1;
                }

                printf("%s",AC_MAGENTA);





                printf("\n\t\t\t\t\t    Enter Amount: ");
                scanf("%ld", &amu);


                int valid1 = 0;

                while (!valid1)
                {

                    printf("\n\t\t\t\t\t    Enter PIN[XXXX]:  ");
                    scanf("%16s", pin);

                    int len1 = strlen(pin);

                    if (len1 != 4)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Pin...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }



                    int all_digits1 = 1;
                    for (int i = 0; i < 11; i++)
                    {
                        if (!isdigit(number[i]))
                        {
                            all_digits1 = 0;
                            break;
                        }
                    }

                    if (!all_digits1)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Pin...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }

                    valid1 = 1;
                }


                break;
            }
            else
            {
                printf("\n\t\t\t\t\t    Invalid choice! Please try again.\n");
            }
        }

        printf("\n");

        if(amu==sum)
        {
            due=0;
            return_tk=0;
            printf("\n\t\t\t\t\t    Payment successfully\n");
        }
        else if(amu>sum)
        {
            return_tk=amu-sum;
            due=0;
            printf("\n\t\t\t\t\t    Payment successfully.Return %ld Tk.\n",return_tk);
        }
        else if(amu<sum)
        {
            due=sum-amu;
            return_tk=0;
            printf("\n\t\t\t\t\t    Payment Not successfully.Due %ld Tk.\n",due);
        }



        FILE *sr;
        sr = fopen("service_request.txt", "a");
        if (sr == NULL)
        {
            printf("File not found!\n");
            return;
        }
        fprintf(sr, "%s %s %s %s %s %s %d %d %d\n",name,number, a, b, c, d, sum, due, return_tk);
        fclose(sr);

        printf("%s", AC_GREEN);
        printf("\n\n\n\t\t\t\t\t    Any key to continue..........");
        getch();
        system("CLS");
        coustomer_dashboard();

    }
    else
    {
        system("CLS");
        coustomer_dashboard();

    }

}







void View_Service_Request()
{


    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t    <<<<<-----View Service Request & Approval----->>>>>      \t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1].View Service Request & Approval\n\n");
    printf("\t\t\t\t\t      [0].Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");



    if(choice==1)
    {

        printf("%s", AC_RED);
        drawLine(120);
        printf("  [ EVENTTRIX ]\t\t\t    <<<<<-----View Service Request----->>>>>    \t\t\t[ EVENTTRIX ]\n");
        drawLine(120);
        printf("%s", AC_MAGENTA);
        printf("\n\n");

        FILE *sr = fopen("service_request.txt", "r");
        if (sr == NULL)
        {
            printf("%s", AC_RED);
            printf("File not found!\n");
            return;
        }

        char name[100], a[100], b[100], c[100], d[100],number[100];
        int sum,due,return_tk;

        printf("Name\tNumber\t\tDecoration\tLighting\tSound\tPhoto/Video\tPayment\tDue\tReturn_tk\n");
        drawLine(120);

        while (fscanf(sr, "%s %s %s %s %s %s %d %d %d\n",name,number, a, b, c, d, &sum, &due, &return_tk) != EOF)
        {
            printf("%s\t%s\t%s\t\t%s\t\t%s\t\t%s\t%d\t%d\t%d\n",name,number, a, b, c, d, sum, due, return_tk);
        }

        fclose(sr);


        printf("\n\n\n");

        printf("%s", AC_RED);
        drawLine(120);
        printf("  [ EVENTTRIX ]\t\t\t    <<<<<-----Service Request Approval----->>>>>    \t\t\t[ EVENTTRIX ]\n");
        drawLine(120);
        printf("%s", AC_MAGENTA);
        printf("\n\n");
        char uname[100],number1[100],approve[100],light[100],decora[100],sound[100],photo[100];

        getchar();

        printf("\n\t\t\t\t\t   Enter User Name: ");
        gets(uname);
        printf("\n\t\t\t\t\t   Enter User Number: ");
        gets(number1);
        printf("\n\t\t\t\t\t   Enter Decoration Name: ");
        gets(decora);
        printf("\n\t\t\t\t\t   Enter Lighting Status : ");
        gets(light);
        printf("\n\t\t\t\t\t   Enter Sound System Status: ");
        gets(sound);
        printf("\n\t\t\t\t\t   Enter Photo/Video Status: ");
        gets(photo);
        printf("\n\t\t\t\t\t   Enter Service Request Status: ");
        gets(approve);

        printf("\n\n");

        FILE *p;

        p = fopen("approveServiceRequest.txt", "a");
        if (p == NULL)
        {
            printf("\n\t\t\t\t\t   File not found!\n");
            return;
        }

        fprintf(p,"%s %s %s %s %s %s %s\n", uname, number1, decora, light, sound, photo, approve);

        fclose(p);

        printf("%s", AC_GREEN);
        printf("\n\n\t\t\t\t\t   Press any key to continue...");
        getch();
        system("CLS");
        admin_dashboard();

    }






    else
    {
        system("CLS");
        admin_dashboard();

    }
}

void Equipment_Rental()
{


    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Equipment Rental----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1] Equipment Rentalt\n\n");
    printf("\t\t\t\t\t      [0] Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");



    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Equipment Rental----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");

    if(choice==1)
    {

        char equipment[100];
        int quantity,m,a;
        FILE *file;

        getchar();
        printf("\t\t\t\t\t      Available Equipment:\n");
        printf("\t\t\t\t\t      1. Microphone(500TK)\n");
        printf("\t\t\t\t\t      2. Speaker(1000TK)\n");
        printf("\t\t\t\t\t      3. Chairs(50TK)\n");
        printf("\t\t\t\t\t      4. Tables(100TK)\n");
        printf("\t\t\t\t\t      5. Lights(20TK)\n");

        printf("\n\t\t\t\t\t      Enter your Choice: ");
        scanf("%d",&m);
        getchar();
        printf("\n\t\t\t\t\t      Enter Equipment Name to Rent: ");
        gets(equipment);

        printf("\t\t\t\t\t      Enter Quantity: ");
        scanf("%d", &quantity);
        if(m==1)
        {
            a=500*quantity;
        }
        else if(m==2)
        {
            a=1000*quantity;
        }
        else if(m==3)
        {
            a=50*quantity;
        }
        else if(m==4)
        {
            a=100*quantity;
        }
        else if(m==5)
        {
            a=20*quantity;
        }
        else
        {
            Equipment_Rental();
        }

        system("CLS");


        printf("%s", AC_RED);
        drawLine(120);
        printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Equipment Rental----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
        drawLine(120);
        printf("%s", AC_BLUE);
        printf("\n\n");

        printf("\t\t\t\t\t    Complete Your Payment %d Tk",a);





        int ch,return_tk,due;
        char number[100],pin[10],name[100];
        long int amu;

        while (1)
        {
            printf("\n\n\t\t\t\t\t    Select Payment Method\n\n");
            printf("\t\t\t\t\t    [1]. Bkash\n");
            printf("\t\t\t\t\t    [2]. Nagad\n");
            printf("\t\t\t\t\t    [3]. Rocket\n");

            printf("\n\t\t\t\t\t    Enter your Choice: ");
            scanf("%d", &ch);
            getchar();

            if (ch >= 1 && ch <= 3)
            {
                printf("\n\t\t\t\t\t    Enter User Name: ");
                gets(name);

                int valid = 0;

                while (!valid)
                {

                    printf("\n\t\t\t\t\t    Enter User number[01XX..]:  ");
                    scanf("%16s", number);

                    int len = strlen(number);

                    if (len != 11)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }

                    if (number[0] != '0' || number[1] != '1')
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }


                    if (!isdigit(number[2]) || number[2] <= '2')
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }



                    int all_digits = 1;
                    for (int i = 0; i < 11; i++)
                    {
                        if (!isdigit(number[i]))
                        {
                            all_digits = 0;
                            break;
                        }
                    }

                    if (!all_digits)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Number...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }

                    valid = 1;
                }

                printf("%s",AC_MAGENTA);





                printf("\n\t\t\t\t\t    Enter Amount: ");
                scanf("%ld", &amu);


                int valid1 = 0;

                while (!valid1)
                {

                    printf("\n\t\t\t\t\t    Enter PIN[XXXX]:  ");
                    scanf("%16s", pin);

                    int len1 = strlen(pin);

                    if (len1 != 4)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Pin...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }



                    int all_digits1 = 1;
                    for (int i = 0; i < 11; i++)
                    {
                        if (!isdigit(number[i]))
                        {
                            all_digits1 = 0;
                            break;
                        }
                    }

                    if (!all_digits1)
                    {
                        printf("%s",AC_RED);
                        printf("\n\t\t\t\t\t    Invalid Pin...\n");
                        printf("%s",AC_BLUE);
                        continue;
                    }

                    valid1 = 1;
                }


                break;
            }
            else
            {
                printf("\n\t\t\t\t\t    Invalid choice! Please try again.\n");
            }
        }

        printf("\n");

        if(amu==a)
        {
            due=0;
            return_tk=0;
            printf("\n\t\t\t\t\t    Payment successfully\n");
        }
        else if(amu>a)
        {
            return_tk=amu-a;
            due=0;
            printf("\n\t\t\t\t\t    Payment successfully.Return %ld Tk.\n",return_tk);
        }
        else if(amu<a)
        {
            due=a-amu;
            return_tk=0;
            printf("\n\t\t\t\t\t    Payment Not successfully.Due %ld Tk.\n",due);
        }

        file = fopen("equipment_rental.txt", "a");
        if (file == NULL)
        {
            printf("\n\t\t\t\t\t    Error opening file!\n");
            return;
        }

        fprintf(file, "%s %s %s %d %d %d %d\n", name, number, equipment, quantity, a, return_tk, due);
        fclose(file);

        printf("\n\n\t\t\t\t\t    Your equipment rental request has been recorded.\n");
        printf("%s", AC_GREEN);
        printf("\n\n\n\t\t\t\t\t    Any key to continue..........");
        getch();
        system("CLS");
        coustomer_dashboard();

    }


    else
    {
        system("CLS");
        coustomer_dashboard();

    }
}

void View_Equipment_Rental_Request()
{
    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t  <<<<<-----View Equipment Rental Request & Approval----->>>>>  \t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1].View Equipment Rental Request & Approval\n\n");
    printf("\t\t\t\t\t      [0].Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d", &choice);
    system("CLS");


    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t<<<<<-----View Equipment Rental Request----->>>>>\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");




    if(choice==1)
    {
        FILE *file;
        file = fopen("equipment_rental.txt", "r");

        if (file == NULL)
        {
            printf("Error opening file!\n");
            return;
        }

        printf("%s", AC_BLUE);
        printf("Name\t\tNumber\t\tCount\tPay\treturn_tk\tDue\tEquipment\n");
        drawLine(120);
        printf("\n");


        char name[100],equipment[100],number[100];
        int quantity, a, return_tk, due;

        while (fscanf(file, "%s %s %s %d %d %d %d\n", name, number,equipment, &quantity, &a, &return_tk, &due) != EOF)
        {
            printf("%s\t\t%s\t%d\t%d\t%d\t\t%d\t%s\n", name, number,  quantity, a, return_tk, due,equipment);
        }

        fclose(file);





        printf("\n\n\n");

        printf("%s", AC_RED);
        drawLine(120);
        printf("  [ EVENTTRIX ]\t\t\t<<<<<-----Equipment Rental Request Approval----->>>>>\t\t\t[ EVENTTRIX ]\n");
        drawLine(120);
        printf("%s", AC_MAGENTA);
        printf("\n\n");
        char pname[100],uname[100],vname[100],number1[100],approve[100];

        getchar();

        printf("\n\t\t\t\t\t   Enter User Name: ");
        gets(uname);
        printf("\n\t\t\t\t\t   Enter User Number: ");
        gets(number1);
        printf("\n\t\t\t\t\t   Enter Equipment Name: ");
        gets(pname);
        printf("\n\t\t\t\t\t   Enter quantity : ");
        gets(vname);
        printf("\n\t\t\t\t\t   Enter Status: ");
        gets(approve);

        printf("\n\n");

        FILE *p;

        p = fopen("approveEquipment.txt", "a");
        if (p == NULL)
        {
            printf("\n\t\t\t\t\t   File not found!\n");
            return;
        }

        fprintf(p,"%s %s %s %s %s\n", uname, number1, vname, approve, pname);

        fclose(p);

        printf("%s", AC_GREEN);
        printf("\n\n\t\t\t\t\t   Press any key to continue...");
        getch();
        system("CLS");
        admin_dashboard();



    }



    else
    {
        system("CLS");
        admin_dashboard();

    }





}
void Submit_Feedback()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Submit Feedback----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");
    char name[50], feedback[500];
    FILE *file;
    printf("%s",AC_BLUE);
    getchar();
    printf("\n\t\t\t\t\t      Enter your name: ");
    gets(name);

    printf("\n\n\t\t\t\t\t      Write your feedback:\n\n\t\t\t\t\t      ");
    gets(feedback);

    file = fopen("feedback.txt", "a");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "Name: %s\n\n=>Feedback: %s\n\n\n", name, feedback);
    fclose(file);

    printf("\n\n\t\t\t\t\t      Thank you! Your feedback has been recorded.\n");
    printf("%s",AC_GREEN);
    printf("\n\t\t\t\t\t      Any key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();

}
void Contact_Us()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t  <<<<<-----Contact Us----->>>>>  \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");
    printf("%s",AC_MAGENTA);
    printf("--------\nPhone\n--------\n\t[1].01960603846\n\t[2].0183947489\n\t[3].0168383888\n\n");
    printf("--------\nEmail\n--------\n\t[1].mahim242-35-705@diu.edu.bd\n\t[2].tamim242-35-858@diu.edu.bd\n\t[3].shahed242-35-590@diu.edu.bd");

    printf("\n\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();
}
void View_Feedback_History()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t    <<<<<-----View Feedback History----->>>>>    \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    FILE *file;
    file = fopen("feedback.txt", "r");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }
    char ch;
    printf("%s",AC_BLUE);
    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("%s",AC_GREEN);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}

void Manage_Discount_and_Offer()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Manage Discount and Offer----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    printf("\n\t\t\t\t\t      Manage Discount and Offer\n\n\t\t\t\t\t      \t[1].View Discount and Offer\n\t\t\t\t\t      \t[2].Add Discount and Offer\n");
    int n;
    printf("\n\n\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d",&n);

    if (n==1)
    {
        viewadm();
    }
    else if(n==2)
    {
        add();
    }
    else
    {
        Manage_Discount_and_Offer();
    }
}
void add()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Manage Discount and Offer----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    char a[5000];
    FILE *file;

    getchar();
    printf("%s",AC_CYAN);
    printf("\n\t\t\t\t\t      Write Discount and Offer\n\n\t\t\t\t\t      ");
    gets(a);

    file = fopen("Discount_and_Offer.txt", "a");
    if (file == NULL)
    {
        printf("\n\t\t\t\t\t      Error opening feedback file!\n");
        return;
    }

    fprintf(file, "%s\n", "W" );
    fclose(file);

    printf("\n\t\t\t\t\t      Add Successfully\n");

    printf("\n\t\t\t\t\t      Any key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}


void viewa()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t  <<<<<-----Manage Discount and Offer----->>>>>  \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    FILE *file;
    file = fopen("Discount_and_Offer.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    char ch;
    printf("%s",AC_BLUE);
    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("%s",AC_GREEN);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();


}
void viewadm()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Manage Discount and Offer----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    FILE *file;
    file = fopen("Discount_and_Offer.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    char ch;
    printf("%s",AC_BLUE);
    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("%s",AC_GREEN);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}


void Rules_and_Condition()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t<<<<<-----Rules and Condition----->>>>>\t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    printf("\n\t\t\t\t\t      Rules and Condition\n\n\t\t\t\t\t      \t[1].View Rules and Condition\n\n\t\t\t\t\t      \t[2].Add Rules and Condition\n");
    int n;
    printf("\n\n\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d",&n);

    if (n==1)
    {
        viewad();
    }
    else if(n==2)
    {
        addr();
    }
    else
    {
        Rules_and_Condition();
    }
}
void addr()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t   <<<<<-----View Rules and Condition----->>>>>   \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    char a[5000];
    FILE *file;


    printf("%s",AC_BLUE);
    file = fopen("Rules_and_Condition.txt", "a");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }
    getchar();
    printf("\n\nWrite Rules and Condition\n\n");
    gets(a);

    fprintf(file, "%s\n", a);
    fclose(file);

    printf("\nAdd Successfully\n");
    printf("%s",AC_GREEN);
    printf("\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}
void viewad()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t   <<<<<-----View Rules and Condition----->>>>>   \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");

    FILE *file;
    file = fopen("Rules_and_Condition.txt", "r");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }
    char ch;
    printf("%s",AC_BLUE);
    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("%s",AC_GREEN);
    printf("Any key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();
}

void viewr()
{
    system("CLS");
    printf("%s",AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t    <<<<<-----View Rules and Condition----->>>>>   \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("\n");


    FILE *file;
    file = fopen("Rules_and_Condition.txt", "r");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }
    char ch;
    printf("%s",AC_BLUE);
    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("%s",AC_GREEN);
    printf("Any key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();
}
void add_item()
{


    FILE *log;

    log = fopen("venu.txt", "a");
    if (log == NULL)
    {
        printf("\n\t\t\t\t\t      File not found!\n");
        return;
    }
    char vname[100];
    getchar();
    printf("\n\n\t\t\t\t\t      enter venue: ");
    gets(vname);
    fprintf(log, "%s\n", vname);

    fclose(log);
    printf("%s",AC_GREEN);
    printf("\n\n\t\t\t\t\t      Any key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}
void getPassword(char *pass)
{
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
        if (ch == 13)
        {
            pass[i] = '\0';
            break;
        }
        else if (ch == 8)
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            pass[i++] = ch;
            printf("-");
        }
    }
}


void change_password()
{
    struct login l;
    char uname[100], old_pass[100], new_pass[100];
    int found = 0;

    FILE *fp = fopen("login.txt", "r");
    FILE *temp1 = fopen("temp1.txt", "w");

    if (fp == NULL)
    {
        printf("User file not found!\n");
        return;
    }

    printf("Enter Username: ");
    scanf("%s", uname);
    printf("Enter Current Password: ");
    getPassword(old_pass);

    while (fscanf(fp, "%s %s %s %s %s",
                  l.fname, l.lname, l.username, l.pass, l.num) != EOF)
    {
        if (strcmp(l.username, uname) == 0 && strcmp(l.pass, old_pass) == 0)
        {
            found = 1;
            printf("Enter New Password: ");
            getPassword(new_pass);
            strcpy(l.pass, new_pass);
        }
        fprintf(temp1, "%s\t\t%s\t\t%s\t\t%s\t\t%s\n", l.fname, l.lname, l.username, l.pass, l.num);
    }

    fclose(fp);
    fclose(temp1);

    remove("login.txt");
    rename("temp1.txt", "login.txt");

    if (found)
        printf("\nPassword changed successfully!\n");
    else
        printf("\nInvalid username or password!\n");
}

void Edit_Event_Booking()
{
    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t     <<<<<-----Edit Event Booking----->>>>>     \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_BLUE);

    char ename[100], uname[100];
    char tempE[100], tempU[100], number[100], vname[100], pname[100], day[100], date[100], startTime[10], endTime[10];
    int found = 0;

    printf("\n\t\t\t\t\t     Enter Event Name: ");
    scanf("%s", ename);
    printf("\n\t\t\t\t\t     Enter User Name: ");
    scanf("%s", uname);

    FILE *fp = fopen("booking.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (!fp || !temp)
    {
        printf("\n\t\t\t\t\t     Error opening file!\n");
        return;
    }

    while (fscanf(fp, "%s %s %s %s %s %s %s %s-%s",
                  tempE, tempU, number, vname, pname, day, date, startTime, endTime) != EOF)
    {
        if (strcmp(tempE, ename) == 0 && strcmp(tempU, uname) == 0)
        {
            found = 1;
            printf("\n\t\t\t\t\t     Booking Found! Enter new details\n");
            printf("\n\t\t\t\t\t     Enter New Venue: ");
            scanf("%s", vname);
            printf("\n\t\t\t\t\t     Enter New Place: ");
            scanf("%s", pname);
            printf("\n\t\t\t\t\t     Enter New Date(dd/mm/yyyy): ");
            scanf("%s", date);
            printf("\n\t\t\t\t\t     Enter New Start Time: ");
            scanf("%s", startTime);
            printf("\n\t\t\t\t\t     Enter New End Time: ");
            scanf("%s", endTime);
        }
        fprintf(temp, "%s %s %s %s %s %s %s %s-%s\n",
                tempE, tempU, number, vname, pname, day, date, startTime, endTime);
    }

    fclose(fp);
    fclose(temp);
    remove("booking.txt");
    rename("temp.txt", "booking.txt");

    if (found)
        printf("\n\t\t\t\t\t      Event updated successfully!\n");
    else
        printf("\n\t\t\t\t\t      Event not found!\n");

    printf("%s",AC_GREEN);
    printf("\n\n\t\t\t\t\t      Any key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();
}
void Cancel_Event()
{

    system("CLS");


    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Cancel Event----->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");




    char ename[100], uname[100], date[100];
    char tempE[100], tempU[100], number[100], vname[100], pname[100], day[100], sdate[100], startTime[10], endTime[10];
    int found = 0;

    printf("\n\t\t\t\t\t     Enter Event Name: ");
    scanf("%s", ename);
    printf("\n\t\t\t\t\t     Enter User Name: ");
    scanf("%s", uname);

    FILE *fp = fopen("booking.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (!fp || !temp)
    {
        printf("\n\t\t\t\t\t     File error!\n");
        return;
    }

    while (fscanf(fp, "%s %s %s %s %s %s %s %s-%s",
                  tempE, tempU, number, vname, pname, day, sdate, startTime, endTime) != EOF)
    {
        if (strcmp(tempE, ename) == 0 && strcmp(tempU, uname) == 0)
        {
            found = 1;

            // extract day from date string dd/mm/yyyy
            int d, m, y;
            sscanf(sdate, "%d/%d/%d", &d, &m, &y);

            time_t t = time(NULL);
            struct tm today = *localtime(&t);
            struct tm eventDate = {0};
            eventDate.tm_mday = d;
            eventDate.tm_mon = m - 1;
            eventDate.tm_year = y - 1900;

            double diff = difftime(mktime(&eventDate), mktime(&today)) / (60*60*24);

            if (diff >= 7)
                printf("\n\t\t\t\t\t     Full refund granted!\n");
            else
                printf("\n\t\t\t\t\t     30%% cancellation fee applied, refund = 70%%.\n");

            continue; // skip writing (delete booking)
        }
        fprintf(temp, "%s %s %s %s %s %s %s %s-%s\n",
                tempE, tempU, number, vname, pname, day, sdate, startTime, endTime);
    }

    fclose(fp);
    fclose(temp);
    remove("booking.txt");
    rename("temp.txt", "booking.txt");

    if (found)
        printf("\n\t\t\t\t\t     Event cancelled successfully!\n");
    else
        printf("\n\t\t\t\t\t     Event not found!\n");

    printf("%s",AC_GREEN);
    printf("\n\n\t\t\t\t\t     Press any key to continue...");
    getch();
    system("CLS");
    coustomer_dashboard();

}



void Show_Upcoming_Events(char currentUser[])
{
    system("CLS");
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Upcoming Events----->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);

    FILE *fp = fopen("booking.txt", "r");
    if (!fp)
    {
        printf("File not found!\n");
        return;
    }

    char ename[100], uname[100], number[100], vname[100], pname[100], day[100], date[100], startTime[10], endTime[10];
    int found = 0;

    time_t t = time(NULL);
    struct tm today = *localtime(&t);

    while (fscanf(fp, "%s %s %s %s %s %s %s %s-%s",
                  ename, uname, number, vname, pname, day, date, startTime, endTime) != EOF)
    {
        if (strcmp(uname, currentUser) == 0)
        {
            int d, m, y;
            sscanf(date, "%d/%d/%d", &d, &m, &y);
            struct tm eventDate = {0};
            eventDate.tm_mday = d;
            eventDate.tm_mon = m - 1;
            eventDate.tm_year = y - 1900;

            double diff = difftime(mktime(&eventDate), mktime(&today)) / (60*60*24);
            if (diff >= 0 && diff <= 7)
            {
                printf("\nUpcoming Event: %s on %s at %s-%s\n", ename, date, startTime, endTime);
            }
        }
    }

    if (!found)
        printf("\nNo upcoming events within 7 days.\n");

    fclose(fp);
    getch();
    coustomer_dashboard();
}

void User_update_Event()
{
    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t     <<<<<-----Edit Event Booking----->>>>>      \t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1].Edit Event Booking\n\n");
    printf("\t\t\t\t\t      [0].Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d",&choice);
    system("CLS");
    if(choice==1)
    {
        Edit_Event_Booking();
    }
    else
    {
        system("CLS");
        coustomer_dashboard();
    }
}




void User_Cancle_Event()
{
    system("CLS");
    printf("%s", AC_RED);
    drawLine(120);
    printf("  [ EVENTTRIX ]\t\t\t\t   <<<<<-----Cancel Event----->>>>>   \t\t\t\t[ EVENTTRIX ]\n");
    drawLine(120);
    printf("%s", AC_MAGENTA);
    printf("\n\n");
    int choice;
    printf("\t\t\t\t\t      [1].Cancel Event\n\n");
    printf("\t\t\t\t\t      [0].Back\n\n");
    printf("\t\t\t\t\t      Enter Your Choice: ");
    scanf("%d",&choice);
    system("CLS");
    if(choice==1)
    {
        Cancel_Event();
    }
    else
    {
        system("CLS");
        coustomer_dashboard();
    }
}




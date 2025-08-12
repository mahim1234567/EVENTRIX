#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

drawLine(int len)
{
    for (int i = 0; i < len; i++) printf("=");
    printf("\n");
}

int main()
{
    printf("\t\t\t   ============================================================\n");
    printf("\t\t\t   =   EEEEE  V     V  EEEEE  N   N  TTTTT  RRRR   III  X   X =\n");
    printf("\t\t\t   =   E      V     V  E      NN  N    T    R   R   I    X X  =\n");
    printf("\t\t\t   =   EEEE   V     V  EEEE   N N N    T    RRRR    I     X   =\n");
    printf("\t\t\t   =   E       V   V   E      N  NN    T    R  R    I    X X  =\n");
    printf("\t\t\t   =   EEEEE    VVV    EEEEE  N   N    T    R   R  III  X   X =\n");
    printf("\t\t\t   ============================================================\n");

    printf("\n\t\t\t\t\tSimplifying Event With Smart Tricks\n");
    printf("\n\nAny key to continue............");
    getch();
    system("CLS");

    int cho,cho2,cho3;
    drawLine(118);
    printf("======\t\t\t\t\t <<<<<-----WELCOME EVENTRIX----->>>>>  \t\t\t\t\t======\n");
    drawLine(118);
    printf("\n\n");
    printf("[1].User/Coustomer.\n");
    printf("[2].Admin/Manager.\n");
    printf("[3].Exit.\n\n");
    printf("Enter your Choice: ");
    scanf("%d",&cho);
    while(1)
    {
        if (cho == 1)
        {
            system("CLS");
            drawLine(120);
            printf("=\t\t\t\t\t<<<<<-----User Registration/Login Page----->>>>>\t\t\t\t\t=\n");
            drawLine(120);
            printf("\n\n");
            printf("[1].Registration.\n");
            printf("[2].Login.\n");
            printf("[0].Back.\n\n");
            printf("Enter your Choice: ");
            scanf("%d",&cho2);
            printf("\n\n");
            if(cho2==1)
            {
                system("CLS");
                drawLine(120);
                printf("\t\t\t\t\t<<<<<-----User Registration----->>>>>\n");
                drawLine(120);
                printf("\n\n");
                registe();
            }
            else if(cho2==2)
            {
                system("CLS");
                drawLine(120);
                printf("\t\t\t\t\t<<<<<-----User Login----->>>>>\n");
                drawLine(120);
                printf("\n\n");
                login();
            }
            else if(cho2==0)
            {
                system("CLS");
                main();
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
        else if (cho == 2)
        {
            system("CLS");
            drawLine(120);
            printf("\t\t\t\t\t<<<<<-----Admin Registration/Login Page----->>>>>\n");
            drawLine(120);
            printf("\n\n");
            printf("[1].Registration.\n");
            printf("[2].Login.\n");
            printf("[0].Back.\n\n");
            printf("Enter your Choice: ");
            scanf("%d",&cho3);
            printf("\n\n");
            if(cho3==1)
            {
                system("CLS");
                drawLine(120);
                printf("\t\t\t\t\t<<<<<-----Admin Registration----->>>>>\n");
                drawLine(120);
                printf("\n\n");
                registeA();
            }
            else if(cho3==2)
            {
                system("CLS");
                drawLine(120);
                printf("\t\t\t\t\t<<<<<-----Admin Login----->>>>>\n");
                drawLine(120);
                printf("\n\n");
                loginA();
            }
            else if(cho2==0)
            {
                system("CLS");
                main();
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
        else if(cho==3)
        {
            system("CLS");
            printf("\n\n");
            drawLine(120);
            printf("\t\t\t\tThanks for using Eventrix Hope to see you again soon.\n");
            drawLine(120);
            printf("\n\n");
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
struct login
{

    char fname[100];
    char lname[100];
    char username[100];
    char pass[100];
    char num[100];
};

int registe()
{
    struct login l;
    printf("Enter First name: ");
    scanf("%s", l.fname);
    printf("Enter Last name: ");
    scanf("%s", l.lname);
    printf("Enter User name: ");
    scanf("%s", l.username);
    printf("Enter Your Phone Number: ");
    scanf("%s", l.num);
    printf("Enter password: ");
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

    printf("\nRegistration successfully\n\n");

    printf("Your User name is your User id\n\n");

    printf("Any key to continue..........");
    getch();
    system("CLS");
    login();
}
int registeA()
{
    FILE *log1;

    log1 = fopen("loginA.txt", "a");
    struct login l;

    printf("Enter Fast name: ");
    scanf("%s", l.fname);
    printf("Enter Last name: ");
    scanf("%s", l.lname);
    printf("Enter User name: ");
    scanf("%s", l.username);
    printf("Enter Your Phone Number: ");
    scanf("%s", l.num);
    printf("Enter password: ");
    getPassword(l.pass);
    if (log1 == NULL)
    {
        printf("File not found!\n");
        return;
    }


    fprintf(log1, "%s\t\t%s\t\t%s\t\t%s\t\t%s\n", l.fname, l.lname, l.username, l.pass,l.num);

    fclose(log1);

    printf("\nRegistration successfully\n\n");

    printf("Your User name is your User id\n\n");

    printf("Any key to continue..........");
    getch();
    system("CLS");
    loginA();
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
            printf("\nSuccessfully login\n");
            printf("Any key to continue..........");
            getch();
            system("CLS");
            coustomer_dashboard();
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nIncorrect username or password\n");
        printf("Any key to continue..........");
        getch();
        system("CLS");
        main();
    }
    fclose(log);
}
int loginA()
{
    char usernameA[100];
    char passA[100];
    FILE *log1;
    log1 = fopen("loginA.txt", "r");
    struct login l;
    printf("Enter user ID: ");
    scanf("%s", usernameA);
    printf("Enter Password: ");
    getPassword(passA);

    int found = 0;

    if (log1 == NULL)
    {
        printf("File not found!\n");
        return;
    }

    while (fscanf(log1,"%s\t\t%s\t\t%s\t\t%s\t\t%s", l.fname, l.lname, l.username, l.pass, l.num) != EOF)
    {
        if (strcmp(usernameA, l.username) == 0 && strcmp(passA, l.pass) == 0)
        {
            printf("\nSuccessfully login\n");
            printf("Any key to continue..........");
            getch();
            system("CLS");
            admin_dashboard();
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nIncorrect username or password\n");
        printf("Any key to continue..........");
        getch();
        system("CLS");
        main();
    }
    fclose(log1);
}

int Delete_Event()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Delete Event----->>>>>\n");
    drawLine(120);
    printf("\n");

    char searchName[100],number[100];
    getchar();
    printf("Enter user name to Delete Event: ");
    gets(searchName);
    printf("Enter user Number to Delete Event: ");
    gets(number);

    FILE *M = fopen("booking.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (M == NULL || temp == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    int found = 0;

    char paname[100], ynumber[100],xname[100],pvname[100],zname[100];


    while (fscanf(M,"%s\t%s\t%s\t%s\t%s\n", zname, xname, ynumber, pvname, paname) != EOF)
    {
        if (strcmp(searchName, xname) == 0 &&  strcmp(number, ynumber) == 0)
        {
            found = 1;
            continue;
        }

        fprintf(temp,"%s\t%s\t%s\t%s\t%s\n", zname, xname, ynumber, pvname, paname);
    }

    fclose(M);
    fclose(temp);

    remove("booking.txt");
    rename("temp.txt", "booking.txt");

    if (found)
    {
        printf("\nEvent of '%s' deleted successfully!\n", searchName);
    }
    else
    {
        printf("\nEvent of '%s' not found!\n", searchName);
    }

    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

    return 0;
}



int coustomer_dashboard()
{
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Customer Dashboard----->>>>>\n");
    drawLine(120);
    printf("\n\n");
    printf("[1].Event Selection\n");
    printf("[2].View Booking Event Information.\n");
    printf("[3].Service Request\n");
    printf("[4].Equipment Rental\n");
    printf("[5].View Offer for Discount\n");
    printf("[6].View Rules and Condition\n");
    printf("[7].Event Approval Message\n");
    printf("[8].Submit Feedback\n");
    printf("[9].Contact Us\n");
    printf("[10].Password Change\n");
    printf("[0].Home Page\n");
    printf("\n");
    int c;
    printf("Enter your Choice: ");
    scanf("%d",&c);

    if(c==1)
    {
        system("CLS");
        Event_Selection();
    }
    else if(c==2)
    {
        userview();
    }
    else if(c==3)
    {
        Service_Request();
    }
    else if(c==4)
    {
        Equipment_Rental();
    }
    else if(c==5)
    {
        viewa();
    }
    else if(c==6)
    {

        system("CLS");
        viewr();
    }
    else if(c==7)
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
    else
    {
        system("CLS");
        main();
    }

}

int admin_dashboard()
{
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Admin Dashboard----->>>>>\n");
    drawLine(120);
    printf("\n[1].View All Event\n");
    printf("[2].Find Event.\n");
    printf("[3].Event Approval\n");
    printf("[4].View Service Request\n");
    printf("[5].View Equipment Rental Request\n");
    printf("[6].View payment\n");
    printf("[7].Delete Event\n");
    printf("[8].Manage Discount and Offer\n");
    printf("[9].Set Rules and Condition\n");
    printf("[10].View Feedback History\n");
    printf("[11].Update Event Items\n");
    printf("[0].Home Page\n");
    int ch;
    printf("Enter your Choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        adminview();
    }
    else if(ch==2)
    {
        system("CLS");
        drawLine(120);
        printf("\t\t\t\t<<<<<-----Find Event----->>>>>\n");
        drawLine(120);
        printf("\n");
        Find_Event();
        printf("\n\nAny key to continue..........");
        getch();
        system("CLS");
        admin_dashboard();
    }
    else if(ch==3)
    {

        Event_Approval();
        printf("\n\nAny key to continue..........");
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
    drawLine(120);
    printf("\t\t\t\t<<<<<-----Update Event Items----->>>>>\n");
    drawLine(120);
    printf("\n");

    printf("\n[1].Update Venue.\n\n[0].Exit.\n\n");



    while(1)
    {
        int cho;
        printf("Enter Your Choice: ");
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
            printf("\nWrong choice\n");
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

Find_Event()

{

    char searchName[100],number[100];
    getchar();
    printf("Enter user name to Find Event: ");
    gets(searchName);
    printf("Enter user Number to Find Event: ");
    gets(number);

    FILE *M = fopen("booking.txt", "r");

    if (M == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    int found = 0;

    char paname[100], ynumber[100],xname[100],pvname[100],zname[100];
    printf("\n\n");
    printf("Event Type\tName\tNumber\t\tVenue\tPlace\n");
    drawLine(70);

    while (fscanf(M,"%s\t%s\t%s\t%s\t%s\n", zname, xname, ynumber, pvname, paname) != EOF)
    {
        if (strcmp(searchName, xname) == 0 &&  strcmp(number, ynumber) == 0)
        {
           printf("%s\t%s\t%s\t%s\t%s\n", zname, xname, ynumber, pvname, paname);
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

    char n[100], a[100], b[100], c[100], d[100],p[100];
    long int amu,due;

    printf("Name\tDecoration\tLighting\tSound\tPhoto/Video\tPayment\tDue\tNumber\n");
    drawLine(120);

    while (fscanf(sr, "%s\t%s\t%s\t%s\t%s\t%ld\t%ld\t%s\n", n, a, b, c, d, &amu, &due, p) != EOF)
    {
        if (strcmp(searchName, n) == 0 &&  strcmp(number, p) == 0)

        {
           printf("%s\t%s\t\t%s\t\t%s\t%s\t\t%ld\t%ld\t%s\n", n, a, b, c, d, amu, due, p);
           found1=1;
        }

    }

    fclose(sr);

    if(found1==0)
    {
        printf("\n\nSearch Event Not Found.");
    }


 printf("\n\n\n");

    int found2 = 0;

    FILE *file;
    file = fopen("equipment_rental.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }


    printf("Name\t\tEquipment\t\tCount\tPay Amount\tDue\t\tNumber\n");
    drawLine(120);
    printf("\n");


    char name[100],equipment[100],na[100];
    int quantity;
    long int  amu1, due1;

    while (fscanf(file,"%s\t\t%s\t\t%d\t%ld\t%ld\t\t%s\n", name, equipment, &quantity, &amu1, &due1, na) != EOF)
    {
        if (strcmp(searchName, name) == 0 &&  strcmp(number, na) == 0)
        {
           printf("%s\t\t%s\t\t%d\t%ld\t\t%ld\t\t%s\n", name, equipment, quantity, amu1, due1, na);
           found2=1;
        }

    }

    fclose(file);


    if(found2==0)
    {
        printf("\n\nSearch Event Not Found.");
    }


 printf("\n\n\n");

    int found3 = 0;
    char name1[100],dname[100],n2[100];

    long int g,due2,amount;

    FILE *p2 = fopen("paybooking.txt", "r");

    if (p2 == NULL)
    {
        printf("File not found!\n");
        return;
    }

    while (fscanf(p2,"%s\t%ld\t%ld\t%ld\t%s\t%s\n", name1, &g, &amount, &due2, dname, n2) != EOF)
    {
        if (strcmp(searchName, name1) == 0 &&  strcmp(number, n2) == 0)

        {
        printf("\n");
        printf("\t\t\t\t\t");
        drawLine(30);
        printf("\t\t\t\t\tPayment Details\n\n");
        printf("\t\t\t\t\tName\t:%s\n\t\t\t\t\tGuest\t:%ld\n\t\t\t\t\tPayment :%ld\n\t\t\t\t\tDue\t:%ld\n\t\t\t\t\tDate\t:%s\n\t\t\t\t\tNumber\t:%s\n", name1, g, amount, due, dname, n2);
        printf("\t\t\t\t\t");
        drawLine(30);
        printf("\n\n");
        found3=1;
        }

    }

    fclose(p2);



    if(found3==0)
    {
        printf("\n\nSearch Event Not Found.");
    }


    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

    return 0;

}



Event_Approval()
{
    char pname[100],dname[100],uname[100],vname[100],ename[100],number[100],approve[100];


    char paname[100], ynumber[100],xname[100],pvname[100],zname[100];

    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Event Booking List----->>>>>\n");
    drawLine(120);
    printf("\n\n");
    FILE *M = fopen("booking.txt", "r");

    if (M == NULL)
    {
        printf("File not found!\n");
        return;
    }

    printf("Event Type\tName\tNumber\t\tVenue\tPlace\n");
    drawLine(70);
    while (fscanf(M,"%s\t%s\t%s\t%s\t%s\n", zname, xname, ynumber, pvname, paname) != EOF)
    {
        printf("%s\t%s\t%s\t%s\t%s\n", zname, xname, ynumber, pvname, paname);
    }

    fclose(M);

    printf("\n\n\n");


    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Event Approval----->>>>>\n");
    drawLine(120);
    printf("\n\n");
    getchar();
    printf("Enter Event Type: ");
    gets(ename);
    printf("Enter User Name: ");
    gets(uname);
    printf("Enter User Number: ");
    gets(number);
    printf("Enter Place Name: ");
    gets(pname);
    printf("Enter Venue Name: ");
    gets(vname);
    printf("Enter Event Date: ");
    gets(dname);
    printf("Enter Event Status: ");
    gets(approve);

    printf("\n\n");

    FILE *p;

    p = fopen("approveEventbooking.txt", "a");
    if (p == NULL)
    {
        printf("File not found!\n");
        return;
    }

    fprintf(p,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n", ename, uname, number, vname, dname, approve, pname);

    fclose(p);



}


View_Event_Approval()
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

Event_Selection()
{
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Event Selection----->>>>>\n");
    drawLine(120);
    printf("\n\n\n");

    printf("\t\t\t\t    <<<<<-----[Available Event Type]----->>>>>\n");
    for(int i=1; i<=120; i++)
    {
        printf("-");
    }
    printf("\n\n");
    printf("[A].Marriage Event Booking.\n\n");
    printf("[B].Birthday Event Booking.\n\n");
    printf("[C].Institution Event Booking.\n\n");
    printf("[D].Cultural Event Booking.\n\n");
    printf("[E].Seminar Event Booking.\n\n\n");
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");

    drawLine(120);
    printf("\t\t\t\t\t    <<<<<-----Decision----->>>>>\n");
    drawLine(120);
    printf("\n\n");
    int cho;
    printf("[1].Event Booking.\n\n[2].Back To Customer Dashboard.");
    printf("\n\nEnter your Choice: ");
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
Booking()
{
    char pname[100],dname[100],uname[100],vname[100],ename[100],number[100],email[100];
    int g,b,cho;

    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Event Booking----->>>>>\n");
    drawLine(120);
    printf("\n\n");
    getchar();

    printf("Enter Event Type: ");
    gets(ename);
    printf("Enter User Name: ");
    gets(uname);
    printf("Enter User Number: ");
    gets(number);
    printf("Enter User Email: ");
    gets(email);

    printf("\n");
    while (1)
{
    printf("<<<Place Name>>>\n");
    drawLine(20);
    printf("\n[1].Dhaka");
    printf("\n[2].Chattogram");
    printf("\n[3].Rajshahi");
    printf("\n[4].Gazipur");
    printf("\n[5].Tangail");
    printf("\n\nEnter Your Choice: ");
    scanf("%d", &cho);
    getchar();

    if (cho ==1 )
    {
        while (1)
        {
            printf("\nEnter Place Name: ");
            gets(pname);

            FILE *log2 = fopen("dhaka.txt", "r");
            if (!log2) {
                printf("File not found!\n");
                exit(1);
            }

            int found = 0;
            char cname[100];

            while (fscanf(log2, "%s", cname) != EOF)
            {
                if (strcmp(pname, cname) == 0)
                {
                    printf("\n<<<Venue Name>>>\n");
                    drawLine(20);
                    printf("\n\t[1].Dhaka Convention Center(DCC)\n\t[2].International Convention City Bashundhara (ICCB)");
                    found = 1;
                    break;
                }
            }
            fclose(log2);

            if (!found)
            {
                printf("\nWrong Format Try again....\n");
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
            printf("\nEnter Place Name: ");
            gets(pname);

            FILE *log2 = fopen("Chattogram.txt", "r");
            if (!log2) {
                printf("File not found!\n");
                exit(1);
            }

            int found = 0;
            char cname[100];

            while (fscanf(log2, "%s", cname) != EOF)
            {
                if (strcmp(pname, cname) == 0)
                {
                    printf("\n<<<Venue Name>>>\n");
                    drawLine(20);
                    printf("\n\t[1].GEC Covention Center(GCC)\n\t[2].Radisson Blu Chattogram Bay View(RBCBY)");
                    found = 1;
                    break;
                }
            }
            fclose(log2);

            if (!found)
            {
                printf("\nWrong Format Try again....\n");
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
            printf("\nEnter Place Name: ");
            gets(pname);

            FILE *log2 = fopen("Rajshahi.txt", "r");
            if (!log2) {
                printf("File not found!\n");
                exit(1);
            }

            int found = 0;
            char cname[100];

            while (fscanf(log2, "%s", cname) != EOF)
            {
                if (strcmp(pname, cname) == 0)
                {
                    printf("\n<<<Venue Name>>>\n");
                    drawLine(20);
                    printf("\n\t[1].Padma Convention Center(PCC)\n\t[2].Hotel Nice International Banquet Hall(HNIBH)");
                    found = 1;
                    break;
                }
            }
            fclose(log2);

            if (!found)
            {
                printf("\nWrong Format Try again....\n");
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
            printf("\nEnter Place Name: ");
            gets(pname);

            FILE *log2 = fopen("Gazipur.txt", "r");
            if (!log2) {
                printf("File not found!\n");
                exit(1);
            }

            int found = 0;
            char cname[100];

            while (fscanf(log2, "%s", cname) != EOF)
            {
                if (strcmp(pname, cname) == 0)
                {
                    printf("\n<<<Venue Name>>>\n");
                    drawLine(20);
                    printf("\n\t[1].Dream Square Resort(DSR)\n\t[2].Padma Resort(PR)");
                    found = 1;
                    break;
                }
            }
            fclose(log2);

            if (!found)
            {
                printf("\nWrong Format Try again....\n");
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
            printf("\nEnter Place Name: ");
            gets(pname);

            FILE *log2 = fopen("Tangail.txt", "r");
            if (!log2) {
                printf("File not found!\n");
                exit(1);
            }

            int found = 0;
            char cname[100];

            while (fscanf(log2, "%s", cname) != EOF)
            {
                if (strcmp(pname, cname) == 0)
                {
                    printf("\n<<<Venue Name>>>\n");
                    drawLine(20);
                    printf("\n\t[1].Tangail Town Convention Hall(TTCH)\n\t[2].Elenga Resort(ER)");
                    found = 1;
                    break;
                }
            }
            fclose(log2);

            if (!found)
            {
                printf("\nWrong Format Try again....\n");
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
        printf("\nWrong Choice, try again...\n\n");
    }
}



    while(1)
    {
        printf("\n\nEnter Venue Name[Like (DCC)]: ");
        gets(vname);
        FILE *log1;
        log1 = fopen("venu.txt", "r");

        int found = 0;
        char ckname[100];

        while (fscanf(log1,"%s", ckname) != EOF)
        {
            if (strcmp(vname, ckname) == 0)
            {
                printf("\nSuccessfully select venue\n");
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("\nWrong Format Try again....\n");
        }
        else
        {
            break;
        }
        fclose(log1);
    }

    system("CLS");



    printf("\nBooking successfully\n\n");
    printf("Complete Your Payment\n\n");
    printf("Any key to continue..........");
    getch();
    system("CLS");


    FILE *M;

    M = fopen("booking.txt", "a");
    if (M == NULL)
    {
        printf("File not found!\n");
        return;
    }

    fprintf(M,"%s\t%s\t%s\t%s\t%s\n", ename, uname, number, vname, pname);

    fclose(M);


    paymentp();

}



paymentp()
{
    long int g,b,a,c,d,e,f,i,h,amount,cho,return_tk,due;
    char dname[100];
    int found=0;

    while(1)
    {
        printf("\n\nEnter Number of Guest[MAX-100]: ");
    scanf("%ld",&g);
    getchar();
    if (g > 0 && g <= 40)
    {
        printf("\n***Budget Type***\n");
        drawLine(20);
        a=g*500;
        b=g*750;
        printf("\n\t[1].Common Type[%ld TK]\n\t[2].Premium Type[%ld TK]",a,b);
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&cho);
        if(cho==1)
        {
            amount=a;
        }
        else
        {
            amount=b;
        }
        getchar();
        break;
    }
    else if (g > 40 && g <= 60)
    {
        printf("\n***Budget Type***\n");
        drawLine(20);
        c=g*450;
        d=g*675;
        printf("You've got [10 Percent] discount on the original Budget price\n\n");
        printf("\n\t[1].Common Type[%ld TK]\n\t[2].Premium Type[%ld TK]",c,d);
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&cho);
        if(cho==1)
        {
            amount=c;
        }
        else
        {
            amount=d;
        }
        getchar();
        found=1;
        break;
    }
    else if (g > 60 && g <= 80)
    {
        printf("\n***Budget Type***\n");
        drawLine(20);
        e=g*400;
        f=g*600;
        printf("You've got [20 Percent] discount on the original Budget price\n\n");
        printf("\n\t[1].Common Type[%ld TK]\n\t[2].Premium Type[%ld TK]",e,f);
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&cho);
        if(cho==1)
        {
            amount=e;
        }
        else
        {
            amount=f;
        }
        getchar();
        found=1;
        break;
    }
    else if (g > 80 && g <= 100)
    {
        printf("\n***Budget Type***\n");
        drawLine(20);
        i=350*g;
        h=525*g;
        printf("You've got [30 Percent] discount on the original Budget price\n\n");
        printf("\n\t[1].Common Type[%ld TK]\n\t[2].Premium Type[%ld TK]",i,h);
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&cho);
        if(cho==1)
        {
            amount=i;
        }
        else
        {
            amount=h;
        }
        getchar();
        found=1;
        break;
    }
    else
    {
        printf("\nInvalid guest number.\n");
    }

    if(found==1)
        break;

    }


    printf("Enter Date[Like 3-May]: ");
    gets(dname);






    printf("\nSelect Payment Method\n1.Bkash\n2.Nagad\n3.Bank\n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d",&ch);
    long int amu,n;
    char name[100];
    getchar();
    if(ch==1 || ch==2)
    {
        long int p;
        printf("Enter User Name: ");
        gets(name);
        printf("Enter Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&amu);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }
    else if(ch==3)
    {
        long int n,p;
        printf("Enter User Name: ");
        gets(name);
        printf("Enter Account Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&amu);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }

    printf("\n");

    if(amu==amount)
    {
        printf("\nPayment successfully\n");
    }
    else if(amu>amount)
    {
        return_tk=amu-amount;
        printf("\nPayment successfully.Return %d Tk.\n",return_tk);
    }
    else if(amu<amount)
    {
        due=amount-amu;
        printf("\nPayment Not successfully.Due %d Tk.\n",due);
    }


    FILE *p;

    p = fopen("paybooking.txt", "a");
    if (p == NULL)
    {
        printf("File not found!\n");
        return;
    }

    fprintf(p,"%s\t%ld\t%ld\t%ld\t%s\t%ld\n", name, g, amu, due, dname, n);

    fclose(p);



    printf("\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();

}

view_payment()
{

    char name[100],dname[100];

    long int g,n,due,amount;

    FILE *p = fopen("paybooking.txt", "r");

    if (p == NULL)
    {
        printf("File not found!\n");
        return;
    }
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Payment List----->>>>>\n");
    drawLine(120);
    printf("\n\n");



    while (fscanf(p,"%s\t%ld\t%ld\t%ld\t%s\t%ld\n", name, &g, &amount, &due, dname, &n) != EOF)
    {
        printf("\t\t\t\t\t");
        drawLine(30);
        printf("\t\t\t\t\tPayment Details\n\n");
        printf("\t\t\t\t\tName\t:%s\n\t\t\t\t\tGuest\t:%ld\n\t\t\t\t\tPayment :%ld\n\t\t\t\t\tDue\t:%ld\n\t\t\t\t\tDate\t:%s\n\t\t\t\t\tNumber\t:%ld\n", name, g, amount, due, dname, n);
        printf("\t\t\t\t\t");
        drawLine(30);
        printf("\n\n");
    }

    fclose(p);


    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();
}



View_Event_Information()
{
    char pname[100], number[100],uname[100],vname[100],ename[100];

    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Event Booking List----->>>>>\n");
    drawLine(120);
    printf("\n\n");
    FILE *M = fopen("booking.txt", "r");

    if (M == NULL)
    {
        printf("File not found!\n");
        return;
    }

    printf("Event Type\tName\tNumber\t\tVenue\tPlace\n");
    drawLine(120);
    while (fscanf(M,"%s\t%s\t%s\t%s\t%s\n", ename, uname, number, vname, pname) != EOF)
    {
        printf("%s\t%s\t%s\t%s\t%s\n", ename, uname, number, vname, pname);
    }

    fclose(M);


    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");

}

userview()
{
    View_Event_Information();
    coustomer_dashboard();

}
adminview()
{
   View_Event_Information();
   admin_dashboard();
}


Service_Request()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Service Request----->>>>>\n");
    drawLine(120);
    printf("\n");

    char a[100];
    int c1,c2,c3,c4,s1,s2,s3,s4;
    printf("\nDecoration Services\n\t[1].Stage.(10000TK)\n\t[2].Floral.(12000TK)\n\t[3].Balloon.(5000TK)\n");
    printf("\nEnter Your Choice: ");
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
        printf("\nWrong choice...\n\n");
    }

    break;
    }
    getchar();
    printf("\nWrite Here: ");
    gets(a);

    char b[100];
    printf("\nLighting Services\n\t1.Yes(4000TK)\n\t2.No\n");
    printf("\nEnter Your Choice: ");
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
        printf("\nWrong choice...\n\n");
    }

    break;
    }
    getchar();
    printf("\nWrite Here: ");
    gets(b);

    char c[100];
    printf("\nSound System Setup Services\n\t1.Yes(3000TK)\n\t2.No\n");
    printf("\nEnter Your Choice: ");
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
        printf("\nWrong choice...\n\n");
    }

    break;
    }
    getchar();
    printf("\nWrite Here: ");
    gets(c);

    char d[100];
    printf("\nPhotography & Videography Services\n\t1.Yes(2000TK)\n\t2.No\n");
    printf("\nEnter Your Choice: ");
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
        printf("\nWrong choice...\n\n");
    }

    break;
    }
    getchar();
    printf("\nWrite Here: ");
    gets(d);


    int sum;

    sum=s1+s2+s3+s4;




    system("CLS");
    printf("Complete Your Payment %d Tk\n",sum);
    printf("\nSelect Payment Method\n1.Bkash\n2.Nagad\n3.Bank\n");

    int che;
    printf("Enter your Choice: ");
    scanf("%d",&che);





    long int amu,n,due;
    char name[100];
    getchar();
    if(che==1 || che==2)
    {
        long int p;
        printf("Enter User Name: ");
        gets(name);
        printf("Enter Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&amu);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }
    else if(che==3)
    {
        long int n,p;
        printf("Enter User Name: ");
        gets(name);
        printf("Enter Account Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&amu);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }


    printf("\n");

    if(sum==amu)
    {
        due=0;
        printf("\nPayment successfully\n");
    }
    else if(amu>sum)
    {
        due=0;
        printf("\nPayment successfully.Return %ld Tk.\n",amu-sum);
    }
    else if(amu<sum)
    {
        due=sum-amu;
        printf("\nPayment Not successfully.Due %ld Tk.\n",due);
    }



    FILE *sr;
    sr = fopen("service_request.txt", "a");
    if (sr == NULL)
    {
        printf("File not found!\n");
        return;
    }
    fprintf(sr,"%s %s %s %s %s %ld %ld %ld\n", name, a, b, c, d, amu, due, n);


    fclose(sr);

    printf("Your service request has been recorded.\n");
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();

}
View_Service_Request()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----View Service Request----->>>>>\n");
    drawLine(120);
    printf("\n");
    FILE *sr = fopen("service_request.txt", "r");
    if (sr == NULL)
    {
        printf("File not found!\n");
        return;
    }

    char n[100], a[100], b[100], c[100], d[100];
    long int amu,p,due;

    printf("Name\tDecoration\tLighting\tSound\tPhoto/Video\tPayment\tDue\tNumber\n");
    drawLine(120);

    while (fscanf(sr, "%s\t%s\t%s\t%s\t%s\t%ld\t%ld\t%ld\n", n, a, b, c, d, &amu, &due, &p) != EOF)
    {
        printf("%s\t%s\t\t%s\t\t%s\t%s\t\t%ld\t%ld\t%ld\n", n, a, b, c, d, amu, due, p);
    }

    fclose(sr);
    printf("\n\nPress any key to continue...");
    getch();
    system("CLS");
    admin_dashboard();
}

Equipment_Rental()
{
    char equipment[100];
    int quantity,m,a;
    FILE *file;

    getchar();
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Equipment Rental Service----->>>>>\n");
    drawLine(120);
    printf("\n");
    printf("Available Equipment:\n");
    printf("1. Microphone(500TK)\n");
    printf("2. Speaker(1000TK)\n");
    printf("3. Chairs(50TK)\n");
    printf("4. Tables(100TK)\n");
    printf("5. Lights(20TK)\n");

    printf("\nEnter your Choice: ");
    scanf("%d",&m);
    getchar();
    printf("\nEnter Equipment Name to Rent: ");
    gets(equipment);

    printf("Enter Quantity: ");
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
    printf("Complete Your Payment %d Tk\n",a);
    printf("\nSelect Payment Method\n1.Bkash\n2.Nagad\n3.Bank\n");

    int c;
    printf("Enter your Choice: ");
    scanf("%d",&c);





    long int amu,n,due;
    char name[100];
    getchar();
    if(c==1 || c==2)
    {
        long int p;
        printf("Enter User Name: ");
        gets(name);
        printf("Enter Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&amu);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }
    else if(c==3)
    {
        long int n,p;
        printf("Enter User Name: ");
        gets(name);
        printf("Enter Account Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&amu);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }


    printf("\n");

    if(a==amu)
    {
        due=0;
        printf("\nPayment successfully\n");
    }
    else if(amu>a)
    {
        due=0;
        printf("\nPayment successfully.Return %ld Tk.\n",amu-a);
    }
    else if(amu<a)
    {
        due=a-amu;
        printf("\nPayment Not successfully.Due %ld Tk.\n",due);
    }



    file = fopen("equipment_rental.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fprintf(file, "%s %s %d %ld %ld %ld\n", name, equipment, quantity, amu, due, n);
    fclose(file);

    printf("\nYour equipment rental request has been recorded.\n");
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();
}

View_Equipment_Rental_Request()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----View Equipment Rental Request----->>>>>\n");
    drawLine(120);
    printf("\n");
    FILE *file;
    file = fopen("equipment_rental.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }


    printf("Name\t\tEquipment\t\tCount\tPay Amount\tDue\t\tNumber\n");
    drawLine(120);
    printf("\n");


    char name[100],equipment[100];
    int quantity;
    long int  amu, due, n;

    while (fscanf(file,"%s\t\t%s\t\t%d\t%ld\t%ld\t\t%ld\n", name, equipment, &quantity, &amu, &due, &n) != EOF)
    {
        printf("%s\t\t%s\t\t%d\t%ld\t\t%ld\t\t%ld\n", name, equipment, quantity, amu, due, n);
    }

    fclose(file);

    printf("\n\nPress any key to continue...");
    getch();
    system("CLS");
    admin_dashboard();
}
Submit_Feedback()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t<<<<<-----Submit Feedback----->>>>>\n");
    drawLine(120);
    printf("\n");
    char name[50], feedback[500];
    FILE *file;

    getchar();
    printf("Enter your name: ");
    gets(name);

    printf("\nWrite your feedback:\n");
    gets(feedback);

    file = fopen("feedback.txt", "a");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "Name: %s\n\n=>Feedback: %s\n\n\n", name, feedback);
    fclose(file);

    printf("\nThank you! Your feedback has been recorded.\n");
    printf("Any key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();

}
Contact_Us()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Contact Us---->>>>>\n");
    drawLine(120);
    printf("\n");

    printf("--------\nPhone\n--------\n\t[1].01960603846\n\t[2].0183947489\n\t[3].0168383888\n\n");
    printf("--------\nEmail\n--------\n\t[1].mahim242-35-705@diu.edu.bd\n\t[2].tamim242-35-858@diu.edu.bd\n\t[3].shahed242-35-590@diu.edu.bd");

    printf("\n\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();
}
View_Feedback_History()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t<<<<<-----View Feedback History----->>>>>\n");
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

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}

Manage_Discount_and_Offer()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t   <<<<<-----Manage Discount and Offer----->>>>>\n");
    drawLine(120);
    printf("\n");
    printf("\nManage Discount and Offer\n\n\t[1].View Discount and Offer\n\n\t[2].Add Discount and Offer\n");
    int n;
    printf("\n\nEnter Your Choice: ");
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
add()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----ADD Discount and Offer----->>>>>\n");
    drawLine(120);
    printf("\n");

    char a[5000];
    FILE *file;

    getchar();
    printf("Write Discount and Offer\n");
    gets(a);

    file = fopen("Discount_and_Offer.txt", "a");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "%s\n", "W" );
    fclose(file);

    printf("\nAdd Successfully\n");

    printf("\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}


viewa()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t<<<<<-----View Discount and Offer----->>>>>\n");
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

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();


}
viewadm()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t    <<<<<-----View Discount and Offer----->>>>>\n");
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

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();


}


Rules_and_Condition()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t     <<<<<-----Rules and Condition----->>>>>\n");
    drawLine(120);
    printf("\n");

    printf("Rules and Condition\n\n\t[1].View Rules and Condition\n\n\t[2].Add Rules and Condition\n");
    int n;
    printf("\n\nEnter Your Choice: ");
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
addr()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t<<<<<-----Add Rules and Condition----->>>>>\n");
    drawLine(120);
    printf("\n");

    char a[5000];
    FILE *file;

    getchar();
    printf("\n\nWrite Rules and Condition\n");
    gets(a);

    file = fopen("Rules_and_Condition.txt", "a");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "%s\n", a);
    fclose(file);

    printf("\nAdd Successfully\n");

    printf("\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}
viewad()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----View Rules and Condition----->>>>>\n");
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

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("Any key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();
}

viewr()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Rules and Condition----->>>>>\n");
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

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
    printf("Any key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();
}
add_item()
{


    FILE *log;

    log = fopen("venu.txt", "a");
    if (log == NULL)
    {
        printf("File not found!\n");
        return;
    }
    char vname[100];
    getchar();
    printf("\nenter venue: ");
    gets(vname);
    fprintf(log, "%s\n", vname);

    fclose(log);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();

}
getPassword(char *pass)
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
            printf("#");
        }
    }
}


change_password() {
    struct login l;
    char uname[100], old_pass[100], new_pass[100];
    int found = 0;

    FILE *fp = fopen("login.txt", "r");
    FILE *temp1 = fopen("temp1.txt", "w");

    if (fp == NULL) {
        printf("User file not found!\n");
        return;
    }

    printf("Enter Username: ");
    scanf("%s", uname);
    printf("Enter Current Password: ");
    getPassword(old_pass);

    while (fscanf(fp, "%s %s %s %s %s",
                  l.fname, l.lname, l.username, l.pass, l.num) != EOF) {
        if (strcmp(l.username, uname) == 0 && strcmp(l.pass, old_pass) == 0) {
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






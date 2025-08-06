#include<stdio.h>
drawLine(int len)
{
    for (int i = 0; i < len; i++) printf("=");
    printf("\n");
}
int main()
{
    int cho,cho2,cho3;
    drawLine(50);
    printf("\t<<<<<-----WELCOME EVENTRIX----->>>>>\n");
    drawLine(50);
    printf("\n\n");
    printf("[1].User/Coustomer.\n");
    printf("[2].Admin/Manager.\n");
    printf("[3].Exit.\n\n");
    printf("Enter your Choice: ");
    scanf("%d",&cho);
    if (cho == 1)
    {
        system("CLS");
        drawLine(50);
        printf("<<<<<-----User Registration/Login Page----->>>>>\n");
        drawLine(50);
        printf("\n\n");
        printf("1.Registration.\n");
        printf("2.Login.\n");
        printf("0.Back.\n\n");
        printf("Enter your Choice: ");
        scanf("%d",&cho2);
        printf("\n\n");
        if(cho2==1)
        {
            system("CLS");
            drawLine(37);
            printf("<<<<<-----User Registration----->>>>>\n");
            drawLine(37);
            printf("\n\n");
            registe();
        }
        else if(cho2==2)
        {
            system("CLS");
            drawLine(32);
            printf("<<<<<-----User Login----->>>>>\n");
            drawLine(32);
            printf("\n\n");
            login();
        }
        else if(cho3==0)
        {
            system("CLS");
            main();
        }
    }
    else if (cho == 2)
    {
        system("CLS");
        drawLine(50);
        printf("<<<<<-----Admin Registration/Login Page----->>>>>\n");
        drawLine(50);
        printf("\n\n");
        printf("1.Registration.\n");
        printf("2.Login.\n");
        printf("0.Back.\n\n");
        printf("Enter your Choice: ");
        scanf("%d",&cho3);
        printf("\n\n");
        if(cho3==1)
        {
            system("CLS");
            drawLine(37);
            printf("<<<<<-----Admin Registration----->>>>>\n");
            drawLine(37);
            printf("\n\n");
            registeA();
        }
        else if(cho3==2)
        {
            system("CLS");
            drawLine(32);
            printf("<<<<<-----Admin Login----->>>>>\n");
            drawLine(32);
            printf("\n\n");
            loginA();
        }
        else if(cho3==0)
        {
            system("CLS");
            main();
        }
    }


}
struct login
{

    char fname[100];
    char lname[100];
    char username[100];
    char pass[100];
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
    printf("Enter password: ");
    scanf("%s", l.pass);

    FILE *log;

    log = fopen("login.txt", "a");
    if (log == NULL)
    {
        printf("File not found!\n");
        return;
    }


    fprintf(log, "%s\t\t%s\t\t%s\t\t%s\n", l.fname, l.lname, l.username, l.pass);

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
    printf("Enter password: ");
    scanf("%s", l.pass);
    fprintf(log1, "%s\t\t%s\t\t%s\t\t%s\n", l.fname, l.lname, l.username, l.pass);

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
    scanf("%s", pass);

    int found = 0;

    while (fscanf(log,"%s\t\t%s\t\t%s\t\t%s", l.fname, l.lname, l.username, l.pass) != EOF)
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
    scanf("%s", passA);

    int found = 0;

    while (fscanf(log1,"%s\t\t%s\t\t%s\t\t%s", l.fname, l.lname, l.username, l.pass) != EOF)
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
    printf("\t\t\t\t<<<<<-----Delete Event----->>>>>\n");
    drawLine(120);
    printf("\n");

    char searchName[100];
    getchar();
    printf("Enter user name to delete: ");
    gets(searchName);

    FILE *M = fopen("booking.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (M == NULL || temp == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    int found = 0;

    char ename[100], uname[100], pname[100], vname[100], dname[100];
    int g, b;
    long int a;

    while (fscanf(M, "%s %s %s %s %d %d %s %ld", ename, uname, pname, vname, &g, &b, dname, &a) != EOF)
    {
        if (strcmp(uname, searchName) == 0)
        {
            found = 1;
            continue;
        }

        fprintf(temp, "%s %s %s %s %d %d %s %ld\n", ename, uname, pname, vname, g, b, dname, a);
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
    drawLine(50);
    printf("\t<<<<<-----Customer Dashboard----->>>>>\n");
    drawLine(50);
    printf("\n\n");
    printf("[1].Event Selection\n");
    printf("[2].View Booking Event Information.\n");
    printf("[3].Service Request\n");
    printf("[4].Equipment Rental\n");
    printf("[5].View Offer for Discount\n");
    printf("[6].View Rules and Condition\n");
    printf("[7].Password Change\n");
    printf("[8].Submit Feedback\n");
    printf("[9].Contact Us\n");
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
        View_Event_Information();
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
        printf("\n");
        printf("\nComming Soon.....");
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
    else
    {
        system("CLS");
        main();
    }

}

int admin_dashboard()
{
    drawLine(50);
    printf("\t<<<<<-----Admin Dashboard----->>>>>\n");
    drawLine(50);
    printf("\n1.View All Event\n");
    printf("2.Find Event.\n");
    printf("3.Event Approval\n");
    printf("4.View Service Request\n");
    printf("5.View Equipment Rental Request\n");
    printf("6.Delete Event\n");
    printf("7.Update Event Items\n");
    printf("8.Manage Discount and Offer\n");
    printf("9.Set Rules and Condition\n");
    printf("10.View Feedback History\n");
    printf("[0].Home Page\n");
    int ch;
    printf("Enter your Choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
        View_Event_Information_AD();
    }
    else if(ch==2)
    {
        system("CLS");
        drawLine(120);
        printf("\t\t\t\t<<<<<-----Find Event----->>>>>\n");
        drawLine(120);
        printf("\n");
        printf("\nComming soon......");
        printf("\n\nAny key to continue..........");
        getch();
        system("CLS");
        admin_dashboard();
    }
    else if(ch==3)
    {
        system("CLS");
        drawLine(120);
        printf("\t\t\t\t<<<<<-----Event Approval----->>>>>\n");
        drawLine(120);
        printf("\n");
        printf("\nComming soon......");
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
        Delete_Event();
    }
    else if(ch==7)
    {
        system("CLS");
        drawLine(120);
        printf("\t\t\t\t<<<<<-----Update Event Items----->>>>>\n");
        drawLine(120);
        printf("\n");
        printf("\nComming soon......");
        printf("\n\nAny key to continue..........");
        getch();
        system("CLS");
        admin_dashboard();
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
    else
    {
        system("CLS");
        main();
    }

}
Event_Selection()
{
    drawLine(50);
    printf("\t<<<<<-----Event Selection----->>>>>\n");
    drawLine(50);
    printf("\n\n");
    printf("1.Marriage Event Booking.\n\n");
    printf("2.Birthday Event Booking.\n\n");
    printf("3.Institution Event Booking.\n\n");
    printf("4.Cultural Event Booking.\n\n");
    printf("5.Seminar Event Booking.\n\n\n");
    int che;
    printf("Enter your Choice: ");
    scanf("%d",&che);

    if(che==1 || che==2 || che==3 || che==4 || che==5  )
    {
        system("CLS");
        Booking();
    }
    else
    {
        system("CLS");
        Event_Selection();
    }


}
Booking()
{
    char pname[100],dname[100],uname[100],vname[100],ename[100];
    int g,b;
    drawLine(50);
    printf("\t<<<<<-----Event Booking----->>>>>\n");
    drawLine(50);
    printf("\n\n");
    getchar();

    printf("Enter Event Type: ");
    gets(ename);
    printf("Enter User Name: ");
    gets(uname);
    printf("\n");
    printf("<<<Place Name>>>\n");
    drawLine(20);

    printf("[1].Dhaka\n\t||Venue Name||\n\t\t[A].Dhaka Convention Center(DCC)\n\t\t[B].International Convention City Bashundhara (ICCB)");
    printf("\n[2].Chattogram\n\t||Venue Name||\n\t\t[A].GEC Convention Center(GCC)\n\t\t[B].Radisson Blu Chattogram Bay View(RBCBY)");
    printf("\n[3].Rajshahi\n\t||Venue Name||\n\t\t[A].Padma Convention Center(PCC)\n\t\t[B].Hotel Nice International Banquet Hall(HNIBH)");
    printf("\n[4].Gazipur\n\t||Venue Name||\n\t\t[A].Dream Square Resort(DSR)\n\t\t[B].Padma Resort(PR)");
    printf("\n[5].Tangail\n\t||Venue Name||\n\t\t[A].Tangail Town Convention Hall(TTCH)\n\t\t[B].Elenga Resort(ER)");
    printf("\n\nEnter Place Name: ");
    gets(pname);
    printf("Enter Venue Name[Like (DCC)]: ");
    gets(vname);

    printf("Enter Number of Guest[MAX-100]: ");
    scanf("%d",&g);
    getchar();
    printf("\n***Budget Type***\n");
    if(0<g || g<21 )
    {
        printf("\n\t[1].Common Type[15000 TK]\n\t[2].Premium Type[20000 TK]");
    }
    else if(20<g || g>41)
    {
        printf("\n\t[1].Common Type[30000 TK]\n\t[2].Premium Type[40000 TK]");
    }
    else if(40<g || g<61 )
    {
        printf("\n\t[1].Common Type[45000 TK]\n\t[2].Premium Type[60000 TK]");
    }
    else if(60<g || g>81)
    {
        printf("\n\t[1].Common Type[60000 TK]\n\t[2].Premium Type[800000 TK]");
    }
    else if(80<g || g>101)
    {
        printf("\n\t[1].Common Type[75000 TK]\n\t[2].Premium Type[900000 TK]");
    }

    printf("\n\nEnter Budget: ");
    scanf("%d",&b);
    getchar();
    printf("Enter Date[Like 3-May]: ");
    gets(dname);

    printf("\nBooking successfully\n\n");
    printf("Complete Your Payment\n");
    printf("\nSelect Payment Method\n1.Bkash\n2.Nagad\n3.Bank\n");

    int c;
    printf("Enter your Choice: ");
    scanf("%d",&c);
    long int a;
    if(c==1 || c==2)
    {
        long int n;
        printf("Enter Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&a);
    }
    else if(c==3)
    {
        long int k,p;
        printf("Enter Account Number:");
        scanf("%ld",&k);
        printf("Enter Amount:");
        scanf("%ld",&a);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }

    printf("\n");

    if(a==b)
    {
        printf("\nPayment successfully\n");
    }
    else if(a>b)
    {
        printf("\nPayment successfully.Return %d Tk.\n",a-b);
    }
    else if(a<b)
    {
        printf("\nPayment Not successfully.Due %d Tk.\n",b-a);
    }
    FILE *M;

    M = fopen("booking.txt", "a");
    if (M == NULL)
    {
        printf("File not found!\n");
        return;
    }

    fprintf(M,"%s %s %s %s %d %d %s %ld\n", ename, uname, pname, vname, g, b, dname, a);

    fclose(M);
    printf("Any key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();

}
View_Event_Information()
{
    char pname[100], dname[100],uname[100],vname[100],ename[100];
    int g, b;
    long int a;
    FILE *M = fopen("booking.txt", "r");

    if (M == NULL)
    {
        printf("File not found!\n");
        return;
    }
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Event Booking List----->>>>>\n");
    drawLine(120);
    printf("\n");
    while (fscanf(M, "%s %s %s %s %d %d %s %ld",ename, uname, pname, vname, &g, &b, dname, &a) != EOF)
    {
        printf("Type:%s | Name:%s | Place: %s | Venue: %s | Guest: %d | Budget: %d | Date: %s | Pay Amount: %ld\n", ename, uname, pname, vname, g, b, dname, a);
    }

    fclose(M);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    coustomer_dashboard();
}

/* Payment_Process()
{
    printf("Select Payment Method\n1.Bkash\n2.Nagad\n3.Bank\n");

    int c;
    printf("Enter your Choice: ");
    scanf("%d",&c);

    if(c==1)
    {
        long int n,a;
        printf("Enter Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&a);

        FILE *M;
        M = fopen("booking.txt", "r");

        int found = 0;
        char pname[100], dname[100];
        int g, b;

        while (fscanf(M, " %s %d %s %d", pname, &g, dname, &b) != EOF)
        {
            if (a==b)
            {
                printf("\nSuccessfully Payment\n");
                found = 1;
                break;
            }
            else if(a>b)
            {
                printf("\nSuccessfully Payment\n");
                printf("Return %d TK",a-b);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("\nNot Successfully Payment\n");
        }
        fclose(M);
    }

}*/
View_Event_Information_AD()
{
    char pname[100], dname[100],uname[100],vname[100],ename[100];
    int g, b;
    long int a;
    FILE *M = fopen("booking.txt", "r");

    if (M == NULL)
    {
        printf("File not found!\n");
        return;
    }
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Event Booking List----->>>>>\n");
    drawLine(120);
    printf("\n");
    while (fscanf(M, "%s %s %s %s %d %d %s %ld",ename, uname, pname, vname, &g, &b, dname, &a) != EOF)
    {
        printf("Type:%s | Name:%s | Place: %s | Venue: %s | Guest: %d | Budget: %d | Date: %s | Pay Amount: %ld\n", ename, uname, pname, vname, g, b, dname, a);
    }

    fclose(M);
    printf("\n\nAny key to continue..........");
    getch();
    system("CLS");
    admin_dashboard();
}
Service_Request()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t\t<<<<<-----Service Request----->>>>>\n");
    drawLine(120);
    printf("\n");
    char n[100];
    getchar();
    printf("Enter Your Name: ");
    gets(n);
    char a[100];

    printf("\nDecoration Services\n\t1.Stage.\n\t2.Floral.\n\t3.Balloon.\n");
    printf("Write Here: ");
    gets(a);

    char b[100];

    printf("Lighting Services\n\t1.Yes\n\t2.No\n");
    printf("Write Here: ");
    gets(b);
    char c[100];

    printf("Sound System Setup Services\n\t1.Yes\n\t2.No\n");
    printf("Write Here: ");
    gets(c);
    char d[100];
    printf("Photography & Videography Services\n\t1.Yes\n\t2.No\n");
    printf("Write Here: ");
    gets(d);

    FILE *sr;
    sr = fopen("service_request.txt", "a");
    if (sr == NULL)
    {
        printf("File not found!\n");
        return;
    }
    fprintf(sr,"%s %s %s %s %s", n, a, b, c, d);


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
    printf("Name\tDecoration\tLighting\tSound\tPhoto/Video\n");
    drawLine(60);

    while (fscanf(sr, "%s\t%s\t%s\t%s\t%s\n", n, a, b, c, d) != EOF)
    {
        printf("%s\t%s\t\t%s\t\t%s\t%s\n", n, a, b, c, d);
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
    char name[100];
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

    printf("\nEnter Your Name: ");
    gets(name);

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

    printf("Complete Your Payment %d Tk\n",a);
    printf("\nSelect Payment Method\n1.Bkash\n2.Nagad\n3.Bank\n");

    int c;
    printf("Enter your Choice: ");
    scanf("%d",&c);
    long int b;
    if(c==1 || c==2)
    {
        long int n;
        printf("Enter Number:");
        scanf("%ld",&n);
        printf("Enter Amount:");
        scanf("%ld",&b);
    }
    else if(c==3)
    {
        long int k,p;
        printf("Enter Account Number:");
        scanf("%ld",&k);
        printf("Enter Amount:");
        scanf("%ld",&b);
        printf("Enter PIN:");
        scanf("%ld",&p);
    }

    printf("\n");

    if(b==a)
    {
        printf("\nPayment successfully\n");
    }
    else if(b>a)
    {
        printf("\nPayment successfully.Return %d Tk.\n",b-a);
    }
    else if(b<a)
    {
        printf("\nPayment Not successfully.Due %d Tk.\n",a-b);
    }



    file = fopen("equipment_rental.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fprintf(file, "Name:%s | Equipment: %s | Quantity: %d | Pay Amount: %d\n", name, equipment, quantity,a);
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
    char ch;

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
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

    printf("Write your feedback:\n");
    gets(feedback);

    file = fopen("feedback.txt", "a");
    if (file == NULL)
    {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "Name: %s\nFeedback: %s\n", name, feedback);
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
    printf("\t\t\t\t<<<<<-----Contact Us---->>>>>\n");
    drawLine(120);
    printf("\n");
    printf("\n------ Contact Us ------\n");
    printf("Phone\n\t1.01960603846\n\t2.0183947489\n\t3.0168383888\n");
    printf("Email\n\t1.mahim242-35-705@diu.edu.bd\n\t2.tamim242-35-858@diu.edu.bd\n\t3.shahed242-35-590@diu.edu.bd");

    printf("\n\nAny key to continue..........");
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
    printf("\t\t\t\t<<<<<-----Manage Discount and Offer----->>>>>\n");
    drawLine(120);
    printf("\n");
    printf("\n1.View Discount and Offer\n2.Add Discount and Offer\n");
    int n;
    printf("Enter Your Choice: ");
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
    admin_dashboard();


}


Rules_and_Condition()
{
    system("CLS");
    drawLine(120);
    printf("\t\t\t\t<<<<<-----Rules and Condition----->>>>>\n");
    drawLine(120);
    printf("\n");

    printf("Rules and Condition\n1.Rules and Condition\n2.Add Rules and Condition\n");
    int n;
    printf("Enter Your Choice: ");
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
    printf("Write Rules and Condition\n");
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






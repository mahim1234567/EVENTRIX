#include<stdio.h>
int main()
{
    int cho,cho2,cho3;
    printf("<<<<<-----WELCOME EVENTRIX----->>>>>\n\n");
    printf("1.User/Coustomer.\n");
    printf("2.Admin/Manager.\n");
    printf("3.Exit.\n");
    printf("Enter your Choice: ");
    scanf("%d",&cho);
    if (cho == 1)
    {
        system("CLS");
        printf("1.Registration.\n");
        printf("2.Login.\n");
        printf("Enter your Choice: ");
        scanf("%d",&cho2);
        printf("\n\n\n");
        if(cho2==1)
        {
        printf("---Registration.---\n\n\n");
          registe();
        }
        else if(cho2==2)
        {
          login();
        }
    }
    else if (cho == 2)
    {
        system("CLS");
        printf("1.Registration.\n");
        printf("2.Login.\n");
        printf("Enter your Choice: ");
        scanf("%d",&cho3);
        printf("\n\n\n");
        if(cho3==1)
        {
        printf("---Registration.---\n\n\n");
          registeA();
        }
        else if(cho3==2)
        {
          loginA();
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
    FILE *log;

    log = fopen("login.txt", "a");
    struct login l;

    printf("Enter Fast name: ");
    scanf("%s", l.fname);
    printf("Enter Last name: ");
    scanf("%s", l.lname);
    printf("Enter User name: ");
    scanf("%s", l.username);
    printf("Enter password: ");
    scanf("%s", l.pass);
    fprintf(log, "%s %s %s %s\n", l.fname, l.lname, l.username, l.pass);

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
    fprintf(log1, "%s %s %s %s\n", l.fname, l.lname, l.username, l.pass);

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

    while (fscanf(log," %s %s %s %s", l.fname, l.lname, l.username, l.pass) != EOF)
    {
        if (strcmp(username, l.username) == 0 && strcmp(pass, l.pass) == 0)
        {
            printf("\nSuccessfully login\n");
            coustomer_dashboard();
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nIncorrect username or password\n");
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

    while (fscanf(log1," %s %s %s %s", l.fname, l.lname, l.username, l.pass) != EOF)
    {
        if (strcmp(usernameA, l.username) == 0 && strcmp(passA, l.pass) == 0)
        {
            printf("\nSuccessfully login\n");
            admin_dashboard();
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nIncorrect username or password\n");
    }
    fclose(log1);
}

int Delete_Event()
{
    char searchName[100];
    getchar();
    printf("Enter user name to delete: ");
    gets(searchName);

    FILE *M = fopen("booking.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (M == NULL || temp == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int found = 0;
    char uname[100], pname[100], dname[100];
    int g, b;

    while (fscanf(M, "%s %s %d %s %d", uname, pname, &g, dname, &b) != EOF)
    {
        if (strcmp(uname, searchName) == 0)
        {
            found = 1;
            continue;
        }

        fprintf(temp, "%s %s %d %s %d\n", uname, pname, g, dname, b);
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

}


int coustomer_dashboard()
{

    printf("Customer Dashboard\n\n");
    printf("1.Event Selection\n");
    printf("2.View Event Information.\n");
    printf("3.Payment Process\n");
    printf("4.Service Request\n");
    printf("5.Equipment Rental\n");
    printf("6.View Offer for Discount\n");
    printf("7.View Rules and Condition\n");
    printf("8.Password Change\n");
    printf("9.Submit Feedback\n");
    printf("10.Contact Us\n");
    printf("11.Exit\n");
    int c;
    printf("Enter your Choice: ");
    scanf("%d",&c);

    if(c==1)
    {
      Event_Selection();
    }
    else if(c==2)
    {
        View_Event_Information();
    }
    else if(c==3)
    {
        Payment_Process();
    }
    else if(c==4)
    {
        Service_Request();
    }
    else if(c==5)
    {
        Equipment_Rental();
    }
    else if(c==6)
    {
        viewa();
    }
    else if(c==7)
    {
        viewr();
    }
    else if(c==8)
    {
        printf("Comming Soon.....");
    }
    else if(c==9)
    {
       Submit_Feedback();
    }
    else if(c==10)
    {
        Contact_Us();
    }

}

int admin_dashboard()
{
    printf("Admin Dashboard\n\n");
    printf("1.View All Event\n");
    printf("2.Find Event.\n");
    printf("3.Event Approval\n");
    printf("4.View Service Request\n");
    printf("5.View Equipment Rental Request\n");
    printf("6.Delete Event\n");
    printf("7.Update Event Items\n");
    printf("8.Manage Discount and Offer\n");
    printf("9.Set Rules and Condition\n");
    printf("10.View Feedback History\n");
    printf("11.Exit\n");
    int ch;
    printf("Enter your Choice: ");
    scanf("%d",&ch);

    if(ch==1)
    {
      View_Event_Information();
    }
    else if(ch==2)
    {
        printf("Comming soon......");
    }
    else if(ch==3)
    {
        printf("Comming soon......");
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
        printf("Comming soon......");
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

}
Event_Selection()
{
    printf("1.Marriage Event Booking\n");
    printf("2.Birthday Event Booking\n");
    printf("3.Institution Event Booking\n");
    printf("4.Cultural Event Booking\n");
    printf("5.Seminar Event Booking\n");
    int che;
    printf("Enter your Choice: ");
    scanf("%d",&che);

    if(che==1 || che==2 || che==3 || che==4 || che==5  )
    {
      Booking();
    }


}
Booking()
{
    char pname[100],dname[100],uname[100];
    int g,b;
    getchar();

    printf("Enter User Name: ");
    gets(uname);
    printf("Enter Place Name: ");
    gets(pname);
    printf("Enter Number of Guest: ");
    scanf("%d",&g);
    getchar();
    printf("Enter Date[Like 3-May]: ");
    gets(dname);
    printf("Enter Budget: ");
    scanf("%d",&b);


    FILE *M;

    M = fopen("booking.txt", "a");

    fprintf(M, "%s %s %d %s %d\n",uname, pname, g, dname, b);

    fclose(M);

    printf("\nBooking successfully\n\n");

}
void View_Event_Information()
{
    char pname[100], dname[100],uname[100];
    int g, b;

    FILE *M = fopen("booking.txt", "r");

    if (M == NULL) {
        printf("File not found!\n");
        return;
    }

    printf("\n------ Event Booking List ------\n");

    while (fscanf(M, " %s %s %d %s %d",uname, pname, &g, dname, &b) != EOF)
    {
        printf("Name:%s Place: %s | Guest: %d | Date: %s | Budget: %d\n",uname, pname, g, dname, b);
    }

    fclose(M);
}
Payment_Process()
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

}
Service_Request()
{
    char n[100];
    getchar();
    printf("Enter Your Name: ");
    gets(n);
    char a[100];
    getchar();
    printf("\nDecoration Services\n\t1.Stage Decoration.\n\t2.Floral Decoration.\n\t3.Balloon Decoration.\n");
    printf("Write Here: ");
    gets(a);

    char b[100];
    getchar();
    printf("Lighting Services\n\t1.Yes\n\t2.No\n");
    printf("Write Here: ");
    gets(b);
    char c[100];
    getchar();
    printf("Sound System Setup Services\n\t1.Yes\n\t2.No\n");
    printf("Write Here: ");
    gets(c);
    char d[100];
    getchar();
    printf("Photography & Videography Services\n\t1.Yes\n\t2.No\n");
    printf("Write Here: ");
    gets(d);

    FILE *sr;
    sr = fopen("service_request.txt", "a");
    fprintf(sr, "Name:%s\n 1.%s 2.%s 3.%s 4.%s\n", n, a, b, c, d);
    fclose(sr);

    printf("Your service request has been recorded.\n", a);
}
View_Service_Request()
{
    FILE *sr;
    sr = fopen("service_request.txt", "r");

    char ch;

    while(!feof(sr))
    {
        ch=fgetc(sr);
        printf("%c",ch);
    }
    fclose(sr);

}
Equipment_Rental() {
    char equipment[100];
    char name[100];
    int quantity;
    FILE *file;

    getchar();
    printf("\n----- Equipment Rental Service -----\n");
    printf("Available Equipment:\n");
    printf("1. Microphone\n");
    printf("2. Speaker\n");
    printf("3. Chairs\n");
    printf("4. Tables\n");
    printf("5. Lights\n");
    printf("6. Projector\n");
    printf("7. Tent\n");

    printf("\nEnter Your Name: ");
    gets(name);

    printf("\nEnter Equipment Name to Rent: ");
    gets(equipment);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    file = fopen("equipment_rental.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(file, "Name:%s\nEquipment: %s | Quantity: %d\n", name, equipment, quantity);
    fclose(file);

    printf("\nYour equipment rental request has been recorded.\n");
}

View_Equipment_Rental_Request()
{
    FILE *file;
    file = fopen("equipment_rental.txt", "r");

    char ch;

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);

}
Submit_Feedback() {
    char name[50], feedback[500];
    FILE *file;

    getchar();

    printf("\n------ Submit Feedback ------\n");
    printf("Enter your name: ");
    gets(name);

    printf("Write your feedback:\n");
    gets(feedback);

    file = fopen("feedback.txt", "a");
    if (file == NULL) {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "Name: %s\nFeedback: %s\n", name, feedback);
    fclose(file);

    printf("\nThank you! Your feedback has been recorded.\n");
}
Contact_Us()
{
    printf("\n------ Contact Us ------\n");
    printf("Phone\n\t1.01960603846\n\t2.0183947489\n\t3.0168383888\n");
    printf("Email\n\t1.mahim242-35-705@diu.edu.bd\n\t2.tamim242-35-858@diu.edu.bd\n\t3.shahed242-35-590@diu.edu.bd");

}
View_Feedback_History()
{

    FILE *file;
    file = fopen("feedback.txt", "r");
    char ch;

    printf("\n------Feedback History------\n\n");

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);

}

Manage_Discount_and_Offer()
{
    printf("Manage Discount and Offer\n1.View Discount and Offer\n2.Add Discount and Offer\n");
    int n;
    printf("Enter Your Choice: ");
    scanf("%d",&n);

    if (n==1)
    {
      viewa();
    }
    else if(n==2)
    {
       add();
    }
}
add()
{
    char a[5000];
    FILE *file;

    getchar();
    printf("Write Discount and Offer\n");
    gets(a);

    file = fopen("Discount_and_Offer.txt", "a");
    if (file == NULL) {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "%s\n", a);
    fclose(file);

    printf("\nAdd Successfully\n");
}


viewa()
{

    FILE *file;
    file = fopen("Discount_and_Offer.txt", "r");
    char ch;

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
}


Rules_and_Condition()
{
    printf("Rules and Condition\n1.Rules and Condition\n2.Add Rules and Condition\n");
    int n;
    printf("Enter Your Choice: ");
    scanf("%d",&n);

    if (n==1)
    {
      viewr();
    }
    else if(n==2)
    {
       addr();
    }
}
addr()
{
    char a[5000];
    FILE *file;

    getchar();
    printf("Write Discount and Offer\n");
    gets(a);

    file = fopen("Rules_and_Condition.txt", "a");
    if (file == NULL) {
        printf("Error opening feedback file!\n");
        return;
    }

    fprintf(file, "%s\n", a);
    fclose(file);

    printf("\nAdd Successfully\n");
}


viewr()
{

    FILE *file;
    file = fopen("Rules_and_Condition.txt", "r");
    char ch;

    while(!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
}





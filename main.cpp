#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>




using namespace std; //to avoid name collisions

class staff {       // base class called staff
protected:         //access specifier can be accessed in child classes
    int code;          // an integer type called code
    char name[20];     //character called name which accepts up to 20 characters
public:             //access specifier

    void getstaff(void) {                //function to get staff
        cout << "\n\nEnter code :-";     //requires user to enter staff code
        cin>>code;                       //user required to enter code
        cout << "Enter name :-";         //requires user to enter name
        cin>>name;                       // user required to enter name
    }

    void dispstaff(void) {                    //function called to display staff
        cout << "\nNAME       :-" << name;    //outputs name
        cout << "\nCODE       :-" << code;    //outputs code
    }
};

class teacher : public staff { //derived class called teacher from staff
    char sub[20];              //required to enter subject
    char fac[20];              //required to enter faculty
public:

    void create(void) {
        getstaff();                      //function to get staff
        cout << "Enter Subject :-";       //requires user to enter subject name
        cin>>sub;                        //user enters sub name
        cout << "Enter faculty :-";     //requires user to enter faculty name
        cin>>fac;                       //user enters the faculty
    }

    void display(void) {                 //function to display
        dispstaff();                           
        cout << "\nSUBJECT    :-" << sub;  // //will display subject name
        cout << "\nFACULTY:-" << fac;     //will display faculty name
    }
};

class officer : public staff {  //derived class called officer
    char grade;                //character called grade 
public:

    void create(void) {            //
        getstaff();
        cout << "Enter officer Grade :-";
        cin>>grade;
    }

    void display(void) {
        dispstaff();
        cout << "\nGRADE      :-" << grade;
    }
};

class typist : public staff {
    float speed;
public:

    void  gettypist(void) {          //function to get typist
        getstaff();
        cout << "Enter speed (wpm):-"; //requires typist speed
        cin>>speed;                    //required to enter the speed
    }

    void disptypist(void) {
        dispstaff();
        cout << "\nSPEED      :-" << speed;
    }
};

class casual : public typist {
    float dailywages;
public:

  
    void create(void) {

        gettypist();
        cout << "Enter Daily Wages :-";
        cin>>dailywages;

    }
      void show(float g, float b) {
          dailywages=g;
        cout << dailywages + b;
        
    }


    void display(void) {
        disptypist();
        cout << "\nDAILY WAGES:-" << dailywages;
    }
};

class formal : public casual {
    float dailywages;
public:

  

    void create(void) {
        gettypist();
        cout << "Enter Daily Wages :-";
        cin>>dailywages;
    }
      void show(float g, float b, float c) {
          dailywages=g;
        cout << dailywages + b + c;
    }

    void display(void) {
        disptypist();
        cout << "\nDAILY WAGES:-" << dailywages;
    }
};

int main() {
    //clrscr();
    teacher o1t[10];
    casual o1c[10];
    officer o1o[10];
    int choice, i;
    char test;
    formal form;
    form.show(2,3,4);
    while (1) {
        int count;
start:
        // clrscr();
        cout << "\n=====EDUCATION INSTITUTION DATABASE=====\n\n\n";
        cout << "Choose Category of Information\n";
        cout << "1)   Teachers\n";
        cout << "2)   Officer\n";
        cout << "3)   Typist\n";
        cout << "4)   Exit\n";
        cout << "Enter your choice:-";
        cin>>choice;
        switch (choice) {
            case 1: while (1) {
                    //        clrscr();
                    cout << "\n=====TEACHERS INFORMATION=====\n\n";
                    cout << "\nChoose your choice\n";
                    cout << "1) Create\n";
                    cout << "2) Display\n";
                    cout << "3) Jump to Main Menu\n";
                    cout << "Enter your choice:-";
                    cin>>choice;
                    switch (choice) {
                        case 1: for (count = 0, i = 0; i < 10; i++) {
                                cout << endl;
                                o1t[i].create();
                                count++;
                                cout << endl;
                                cout << "\n\nAre you Interested in entering data\n";
                                cout << "Enter y or n:-";
                                cin>>test;
                                if (test == 'y' || test == 'Y')
                                    continue;
                                else goto out1;
                            }
out1:
                            break;
                        case 2: for (i = 0; i < count; i++) {
                                cout << endl;
                                o1t[i].display();
                                cout << endl;
                            }
                            getch();
                            break;
                        case 3: goto start;
                        default: cout << "\nEnter choice is invalid\ntry again\n\n";
                    }
                }
            case 2: while (1) {
                    //         clrscr();
                    cout << "\n=====OFFICERS INFORMATION=====\n\n";
                    cout << "\nChoose your choice\n";
                    cout << "1) Create\n";
                    cout << "2) Display\n";
                    cout << "3) Jump to Main Menu\n";
                    cout << "Enter your choice:-";
                    cin>>choice;
                    switch (choice) {
                        case 1: for (count = 0, i = 0; i < 10; i++) {
                                cout << endl;
                                o1o[i].create();
                                count++;
                                cout << endl;
                                cout << "\n\nAre you Interested in entering data\n";
                                cout << "Enter y or n:-";
                                cin>>test;
                                if (test == 'y' || test == 'Y')
                                    continue;
                                else goto out2;
                            }
out2:
                            break;
                        case 2: for (i = 0; i < count; i++) {
                                cout << endl;
                                o1o[i].display();
                                cout << endl;
                            }
                            getch();
                            break;
                        case 3: goto start;
                        default: cout << "\nInvalid choice\ntry again\n\n";
                    }
                }
            case 3: while (1) {
                    //        clrscr();
                    cout << "\n=====TYPIST INFORMATION=====\n\n";
                    cout << "\nChoose your choice\n";
                    cout << "1) Create\n";
                    cout << "2) Display\n";
                    cout << "3) Jump to Main Menu\n";
                    cout << "Enter your choice:-";
                    cin>>choice;
                    switch (choice) {
                        case 1: for (count = 0, i = 0; i < 10; i++) {
                                cout << endl;
                                o1c[i].create();
                                count++;
                                cout << endl;
                                cout << "\n\nAre you Interested in entering data\n";
                                cout << "Enter y or n:-";
                                cin>>test;
                                if (test == 'y' || test == 'Y')
                                    continue;
                                else goto out3;
                            }
out3:
                            break;
                        case 2: for (i = 0; i < count; i++) {
                                cout << endl;
                                o1c[i].display();
                                cout << endl;
                            }
                            getch();
                            break;
                        case 3: goto start;
                        default: cout << "\nInvalid choice\ntry again\n\n";
                    }
                }
                //      case 4 : goto end;
        }
    }
    return 0;
}

#include <iostream>
#include <string>

#ifdef __unix__
#include <termios.h>
#include <unistd.h>
#endif

#include "Employee.h"

using namespace std;

void printMainMenu() {
    cout << "**************************************" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;
    cout << "*     Welcome to the Supermarket!    *" << endl;
    cout << "*               v0.1                 *" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;
    cout << "*                                    *" << endl;
    cout << "**************************************" << endl;
    cout << endl << endl << endl;

}

void printDashboardMenu() {
    cout << "**************************************" << endl;
    cout << "*                                    *" << endl;
    cout << "*    Select which program to use:    *" << endl;
    cout << "*                                    *" << endl;
    cout << "*        1. Cash Register            *" << endl;
    cout << "*        2. Inventory                *" << endl;
    cout << "*        3. Store Analysis           *" << endl;
    cout << "*        4. Exit                     *" << endl;
    cout << "*                                    *" << endl;
    cout << "**************************************" << endl;
    cout << endl << endl << endl;
}

void managerLogin(Manager man) {
    string pass = "";
    bool isLoggedin = false;

    // The following code was taken from http://www.cplusplus.com/forum/beginner/43683/
    // This will disable the terminal from displaying the user's password
    // NOTE *** This only works on *nix machines ***
#ifdef __unix__
    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
#endif
    while (!isLoggedin) {
        cout << "Enter Manger's password: ";
        getline(cin, pass);

        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "\n\nPlease enter a valid password.\n\n" << endl;
            continue;
        }

        if (pass.compare(man.getPassword()) == 0) {
            cout << "\nAccess granted \n";
            isLoggedin = true;
        } else {
            cout << "\nAccess denied...\n";
        }

        cin.clear();
    }
#ifdef __unix__
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
#endif
}

void dashboardRouting() {
    try {
        int selection = 0;

        while (selection != 4) {
            printDashboardMenu();

            cout << "Enter you selection: ";
            cin >> selection;

            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                cout << "\n\nPlease enter an Integer only.\n\n" << endl;
                continue;
            }

            switch (selection) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    cout << "Have a fantastic day! " << endl;
                    break;
                default:
                    cout << "Select a valid number! " << endl;
            }
        }

    } catch (...) {
        cout << "\n\n\nAn error has occurred :/" << endl;
    }
}

int main(void) {
    Manager man = Manager("John Smith", 1234567890);
    printMainMenu();
    managerLogin(man);

    dashboardRouting();

    exit(EXIT_SUCCESS);
}

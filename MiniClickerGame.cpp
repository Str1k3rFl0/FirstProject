#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int choose;
int maxim;
string option;

class Test {
private:
    string name;
    int age;
    int money = 0;
    int total = 0;
    int car = 0;
    int house = 0;

public:

    void Sign_Up() {

        cout << "\n----- SIGN UP -----\n\n";
        cout << "What's your name -> ";
        cin >> name;
        cout << "How old are you? -> ";
        cin >> age;

        system("cls");

    }

    void menu_details() {

        cout << "\n\t1. Player Details\n";
        cout << "\t2. Inventory\n";
        cout << "\t3. Back\n";
        cin >> choose;

        system("cls");

    }

    void details() {

        cout << "\n----- DETAILS -----\n\n";

        cout << "Your name is  " << name << endl;
        cout << "Your age is  " << age << endl;

        cout << "\t1. Back\n";
        cin >> choose;

        system("cls");

    }

    void inventory() {

        cout << "\n|***** INVENTORY *****|\n\n";
        cout << "Cars = " << car;
        cout << endl;
        cout << "Houses = " << house;
        cout << "\n\t1. Back\n";
        cin >> choose;

        system("cls");

    }

    void total_money() {

        cout << "\n----- TOTAL MONEY -----\n\n";
        cout << "Total money = " << total << endl;
        cout << endl;
        cout << "\t1. Back\n";
        cin >> choose;

        system("cls");

    }

    void farm() {

        cout << "\n----- FARM MONEY -----\n\n";
        cout << "How many money you want to farm?" << endl;
        cout << "Money -> ";
        cin >> maxim;
            for (money = 1; money <= maxim; money++) {
                cin.get();
                cout << "Money -> " << money << endl;
                total++;
            }

        cout << "\t1. Back\n";
        cin >> choose;

        system("cls");

    }

    void shop() {

        cout << "\n----- SHOP -----\n\n";
        cout << "Choose an option\n";
        cout << "\t1. Car\n";
        cout << "\t2. House\n";
        cout << "\t3. Back\n";
        cin >> choose;

    }

    void cars() {

        cout << "\nTotal money => " << total << endl;
        cout << endl;
        cout << "\nCar cost 15 coins";
        cout << "\nDid you want to buy the car? yes/no \n";
        cin >> option;
        if (option == "yes") {
            if (total >= car) {
                cout << "Congratulation! You bought the car!";
                total = total - 15;
                cout << endl;
                cout << "\nYou left with " << total << " coins\n";
            }
            else {
                cout << "Sorry! You dont have money\n";
            }
        }
        car++;
        cout << "\n\t1. Back\n";
        cin >> choose;

        system("cls");

    }

    void houses() {

        cout << "\nTotal money => " << total << endl;
        cout << endl;
        cout << "\nHouse cost 25 coins";
        cout << "\nDid you want to buy the car? yes/no \n";
        cin >> option;
        if (option == "yes") {
            if (total >= house) {
                cout << "Congratulation! You bought the car!";
                total = total - 25;
                cout << endl;
                cout << "\nYou left with " << total << " coins\n";
            }
            else {
                cout << "Sorry! You dont have money\n";
            }
        }
        house++;
        cout << "\n\t1. Back\n";
        cin >> choose;

        system("cls");

    }
};

int main() {

    Test t;

    while (1) {
        cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^ MENU ^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";
        cout << "Choose an option\n";
        cout << "\t1. Sign Up      \t2. Player Details    \t3.Total Money\n";
        cout << "\t4. Farm money     \t5. Shop             \t6. Leave Game\n";
        cin >> choose;

        system("cls");

        switch (choose) {

        case 1:
            t.Sign_Up();
            break;

        case 2:
            t.menu_details();

            switch (choose) {
            case 1:
                t.details();
                break;

            case 2:
                t.inventory();
                break;

            case 3:
                exit(1);
                break;

            default:
                cout << "\nInvalid Option\n";
            }

            break;

        case 3:
            t.total_money();
            break;

        case 4:
            t.farm();
            break;

        case 5:
            t.shop();

                switch (choose) {
                case 1:
                    t.cars();
                    break;

                case 2:
                    t.houses();
                    break;
                }

            break;

        case 6:
            exit(1);
            break;

        default:
            cout << "\nInvalid Option\n";
            break;

            }
        }
    }

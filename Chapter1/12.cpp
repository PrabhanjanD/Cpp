#include <iostream>
#include <string>
#define MAX_SIZE 20

using namespace std;

struct Employee {
    string name;
    long int code;
    string designation;
    int experience;
    int age;
};

int num;
Employee emp[MAX_SIZE], tempemp[MAX_SIZE], sortemp[MAX_SIZE], sortemp1[MAX_SIZE];

void showMenu();
void build();
void insert();
void deleteIndex(int index);
void deleteRecord();
void searchRecord();

void build() {
    cout << "Build The Table" << endl;
    cout << "Maximum Entries can be " << MAX_SIZE << endl;
    cout << "Enter the number of Entries required: ";
    cin >> num;

    if (num > MAX_SIZE) {
        cout << "Maximum number of Entries are " << MAX_SIZE << endl;
        num = MAX_SIZE;
    }

    cout << "Enter the following data:" << endl;

    for (int i = 0; i < num; i++) {
        cout << "Name: ";
        cin >> emp[i].name;
        cout << "Employee ID: ";
        cin >> emp[i].code;
        cout << "Designation: ";
        cin >> emp[i].designation;
        cout << "Experience: ";
        cin >> emp[i].experience;
        cout << "Age: ";
        cin >> emp[i].age;
    }

    showMenu();
}

void insert() {
    if (num < MAX_SIZE) {
        int i = num;
        num++;

        cout << "Enter the information of the Employee:" << endl;
        cout << "Name: ";
        cin >> emp[i].name;
        cout << "Employee ID: ";
        cin >> emp[i].code;
        cout << "Designation: ";
        cin >> emp[i].designation;
        cout << "Experience: ";
        cin >> emp[i].experience;
        cout << "Age: ";
        cin >> emp[i].age;
    }
    else {
        cout << "Employee Table Full" << endl;
    }

    showMenu();
}

void deleteIndex(int index) {
    for (int j = index; j < num - 1; j++) {
        emp[j].name = emp[j + 1].name;
        emp[j].code = emp[j + 1].code;
        emp[j].designation = emp[j + 1].designation;
        emp[j].experience = emp[j + 1].experience;
        emp[j].age = emp[j + 1].age;
    }
}

void deleteRecord() {
    cout << "Enter the Employee ID to Delete Record: ";
    int code;
    cin >> code;

    for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            deleteIndex(i);
            num--;
            break;
        }
    }

    showMenu();
}

void searchRecord() {
    cout << "Enter the Employee ID to Search Record: ";
    int code;
    cin >> code;

    for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            cout << "Name: " << emp[i].name << endl;
            cout << "Employee ID: " << emp[i].code << endl;
            cout << "Designation: " << emp[i].designation << endl;
            cout << "Experience: " << emp[i].experience << endl;
            cout << "Age: " << emp[i].age << endl;
            break;
        }
    }

    showMenu();
}

void showMenu() {
    cout << "-------------------------" << endl;
    cout << "GeeksforGeeks Employee Management System" << endl;
    cout << "-------------------------" << endl;
    cout << "Available Options:" << endl;
    cout << "Build Table (1)" << endl;
    cout << "Insert New Entry (2)" << endl;
    cout << "Delete Entry (3)" << endl;
    cout << "Search a Record (4)" << endl;
    cout << "Exit (5)" << endl;
    int option;

    cout << "Enter your option: ";
    cin >> option;

    if (option == 1) {
        build();
    }
    else if (option == 2) {
        insert();
    }
    else if (option == 3) {
        deleteRecord();
    }
    else if (option == 4) {
        searchRecord();
    }
    else if (option == 5) {
        return;
    }
    else {
        cout << "Expected Options are 1/2/3/4/5" << endl;
        showMenu();
    }
}

int main() {
    showMenu();
    return 0;
}
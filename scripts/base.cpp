#include <iostream>
#include <string>
using namespace std;

struct People {
    float age;
    int id;
    string name;

    void insert(float ageIns, int idIns, const string& nameIns) {
        age = ageIns;
        name = nameIns;
        id = idIns;
    }

    void searchId(int searchId) {
        if (searchId == id) {
            cout << "Name: " << name << '\n';
            cout << "Age: " << age << '\n';
        }
    }

    void searchName(const string& searchName) {
        if (searchName == name) {
            cout << "ID: " << id << '\n';
            cout << "Age: " << age << '\n';
        }
    }

    void searchAge(float searchAge) {
        if (searchAge == age) {
            cout << "Name: " << name << '\n';
            cout << "ID: " << id << '\n';
        }
    }
};

bool isAdmin() {
    string role;
    string pass;

    cout << "Are you (G)uest or (A)dmin? Answer is ONLY G or A: ";
    cin >> role;

    if (role == "A") {
        cout << "Password: ";
        cin >> pass;

        if (pass == "123") {
            cout << "Access granted\n";
            return true;
        }

        cout << "Wrong password!\n";
        return false;
    }

    if (role == "G") {
        return false;
    }

    cout << "Invalid role!\n";
    return false;
}

int main() {
    cout << "C++ base\n";

    while (true) {
        if (isAdmin()) {
            cout << "You're ADMIN!\n";
        }
        else {
            cout << "You're GUEST!\n";
        }
    }
}

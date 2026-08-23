#include <iostream>
#include <string>
using namespace std;

struct people {
    float age;
    int id;
    string name;

    void insert(const float &ageIns, const float &idIns, const string &nameIns) {
        age = ageIns;
        name = nameIns;
        id = idIns;
    }

    void searchId(int &searchId){
        if(searchId == id) { cout << "Name: " << name << '\n' << "Age: " << age << '\n';}
    }
    void searchId(int &searchName){
        if(searchName == name) { cout << "ID: " << id << '\n' << "Age: " << age << '\n';}
    }
    void searchId(int &searchAge){
        if(searchAge == Age) { cout << "Name: " << name << '\n' << "ID: " << id << '\n';}
    }
}

int main(){
    while(true){

    }
}

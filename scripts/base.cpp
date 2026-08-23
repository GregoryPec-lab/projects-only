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
    void searchName(int &searchName){
        if(searchName == name) { cout << "ID: " << id << '\n' << "Age: " << age << '\n';}
    }
    void searchAge(int &searchAge){
        if(searchAge == Age) { cout << "Name: " << name << '\n' << "ID: " << id << '\n';}
    }
}

bool isAdmin(){
    string bool;
    string pass;
    cout<<"Are you (G)uest or (A)dmin? Answer is ONLY G or A :";
    cin>>bool;
    if(bool == "A"){
        cout<<"Password:"
        cin>>pass;
        if(pass == "123"){cout<<"Acces granted" << '\n';
            return true;
        }
    }
    if(bool == "G"){
        return false;
    }
}

int main(){
    cout<< "C++ base" << '\n';
    while(true){
        if(isAdmin()){

        }
        else{

        }
    }
}

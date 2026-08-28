#include <iostream>
#include <string>
#include <vector>
using namespace std;

const char a = 'A';

struct people {
    float age;
    string name;
    size_t id;
};
bool isAdmin(){
    char admin;
    cout<<"Are you an (A)dmin or a (G)uest? :\n";
    cin>> admin;
    if(admin == a){
        string password = "123";
        cout<<"Password:\n";
        string passwordM;
        cin >> passwordM;
        if(password == passwordM){
            cout<<"Access granted!\n\n";
            return true;
        }else{
            cout<<"Acces denied\n\n";
            return isAdmin();
        }
    }else{
        cout<<"";
        return false;
    }
}
void AddPerson (vector<people> &Add){
    people p;
    size_t id = Add.size() + 1;
    p.id = id;
    string name;
    cout << "Name:\n";
    cin >> name;
    p.name = name;
    cout << "\n";
    float age;
    cout << "Age:\n";
    cin >> age;
    p.age = age;
    cout<<'\n';
    Add.push_back(p);
}
void DeletePerson (vector<people> &Delete){
    size_t idDel;
    cout<< "Id:\n";
    cin >> idDel;
    cout << '\n';
    for(size_t i = 0; i < Delete.size(); i++) {
        if(idDel == Delete[i].id){Delete.erase(Delete.begin() + i);break;}
    }
}
void FindByID (vector<people> &Find){
    size_t idFind;
    cout<<"Id to find:\n";
    cin >> idFind;
    cout << '\n';
    for(size_t i = 0; i < Find.size(); i++) {
        if(idFind == Find[i].id){
            cout<<"===Person===" << '\n';
            cout << "Name: " << Find[i].name << '\n'
                 << "Id: " << Find[i].id<< '\n'
                 << "Age: "<< Find[i].age << '\n' << '\n';
        }
    }
}
void FindByName (vector<people> &Find){
    string NameFind;
    cout<<"Name to find:\n";
    cin >> NameFind;
    cout << '\n';
    for(size_t i = 0; i < Find.size(); i++) {
        if(NameFind == Find[i].name){
            cout<<"===Person===" << '\n';
            cout << "Name: " << Find[i].name << '\n'
                 << "Id: " << Find[i].id<< '\n'
                 << "Age: "<< Find[i].age << '\n' << '\n';
        }
    }
}
void FindByAge (vector<people> &Find){
    float AgeFind;
    cout<<"Name to find:\n";
    cin >> AgeFind;
    cout << '\n';
    for(size_t i = 0; i < Find.size(); i++) {
        if(AgeFind == Find[i].age){
            cout<<"===Person===" << '\n';
            cout << "Name: " << Find[i].name << '\n'
                 << "Id: " << Find[i].id<< '\n'
                 << "Age: "<< Find[i].age << '\n' << '\n';
        }
    }
}
void ShowAll (vector<people> &Show) {
    for(size_t i = 0; i < Show.size(); i++) {
        cout<<"===Person===" << '\n';
        cout << "Name: " << Show[i].name << '\n'
             << "Id: " << Show[i].id<< '\n'
             << "Age: "<< Show[i].age << '\n' << '\n';
    }
}
int main(){
    vector<people> base;
    int choise;
    if(isAdmin()){
        while(true){
            cout<<"===DATABASE===\n"
                <<"1.Add person\n"
                <<"2.Delete person\n"
                <<"3.Find by ID\n"
                <<"4.Find by NAME\n"
                <<"5.Find by AGE\n"
                <<"6.Show All\n";
            cin >> choise;
            switch (choise) {
                case 1:
                    AddPerson(base);
                break;
                case 2:
                    DeletePerson(base);
                break;
                case 3:
                    FindByID(base);
                break;
                case 4:
                    FindByName(base);
                break;
                case 5:
                    FindByAge(base);
                break;
                case 6:
                    ShowAll(base);
                break;
            }
        }
    }else{
        while(true) {
            cout<<"===DATABASE===\n"
                <<"1.Add person\n"
                <<"2.Find by ID\n"
                <<"3.Show All\n";
            cin >> choise;
            switch (choise) {
                case 1:
                    AddPerson(base);
                break;
                case 2:
                    FindByID(base);
                break;
                case 3:
                    ShowAll(base);
                break;
            }
        }
    }
}

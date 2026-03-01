#include<iostream>
#include<iomanip>
using namespace std;
struct bop {
    char fullname[20];
    char title[20];
    char bopname[20];
    int preference;
};
void showmenu() {
    cout<<left<<setw(25)<<"a.display by name"<<"b.display by title"<<endl;
    cout<<setw(25)<<"c.display by bopname"<<"d.display by preference"<<endl;
    cout<<"q.quit"<<endl;
    }
void showpre(bop a) {
    if (a.preference==0)
        cout<<a.fullname<<endl;
    else if (a.preference==1)
        cout<<a.title<<endl;
    else
        cout<<a.bopname<<endl;
}
char getValidInput() {
    char choice;
    while (1) {
        cin.get(choice);
        while (cin.get()!='\n')
            continue;
        if (choice=='a'||choice=='b'||choice=='c'||choice=='d'||choice=='q') {
            return choice;
        }cout<<"Invalid input."<<endl;
    }
}
int main(){
    bop mem[5]={
        {"Wimp Macho","Junior Programmer","WM",0},
        {"Raki Rhodes","Junior Programmer","RR",1},
        {"Celia Laiter","Junior Programmer","MIPS",2},
        {"Hoppy Hipman","Analyst Trainee","HH",1},
        {"Pat Hand","Junior Programmer","LOOPY",2},
    };
    showmenu();
    char choice=getValidInput();
    while (choice!='q') {
        switch (choice) {
            case 'a':
                for (int i=0;i<5;i++) {
                    cout<<mem[i].fullname<<endl;
                }
                break;
            case 'b':
                for (int i=0;i<5;i++) {
                    cout<<mem[i].title<<endl;
                }
                break;
            case 'c':
                for (int i=0;i<5;i++) {
                    cout<<mem[i].bopname<<endl;
                }
                break;
            case 'd':
                for (int i=0;i<5;i++) {
                    showpre(mem[i]);
                }
                break;
        }
        cout<<"Next choice:";
        choice= getValidInput();
    }cout<<"Bye!\n";
    return 0;
}
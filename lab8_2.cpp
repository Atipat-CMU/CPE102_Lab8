#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "?????", movie, appDate, text;
    int id;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n" << name+": ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " + name + " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" << name+": ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << int(id/10e6)-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name+": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n" << name+": ";
    getline(cin,appDate);
    cout << "Fahsai: "+appDate+"....that is OK!!! I'm looking forward to watching "+movie+" with you.\n";
    cout << name+": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you "+appDate+". Bye Bye \\(^ ^)/";

    return 0;
}

//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

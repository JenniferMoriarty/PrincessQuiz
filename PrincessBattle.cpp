#include<iostream>
#include<Windows.h> //used for system pause
using namespace std;



class princess {  
private: //only class functions can see and change/call these values/functions
    string name;
    int age;
    int def;
    int atk;
    int health;
public: //errbody in the clurb can see and change or call these values/functions  
    princess(); //default constructor (note no return type)
    princess(string n, int k, int d, int a, int h);
    int attack();
    void defend(int a);
    int getHealth() { return health; } //this is an inline function since it's so short
};

int main() {
    princess SnowWhite("Snow", 30, 50, 14, 100);  // Create objects
    princess KyloRen("Kylo", 50, 40, 33, 80);

    while (KyloRen.getHealth() > 0 and SnowWhite.getHealth() > 0) { //game loop
        SnowWhite.defend(KyloRen.attack());
        KyloRen.defend(SnowWhite.attack());
        system("pause");
    }
   

}

//class function definitions!-----------------------------------------------

//default constructor
princess::princess() {
    name = " ";
    atk = 0;
    def = 0;
    age = 0;
    health = 0;
}

//paramaterized constructor
princess::princess(string n, int k, int d, int a, int h) {
    name = n;
    atk = k;
    def = d;
    age = a;
    health = h;

}

int princess::attack() {
    cout << name << " attacks for " << atk << "!" << endl;
    return atk;

}

void princess::defend(int a) {
    cout << name << " took " << (def / 2) - a << " damage!!" << endl;
    health += (def / 2) - a;
    cout << name << "'s health is now " << health << "." << endl;
}

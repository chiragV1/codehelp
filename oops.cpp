#include<iostream> 
using namespace std;

class Hero {
    private:
    int health ; 

    public:
    char *name ; 
    char  level;

    Hero() {
        cout<<"Simple constructor called " <<endl;
        name = new char[100];
    }

    Hero(int health) {
        this -> health = health;
    }

    Hero(Hero & temp) {
         cout<<"copy contructor called"<<endl;
         this -> health = temp.health;
         this -> level = temp.level; 
    }
    void setName(char name[]) {
        strcpy(this ->name, name);  
    }
    
};

int main () {


    return 0 ; 
}
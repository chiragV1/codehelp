#include<bits/stdc++.h>
 
using namespace std;
 
class Human{
    private:
    int age ;
    string name;
    int weight;

    public:
    int getAge() {
        return this->age;
    }

    void setAge(int age) {
        this->age = age;
    }
    

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return this->name;
    }
};

class Male : public Human {
    public:
    string color;

    void sleep() {
        cout<< "Male is slepuing" << endl;
    }


};
int main() {
    
    Male m1;
    m1.setAge(10);
    cout<<m1.getAge()<<endl;
    
    return 0;
}
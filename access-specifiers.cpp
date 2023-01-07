#include<iostream>
#include<string.h>
using namespace std;

class Hero {
    //properties
    int health; //private by default

public:
    char level;
    int getHealth(){
        return health;
    }

    void setHealth(int h){
            health = h;
    }

};
//static object creation
Hero paul;

int main() {
     
     paul.setHealth(25); // Setting health which is private data member
                         // through public setter function

     paul.level = 'A';   // Initializing data members without setter function
                         // this method works for public data member not private


     cout<< "paul health is : " << paul.getHealth() << endl;  
     cout<< "paul level is : "  << paul.level << endl;  



return 0;
}

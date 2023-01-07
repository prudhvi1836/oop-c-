#include<iostream>
using namespace std;

class Hero {
    //properties
    int health;
};
//static object creation
Hero paul;

int main() {

  cout<< "size: "<< sizeof(paul) << endl;
return 0;
}

#include <iostream>

using namespace std;

class Hero {
    private:
    string name = "Tom";

    void print_name(){
        cout << name << endl;
    }

    public:
     int health;
     string level;

     int get_health(){
        return  health; 
     }

     string get_name(){
        return name;
     }

     void set_health(int h){
        health = h;
     };

     void set_name (string s) {
        name = s;
     };

};

int main(){

    Hero h1;

    h1.health = 70;
    h1.level = "A";

    cout << "Size: "<<sizeof(h1)<<endl;

    cout << "Name: "<< h1.get_name()<<endl;

    cout << "Health is: "<<h1.health << endl;

    return 0;
}
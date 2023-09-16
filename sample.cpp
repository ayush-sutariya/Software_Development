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
     static int guard;

     void print(){
      cout << " Name: "<<name<<endl;
      cout << " Health: "<<health<<endl;
      cout << " Level: "<<level<<endl;
     }

     Hero (const Hero& copy) : health(copy.health), name(copy.name), level(copy.level){cout << "Copy Construction called"<<endl;};

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

   Hero(){
      cout << "Constructor Called" <<endl;
    }

    Hero (int h, string l, string n){
      cout << "Initial Constructer Called"<<endl;
     this->health = h;
      this->level = l;
      this->name = n;
    }

   static int random(){
      cout << "Guard: "<<guard<<endl;
    }

    ~Hero(){cout << "Destructor Called"<<endl;}

};

int Hero::guard = 99;


int main(){

    Hero h1;

   h1.health = 70;
   h1.level = "A";

   cout << "Size: "<<sizeof(h1)<<endl;

   cout << "Name: "<< h1.get_name()<<endl;

   cout << "Health is: "<<h1.health << endl;

   cout << endl;

   Hero* dynamic = new Hero();
   dynamic->health = 80;
   dynamic->set_name("Jerry");

   cout << "Dynamic Health is: " <<dynamic->health <<endl;
   cout << "Dynamic Level is: " << dynamic->get_name()<<endl;

      cout <<endl;

   Hero initial(90,"C","Dom");
   cout << "initial Health is: " <<initial.health <<endl;
   cout << "initial Level is: " << initial.level<<endl;
   cout << "Initial name is: " <<initial.get_name() <<endl;

      cout <<endl;

   Hero copy(h1);
   cout << "Copy Health is: " <<copy.health <<endl;
   cout << "Copy Level is: " << copy.level<<endl;
   cout << "Copy name is: " <<copy.get_name() <<endl;

   cout <<endl;

   initial = h1;

   initial.print(); 
   cout <<endl;
   h1.print(); // All h1 values are copied to initial class.

   cout << endl;

   cout << "Static Keyword: "<<Hero::guard<<endl; 

   cout <<endl;

   cout <<endl;

   delete dynamic;

    return 0;
}
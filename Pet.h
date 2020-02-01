/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Pet Class
*/

#include <iostream>

using namespace std;

class Pet
{
  private:
    string name;
    string type;
    int age;
    double weight;

  public:
    Pet();
    Pet(string n, string t, int a, double w);
    ~Pet();

    void set_name(string n);
    string get_name();

    void set_type(string t);
    string get_type();

    void set_age(int a);
    int get_age();

    void set_weight(double w);
    double get_weight();

    void print();
};

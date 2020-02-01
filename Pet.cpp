/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Pet Class
*/

#include "Pet.h"
#include <iostream>
#include <fstream>

using namespace std;

//Constructor
Pet::Pet()
{
  string name = "";
  string type = "";
  int age = 0;
  double weight = 0.0;
}

//Overloaded Constructor
Pet::Pet(string n, string t, int a, double w)
{
  name = n;
  type = t;
  age = a;
  weight = w;
}

//Destructor
Pet::~Pet()
{

}

//Set name value----------------------
void Pet::set_name(string n)
{
  name = n;
}

//Get name value
string Pet::get_name()
{
  return name;
}

//Set type value----------------------
void Pet::set_type(string t)
{
  type = t;
}

//Get type value
string Pet::get_type()
{
  return type;
}

//Set age value----------------------
void Pet::set_age(int a)
{
  age = a;
}

//Get age value
int Pet::get_age()
{
  return age;
}

//Set weight value----------------------
void Pet::set_weight(double w)
{
  weight = w;
}

//Get weight value
double Pet::get_weight()
{
  return weight;
}

void Pet::print()
{
  cout << name << endl;
  cout << "Type...." << type << endl;
  cout << "Age....." << age << endl;
  cout << "Weight.." << weight << "lbs" << endl;
}

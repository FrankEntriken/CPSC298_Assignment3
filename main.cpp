/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Pet Class
*/

#include "Pet.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
  //Use of constructor
  Pet *dog = new Pet();
  dog -> set_type("Dog");
  dog -> set_name("Donnie");
  dog -> set_age(8);
  dog -> set_weight(50.0);
  cout << endl;
  dog -> print();

  //Use of overloaded constructor
  Pet *cat = new Pet("Flipsy", "Cat", 3, 20.4);
  cout << endl;
  cat -> print();

  Pet *alligator = new Pet("Chompsy", "Alligator", 5, 200.7);
  cout << endl;
  alligator -> print();
  cout << endl;
}

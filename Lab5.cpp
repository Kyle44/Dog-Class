// Author: Kyle Fritz
// File: Lab5.cpp
// Date Modified: 4/1/15
// Description: This program is used to understand classes in C++

#include <iostream>
#include <string.h>
#include "Dog.cpp"
using namespace std;

int main(int argc, char* argv[]){

  cout << "Creating Dogs..." << endl;

  Dog Dog1;
  Dog Dog2;

  const string name = "Ralph";
  unsigned int birthyear = 1996;
  Dog1 = Dog::Dog(name, birthyear);

  const string name2 = "Alfonso";
  unsigned int birthyear2 = 2015;
  Dog2 = Dog::Dog(name2, birthyear2);

  cout << "Dog1's name is: " << Dog1.GetName() << endl;
  cout << "Dog2's name is: " << Dog2.GetName() << endl;

  const char owner1[] = "Donny";
  const char owner2[] = "Carlos";
  Dog1.SetOwner(owner1);
  Dog2.SetOwner(owner2);
  cout << "Dog1's owner is: " << Dog1.GetOwner() << endl;
  cout << "Dog2's owner is: " << Dog2.GetOwner() << endl;

  int i; 
  for (i = 0; i < 4; i++){
    cout << "Dog1 being abused... " << endl;
    Dog1.Abuse();
  }

  for (i = 0; i < 5; i++){
    cout << "Dog1 being pet... " << endl;
    Dog1.Pat();
  }

  for (i = 0; i < 3; i++){
    cout << "Dog2 being abused... " << endl;
    Dog2.Abuse();
  }

  for (i = 0; i < 5; i++){
    cout << "Dog2 being pet... " << endl;
    Dog2.Pat();
  }

  cout << "Talking to Dog1... " << endl;
  Dog1.Talk();
  cout << "Talking to Dog2... " << endl;
  Dog2.Talk();

  
}

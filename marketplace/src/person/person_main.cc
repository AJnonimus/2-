// person_main.cc
// A simple Person class executable

#include <iostream>
#include <string>
#include "person.h"

int main(void){
    Person persona("30864553B", "Fernando", "Alonso", "c/ Pedro Benito", "Fuentealbilla", "Masachusetts", "El Congo", 2005);
    std::cout<<persona.get_full_address();
    std::cout<<"id: " <<persona.get_id();
}
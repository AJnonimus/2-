// client.h
// A simple Client class

#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include "person.h"
#include "basket.h"
#include <string>


class Client: public Person, public Basket
{
    private: 
        int premium_;    

    public: Client(std::string id,
            std::string name="empty",
            std::string surname="empty",
            std::string address="empty",
            std::string town="empty",
            std::string province="empty",
            std::string country="empty",
            int entry_year=0,
            int premium=0
            ):Person(id, name, surname, address, town, province, country, entry_year)
    {
        premium_=premium;
    }

    inline int get_premium() {return premium_;}
    inline void set_premium(int premium){premium_=premium;} 


};

#endif

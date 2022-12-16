// tv.cc
// A simple tv class

#include <string>
#include "tv.h"

bool Tv:: set_inch(float inch){
    if (inch>0){
        inch_=inch;
        return true;
    }
    else return false;
}

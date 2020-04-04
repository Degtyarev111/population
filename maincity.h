#pragma once
#include <string>
#include "country.h"

class maincity : public country {
private:
    int retirees;
public:
    maincity(){};
    maincity(int retirees, int population, string name){
        this->retirees = retirees;
        this->population = population;
        this->name = name;
    }
    void SetMidAge(int retirees){
        this->retirees = retirees;
    }
    int GetRetirees(){
        return retirees;
    }
};

#pragma once
#include  <string>

class country {
private:
    int population;
    string name;
public:
    country{};
    country(int population, string name){
        this->population = population;
        this->name = name;
    }
    void SetPopulation(int population){
        this->population = population;
    }
    void SetName(string name){
        this->name = name;
    }
    int GetPopulation{
        return population;
    };
    string GetName{
        return name;
    };
};

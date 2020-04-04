#include <iostream>
#include <string>
#include "maincity.h"
#include "country.h"
using namespace std;

int main()
{
    maincity Moscow;Moscow.SetPopulation(1);
    maincity NewYork;NewYork.SetPopulation(2);
    maincity Tokyo;Tokyo.SetPopulation(3);
    maincity Maincities[3] = {Moscow ; NewYork; Tokyo};
    for (int j=0; j<2; j++) {
        for (int i = 0; i < 2; i++) {
            if (Maincities[i] > Maincities[i + 1]) {
                Maincities[i] = Maincities[i + 1];
            }
        }
    }
    cout << "Города по возрастанию населения: ";
    for(int i = 0; i < 3; i++){
        cout << Maincities[i];
    }
}
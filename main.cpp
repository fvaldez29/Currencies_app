#include <iostream>
#include <cmath>

#include "currencyfs.hpp"

using namespace std;

int main(){
    int dinero, currencies;
    cout << "Elige la currency para convertir entre las opciones: \n #1 Euro \n #2 Dollar \n #3 Libra Esterlina \n #4 Peso Colombiano \n #5 Peso Mexicanos \n #6 Peso Dominicano \n";
    cin >> currencies;

    cout << "Ingrese el monto de dinero a convertir: \n";
    cin >> dinero;

    switch (currencies)
    {
    case 1:
         euro(currencies, dinero);
        break;
    case 2:
        
        dollar(currencies, dinero);
        break;
    case 3:
        
        libra(currencies, dinero);
        break;
    case 4: 
        
        colombian(currencies, dinero);
        break;
    case 5: 
        
        mexican(currencies, dinero);
        break;
    case 6:
        dominican(currencies, dinero);
        break;
    default:
        break;
    }
   

}
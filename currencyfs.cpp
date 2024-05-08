    #include <iostream>
    #include <string>
    #include <cmath>

    using namespace std;

    double pesos = 0.0;
    float result = 0.0;

    void euro(int currency, int euro){

        cout << "Elige entre las opciones:  \n 1# dollares \n 2# Libras esterlinas \n 3# Pesos Colombianos \n 4# Pesos Mexicanos \n 5# Pesos Dominicanos \n";
        cin >> currency;

        switch (currency)
        {
        case 1:
            cout << "La conversion de Euro a Dollar es: \n";
            pesos = 1.8;
            result = euro * pesos;

            cout << "$"<< result << " \n";
            break;
        case 2:
            cout << "La conversion de Euro a Libra esterlina es: \n";
            pesos = 0.86;
            result = euro * pesos;

            cout << "$"<< result << " \n";
            break;
        case 3:
            cout << "La conversion de Euro a Pesos Colombiano es: \n";
            pesos = 4190.54;
            result = euro * pesos;

            cout << "$"<< result << " \n";
            break;
        case 4:
            cout << "La conversion de Euro a Pesos Mexicanos es: \n";
            pesos = 18.18;
            result = euro * pesos;

            cout << "$"<< result << " \n";
            break;
        case 5:
            cout << "La conversion de Euro a Pesos Dominicanos es: \n";
            pesos = 62.46;
            result = euro * pesos;

            cout << "$"<< result << " \n";
            break;
        
        default:
            cout << "Opcion no validad";
            break;
        }
    }

    void libra(int currency, int libra){

        result = 0;

        cout << "Elige entre las opciones:  \n 1# Euros \n 2# Dollares \n 3# Pesos Colombianos \n 4# Pesos Mexicanos \n 5# Pesos Dominicanos \n";
        cin >> currency;

        switch (currency)
        {
        case 1:
            cout << "La conversion de Libras a Euros es: \n";
            pesos = 1.16;
            result =  libra * pesos;

            cout << "$"<< result << " \n";
            break;
        case 2:
            cout << "La conversion de Libras es Dollares: \n";
            pesos = 1.25;
            result = libra * pesos;

            cout << "$"<< result << " \n";
            break;
        case 3:
            cout << "La conversion de libra a Pesos Colombiano es: \n";
            pesos = 4871.80;
            result = libra * pesos;

            cout << "$"<< result << " \n";
            break;
        case 4:
            cout << "La conversion de libra a Pesos Mexicanos es: \n";
            pesos = 21.13;
            result = libra * pesos;

            cout << "$"<< result << " \n";
            break;
        case 5:
            cout << "La conversion de libra a Pesos Dominicanos es: \n";
            pesos = 72.61;
            result = libra * pesos;

            cout << "$"<< result << " \n";
            break;
        
        default:
            cout << "Opcion no validad";
            break;
        }

    }

    void colombian(int currency, int colombian){

        cout << "Elige entre las opciones:  \n 1# Euros \n 2# Dollares \n 3# Libras Esterlinas \n 4# Pesos Mexicanos \n 5# Pesos Dominicanos \n";
        cin >> currency;

        switch (currency)
        {
        case 1:
            cout << "La conversion de Pesos Colombianos a Euros es: \n";
            pesos = 0.00024;
            result =  colombian * pesos;

            cout << "$"<< result << " \n";
            break;
        case 2:
            cout << "La conversion de Pesos Colombianos a Dollares es: \n";
            pesos = 0.00026;
            result = colombian * pesos;

            cout << "$"<< result << " \n";
            break;
        case 3:
            cout << "La conversion de Pesos Colombianos a Libras Esterlinas es: \n";
            pesos = 0.00021;
            result = colombian * pesos;

            cout << "$"<< result << " \n";
            break;
        case 4:
            cout << "La conversion de Pesos Colombianos a Pesos Mexicanos es: \n";
            pesos = 0.0044;
            result = colombian * pesos;

            cout << "$"<< result << " \n";
            break;
        case 5:
            cout << "La conversion de  Pesos Colombianos a Pesos Dominicanos es: \n";
            pesos = 0.015;
            result = colombian * pesos;
            cout << "$"<< result << " \n";
            break;
        
        default:
            cout << "Opcion no validad";
            break;
        }
    }
    void mexican(int currency, int mexican){
        cout << "Elige entre las opciones:  \n 1# Euros \n 2# Dollares \n 3# Libras Esterlinas \n 4# Pesos Mexicanos \n 5# Pesos Dominicanos \n";
        cin >> currency;

        switch (currency)
        {
        case 1:
            cout << "La conversion de Pesos Mexicanos a Euros es: \n";
            pesos = 0.055;
            result =   mexican * pesos ;

            cout << "$"<< result << " \n";
            break;
        case 2:
            cout << "La conversion de Pesos mexicanos a Dollares es: \n";
            pesos = 0.059;
            result =  mexican * pesos ;

            cout << "$"<< result << " \n";
            break;
        case 3:
            cout << "La conversion de Pesos mexicanos a Libras Esterlinas es: \n";
            pesos = 0.047;
            result =  mexican * pesos ;

            cout << "$"<< result << " \n";
            break;
        case 4:
            cout << "La conversion de Pesos mexicanos a Pesos Colombiano es: \n";
            pesos = 230.43;
            result = mexican * pesos;

            cout << "$"<< result << " \n";
            break;
        case 5:
            cout << "La conversion de  Pesos mexicanos a Pesos Dominicanos es: \n";
            pesos = 3.43;
            result =  mexican * pesos ;

            cout << "$"<< result << " \n";
            break;
        
        default:
            cout << "Opcion no validad";
            break;
        }
    }

    void dominican(int currency, int dominican){
        cout << "Elige entre las opciones:  \n 1# Euros \n 2# Dollares \n 3# Libras Esterlinas \n 4# Pesos Colombiano \n 5# Pesos Mexicanos \n";
        cin >> currency;

        switch (currency)
        {
        case 1:
            cout << "La conversion de Pesos Dominicanos a Euros es: \n";
            pesos = 0.016;
            result =  dominican * pesos;

            cout << "$"<< result << " \n";
            break;
        case 2:
            cout << "La conversion de Pesos Dominicanos a Dollares es: \n";
            pesos = 0.017;
            result = dominican * pesos;

            cout << "$"<< result << " \n";
            break;
        case 3:
            cout << "La conversion de Pesos Dominicanos a Libras Esterlinas es: \n";
            pesos = 0.014;
            result = dominican * pesos;

            cout << "$"<< result << " \n";
            break;
        case 4:
            cout << "La conversion de Pesos Dominicanos a Pesos Colombiano es: \n";
            pesos = 67.09;
            result = dominican * pesos;

            cout << "$"<< result << " \n";
            break;
        case 5:
            cout << "La conversion de  Pesos Dominicanos a Pesos Mexicanos es: \n";
            pesos = 0.29;
            result = dominican * pesos;

            cout << "$"<< result << " \n";
            break;
        
        default:
            cout << "Opcion no validad";
            break;
        }
    }

    void dollar(int currency, int dollar){
        cout << "Elige entre las opciones: \n 1# Euros \n 2# Libras Esterlinas \n 3# Pesos Colombiano \n 4# Pesos Mexicanos \n 5# Pesos Dominicanos \n";
        cin >> currency;

        switch (currency)
        {
        case 1:
            cout << "La conversion de Dollares a Euros es: \n";
            pesos = 0.93;
            result =  dollar * pesos;

            cout << "$"<< result << " \n";
            break;
        case 2:
            cout << "La conversion de Dollares a Libras Esterlinas es: \n";
            pesos = 0.80;
            result = dollar * pesos;

            cout << "$"<< result << " \n";
            break;
        case 3:
            cout << "La conversion de Dollares a Pesos Colombiano es: \n";
            pesos = 3898.00;
            result = dollar * pesos;

            cout << "$"<< result << " \n";
            break;
        case 4:
            cout << "La conversion de Dollares a Pesos Mexicanos es: \n";
            pesos = 16.92;
            result = dollar * pesos;

            cout << "$"<< result << " \n";
            break;

        case 5:
            cout << "La conversion de Dollares a Pesos Dominicanos es: \n";
            pesos = 58.10;
            result = dollar * pesos;

            cout << "$"<< result << " \n";
            break;
        
        default:
            cout << "Opcion no validad";
            break;
        }
    }
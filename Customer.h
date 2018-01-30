//
// Created by gusta on 29/01/2018.
//

#ifndef PO_GDELOSRIOS_A04_CUSTOMER_H
#define PO_GDELOSRIOS_A04_CUSTOMER_H

#include <iostream>


class Customer {
//Atributos
private:
    int id;
    std::string name;
    double discount; //discount rate in percentage
//Metodos
public:
    //Customer();
    Customer(int id, std::string name, double discount);
    int getID();
    std::string getName();
    double getDiscount();
    void setDiscount(double discount);
    std::string toString();

};


#endif //PO_GDELOSRIOS_A04_CUSTOMER_H

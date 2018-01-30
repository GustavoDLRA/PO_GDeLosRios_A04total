//
// Created by gusta on 29/01/2018.
//

#ifndef PO_GDELOSRIOS_A04_INVOICE_H
#define PO_GDELOSRIOS_A04_INVOICE_H

#include <iostream>
#include "Customer.h"
#include "InvoiceItem.h"

class Invoice {
//Atributos
private:
    std::string String;
    Customer*customer;
    double ammount =0;
   InvoiceItem items [0];
    void recalculateAmount();
    bool findItem(std::string id);
public:
    Invoice(std::string id, int customerID, std::string name, double discount);
    Invoice(std::string id, Customer*customer);
    std::string getID();
    Customer*getCustomer();
    void setCustomer(Customer*costumer);
    double getAmmount();
    double getAmmountAfterDiscount();
    std::string getCustomerName();
    bool addItem(std::string id, std::string description, int quantity, double unitPrice);
    bool addItem(Invoice item);
    bool removeItem(std::string id);
    bool removeItem(Invoice item);
    void updateItem(std::string id, std::string desc);
    bool updateItem(std::string id,int quantity);
    bool updateItem(std::string id, double unitPrice);
    bool updateItem(InvoiceItem item);
    std::string toString();


};


#endif //PO_GDELOSRIOS_A04_INVOICE_H

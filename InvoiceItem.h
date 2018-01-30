//
// Created by gusta on 29/01/2018.
//

#ifndef PO_GDELOSRIOS_A04_INVOICEITEM_H
#define PO_GDELOSRIOS_A04_INVOICEITEM_H

#include <iostream>

class InvoiceItem {
//Atributos
private:
    std::string id;
    std::string description;
    int quantity;
    double unitPrice;
//Metodos
public:
    InvoiceItem(std::string id, std::string description, int quantity, double unitPrice);
    std::string getID();
    std::string getDescription();
    void setDescription(std::string descriprion);
    int getQuantity();
    bool setQuantity(int quantity);
    double getUnitPrice();
    bool setUnitPrice(double unitPrice);
    double getTotal();
    std::string toString();
};


#endif //PO_GDELOSRIOS_A04_INVOICEITEM_H

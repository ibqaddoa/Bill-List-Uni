#include "Produkt.h"


Produkt::Produkt(double preis)
{
    this->preis = preis;
}

Produkt::Produkt()
{
}

double Produkt::getPreis()
{
    return this->preis;
}

Produkt::~Produkt()
{
    
}

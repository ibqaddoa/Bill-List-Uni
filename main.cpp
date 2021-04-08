#include "Abrechnung.h"
#include "Produkt.h"


int main()
{
    string fileName = "daten.txt";
    
    Abrechung i(2021, "Febuarary");
    i.readFile(fileName);
    
}

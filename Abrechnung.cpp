#include "Abrechnung.h"


Abrechung::Abrechung(int year, string month)
{
    this->jahr = year;
    this->monat = month;
    this->summe = 0;
}

void Abrechung::printData()
{
    double tmpSumme = this->summe;
    int anzahl = this->produkte.size();
    cout << "PREISE: " << endl;
    for (int i = 0; i < anzahl; i++)
    {
        cout << i + 1 << ": " << this->produkte[i].getPreis() << endl;
    }
    cout << "ABRECHNUNG:";
    cout << "Jahr: " << this->jahr << endl;
    cout << "Monat " << this->monat << endl;
    cout << "Summe: " << tmpSumme << endl;
    cout << "Durchschnittspreis: " << (tmpSumme/anzahl)<< endl;
};

void Abrechung::calculateSumme()
{
    double tmpSumme = 0;
    for (int i = 0; i < produkte.size(); i++)
    {
        tmpSumme += produkte[i].getPreis();
    }
    this->summe = tmpSumme;
}

void Abrechung::addProdukt(Produkt p)
{
    this->produkte.push_back(p);
}

int Abrechung::getJahr()
{
    return this->jahr;
}

string Abrechung::getMonat()
{
    return this->monat;
}

double Abrechung::getSumme()
{
    return this->summe;
}


void Abrechung::readFile(string fileName)
{
    fstream myFile;
    myFile.open(fileName, ios::in);
    if(myFile.is_open())
    {
        cout << "\nLesen der Datei"<<  fileName  <<"initialisiert... " << endl;
        while(!myFile.eof())
        {
            double tmpPreis;
            myFile >> tmpPreis;
            Produkt p(tmpPreis);
            this->addProdukt(p);
        }
    }
    else
    {
        cout << "Die Datei " << fileName << "konnte nicht geöffnet werden" << endl;
    }
    myFile.close();
    cout << "Datei " << fileName << "wurde geschlossen" << endl;
}


Abrechung::~Abrechung()
{
};


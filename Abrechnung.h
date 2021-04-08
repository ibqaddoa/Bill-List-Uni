#pragma once
#include "Produkt.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Abrechung
{
private:
    int jahr;
    string monat;
    double summe;
    vector<Produkt> produkte;
public:
//    Abrechung(); constructor
    Abrechung (int, string);
    void printData();
    void calculateSumme();
    void addProdukt(Produkt p);
    int getJahr();
    string getMonat();
    double getSumme();
    void readFile(string);
    ~Abrechung();
};

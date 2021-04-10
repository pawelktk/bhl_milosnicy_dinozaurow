#ifndef DATAKALENDARZOWA_H
#define DATAKALENDARZOWA_H
#include <iostream>
using namespace std;

class dataKalendarzowa{
	int dzien;
	int miesiac;
	int rok;

public:
	dataKalendarzowa(int d, int m, int y);
	int getDzien();
    int getMiesiac();
    string getMiesiacRzymski();
    bool czyWolne();
    int getRok();
    int dow();
    void set(int d, int m, int y);
};

#endif

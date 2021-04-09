#include "data/Data.h"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

vector <float> Data::MocGrzewcza(){
    fstream plik;
    string sciezka = "dane/mocGrzewcza.txt";
    plik.open(sciezka);
    vector <float> wektor;
    float bufor;
    while(plik>>bufor){
        wektor.push_back(bufor);
    }
    plik.close();
    return wektor;
}

void Data::WypiszMocGrzewcza() const{
    for(int i=0;i<mocGrzewcza.size();i++){
        cout<<mocGrzewcza[i]<<' ';
        if(i%4 == 0) cout<<endl;
    }
}
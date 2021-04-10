#include "data/Ogniwa.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void Ogniwa::setMiesiac(int miesiac){
    this->miesiac = miesiac;
}

void Ogniwa::setGodzina(float godzina){
    this->godzina = godzina;
}

//zwraca moc w watach na podstawie miesiaca i godziny
int Ogniwa::setMoc(){
    fstream plik;
    plik.open("dane/mocOgniw.txt");
    string dane;
    string sprawdzMiesiac="";
    string liczba = "";
    int licznik = 0;

    while(getline(plik,dane)){
        for(int i=0;i<dane.size();i++){
            if(dane[i]!=',' && dane[i]!=' ')sprawdzMiesiac+=dane[i];
            //cout<<sprawdzMiesiac<<endl;
            if(dane[i+1] == ',' || dane[i+1]==' '){
                if(stoi(sprawdzMiesiac) == miesiac){
                    liczba = "";
                    while(dane[i]!=' ')i++;
                    i++;
                    while(dane[i]!=' '){
                        liczba+=dane[i];
                        i++;
                    }
                    int l,p;
                    string liczbaS="";
                    for(int j=0;j<liczba.size();j++){
                        //cout<<liczba[j]<<endl;
                        if(liczba[j]!='-' && liczba[j]!= ' ')liczbaS+=liczba[j];
                        if(liczba[j+1] == '-'){
                            l=stoi(liczbaS);
                            cout<<l<<endl;
                            liczbaS = "";
                            //continue;
                        }

                        if(liczba[j+1]==' ' || liczba[j+1]==','){
                            p = stoi(liczbaS);
                            //cout<<l<<' '<<p;
                            if(l>p && ((float)l<godzina || godzina <= (float)p)){
                                //cout<<godzina<<endl;
                                //zachmurzenie
                            }else if(l<p && ((float)l<godzina || godzina <= (float)p) ){
                                //cout<<godzina<<endl;
                                //zachmurzenie
                            }
                        }
                    }
                }
            sprawdzMiesiac = "";
            }
            if(dane[i]==' ')break;
        }
    }

    plik.close();
    return 1;
}

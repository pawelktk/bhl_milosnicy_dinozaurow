#ifndef DATA_H
#define DATA_H
#include <vector>
using namespace std;
//przyjmujemy że domyślnie jednostka energii to W
class Data{
public:
    vector <float> MocGrzewcza();
private:
    int maksMoc = 10000;
    int mocGrzalki = 6000;
    int mocOgrzewaniaPomieszczen[7] = {1000,1000,1500,1500,2000,2000,3000};
    vector <float> mocGrzewcza = MocGrzewcza();
public:
    void WypiszMocGrzewcza() const;
};

#endif
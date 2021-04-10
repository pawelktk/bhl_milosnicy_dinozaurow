#include <iostream>
#include "data/Data.h"
#include "DataKalendarzowa.h"

using namespace std;

int main(){
    Data d;
    //d.WypiszMocGrzewcza();
    dataKalendarzowa x(10,4,2021);
    cout<<x.dow();
    return 0;
}
#include "DataKalendarzowa.h"
using namespace std;

dataKalendarzowa::dataKalendarzowa(int d, int m, int y)
{
	dzien=d;
	miesiac=m;
	rok=y;
}
int dataKalendarzowa::getDzien()
{
	return dzien;
}
int dataKalendarzowa::getMiesiac()
{
	return miesiac;
}
int dataKalendarzowa::getRok()
{
	return rok;
}

void dataKalendarzowa::set(int d, int m, int y)
{
	dzien=d;
	miesiac=m;
	rok=y;
}

string dataKalendarzowa::getMiesiacRzymski()
{
	if(miesiac==1) return "I";
	if(miesiac==2) return "II";
	if(miesiac==3) return "III";
	if(miesiac==4) return "IV";
	if(miesiac==5) return "V";
	if(miesiac==6) return "VI";
	if(miesiac==7) return "VII";
	if(miesiac==8) return "VIII";
	if(miesiac==9) return "IX";
	if(miesiac==10) return "X";
	if(miesiac==11) return "XI";
	if(miesiac==12) return "XII";

	return "NIL";
}

//https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
int dataKalendarzowa::dow() { rok-=miesiac<3; return(rok+rok/4-rok/100+rok/400+"-bed=pen+mad."[miesiac]+dzien)%7; }

bool dataKalendarzowa::czyWolne()
{
	if(dow()==7||dow()==6) //czy sobota lub niedziela
	{
		return 1;
	}
	return 0;
}
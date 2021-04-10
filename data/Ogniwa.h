#ifndef OGNIWA_H
#define OGNIWA_H

class Ogniwa{
private:
    int miesiac = 2;
    float godzina = 21.36;
    int niebo = 70;
    int moc = setMoc();
public:
    void setMiesiac(int);
    void setGodzina(float);
    int setMoc();
};

#endif
#ifndef MANUSIA_H
#define MANUSIA_H

#include "Jantung.h"
using namespace std;

class manusia
{
public:
    string nama;
    jantung varJantung;

    manusia(string pNama): nama(pNama)
    {
        cout  << nama << "Hidup \n";
    }

    ~manusia(){
        cout  << nama << "Mati \n";
    }
};

#endif
#ifndef IBU_H
#define IBU_H
#include <iostream>
#include <string>
using namespace std;
class ibu{
    public:
    string nama;
    vector<anak> daftar_anak;

    ibu(string pNama) : nama(pNama){
        cout << "Ibu \"" << nama << "\" ada \n";
    }
    ~ibu(){
        cout << "Ibu \"" << nama << "\" ada \n";
    }

    void tambahAnak(anak*);
    void cetakAnak();
};

void ibu::tambahAnak(anak* pAnak){
    daftar
}

#endif
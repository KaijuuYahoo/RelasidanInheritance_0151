#ifndef JANTUNG_H
#define IBU_H
#include <iostream>
#include <string>
using namespace std;

class jantung{
    public:
        jantung (){
            cout<< "jantung dihidupkan\n" <<endl; 
        }
        ~jantung(){
            cout<< "jantung dimatikan\n" <<endl;  
        }
};

#endif
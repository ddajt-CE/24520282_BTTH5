#include "CTime.h"

    CTime::CTime(){};
    CTime::CTime(int Gio,int Phut,int Giay){
    this->Gio = Gio;
    this->Phut = Phut;
    this->Giay = Giay;
    }
     istream& operator >> (istream& in, CTime &x){
        in >> x.Gio >> x.Phut >> x.Giay;
                if(in.fail() || x.Gio > 24 || x.Gio < 0 || x.Phut < 0 || x.Phut > 60 || x.Giay < 0 || x.Giay > 60){
            cout << "Khong hop le \n";
            exit(0);
        }
        return in;
    };
      ostream& operator << (ostream& out,CTime x){

        out << setw(2) << setfill('0') << x.Gio << ":" << setw(2) << setfill('0') << x.Phut << ":" << setw(2) << setfill('0') << x.Giay << endl;
        return out;

    };
    CTime CTime::operator ++(){
      Giay++;
    if (Giay >= 60) {
        Giay = 0;
        Phut++;

        if (Phut >= 60) {
            Phut = 0;
            Gio++;

            if (Gio >= 24) {
                Gio = 0;
            }
        }
    }
    return *this;
    };
    CTime CTime::operator --(){
      Giay--;
    if (Giay >= 60) {
        Giay = 0;
        Phut--;

        if (Phut >= 60) {
            Phut = 0;
            Gio--;

            if (Gio >= 24) {
                Gio = 0;
            }
        }
    }
    return *this;
    };


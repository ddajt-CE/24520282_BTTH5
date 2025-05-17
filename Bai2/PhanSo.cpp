#include "PhanSo.h"
    int ucln(int x , int y){
    while(y){
        int t = x%y;
        x = y;
        y = t;
    }
    return x;

    }
    PhanSo::PhanSo(){};
    PhanSo::PhanSo(int tu, int mau ){
        Tu = tu;
        Mau = mau;
    };
     istream& operator >> (istream& in,PhanSo &x){
        in >> x.Tu >> x.Mau;
        return in;
    };
     ostream& operator << (ostream& out,PhanSo x){
    out << x.Tu << "/" << x.Mau << endl;
    };
    void  PhanSo::rutgon(){
    int x = ucln(Tu,Mau);
    Tu/= x;
    Mau/= x;
    }
     PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = a.Tu * b.Mau + b.Tu * a.Mau;
    c.Mau = a.Mau * b.Mau;
    return c;
    };
     PhanSo operator - (PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = a.Tu * b.Mau - b.Tu * a.Mau;
    c.Mau = a.Mau * b.Mau;
    return c;
    };
    PhanSo operator * (PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = a.Tu *b.Tu ;
    c.Mau = a.Mau * b.Mau;
    return c;
    };
     PhanSo operator / (PhanSo a, PhanSo b){
    PhanSo c;
    c.Tu = a.Tu *b.Mau;
    c.Mau = a.Mau * b.Tu;
    return c;
    };
     bool operator == (PhanSo a, PhanSo b){
    a.rutgon();
    b.rutgon();
    if(a.Tu == b.Tu && a.Mau == b.Mau) return true;
    else return false;

    };

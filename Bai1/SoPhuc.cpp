#include "SoPhuc.h"


    SoPhuc::SoPhuc(double dThuc,double dAo){
    this->dThuc = dThuc;
    this->dAo = dAo;
    }
    SoPhuc::SoPhuc(){};
     SoPhuc operator + (SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.dThuc = a.dThuc + b.dThuc;
    c.dAo = a.dAo + b.dAo;
    return c;
    };
      SoPhuc operator - (SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.dThuc = a.dThuc - b.dThuc;
    c.dAo = a.dAo - b.dAo;
    return c;
    };
      SoPhuc operator * (SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.dThuc = a.dThuc*b.dThuc - b.dAo*a.dAo;
    c.dAo = a.dThuc * b.dAo + a.dAo*b.dThuc;
    return c;
    };
    // a = a.dThuc; b = a.dAo; c = b.dThuc; d = b.dAo;
      SoPhuc operator / (SoPhuc a, SoPhuc b){
        SoPhuc c;
        c.dThuc = ((a.dThuc*b.dThuc) + (a.dAo*b.dAo)) / (b.dThuc*b.dThuc + b.dAo*b.dAo);
        c.dAo = ((a.dAo*b.dThuc) - (a.dThuc*b.dAo)) / (b.dThuc*b.dThuc + b.dAo*b.dAo);
        return c;
    };
      bool operator == (SoPhuc a, SoPhuc b){
    if(a.dThuc == b.dThuc && a.dAo == b.dAo) return true;
    };
      bool operator != (SoPhuc a, SoPhuc b){
    if(a.dThuc != b.dThuc || a.dAo != b.dAo) return true;
    };
      istream& operator >> (istream& in,SoPhuc &x){
        in >> x.dThuc >> x.dAo;
        return in;
    };
    ostream& operator << (ostream& out, SoPhuc x){
    if(x.dAo > 0) out << x.dThuc << "+" << x.dAo << "i" <<endl;
    else out << x.dThuc << x.dAo << "i" <<endl;
    };

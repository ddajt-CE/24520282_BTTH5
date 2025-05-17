#include "Dathuc.h"

      istream& operator >> (istream& in,Dathuc &x){
        in >> x.Bac;
        x.HeSo = new int[x.Bac+1];
        for(int i = x.Bac;i>=0;i--){
            cout << "Nhap he so cho bac " << i << ":" << endl;
            in >> x.HeSo[i];
        }
        return in;
    };
      ostream& operator << (ostream& out,Dathuc x){
        out << x.HeSo[x.Bac] << "x^" << x.Bac;
        for(int i = x.Bac-1;i>=1;i--){
                if(i!=1){
                if(x.HeSo[i]>0) out << "+" << x.HeSo[i] << "x^" << i;
                else out << x.HeSo[i] << "x^" << i;}

                else{
                if(x.HeSo[i]>0) out << "+" << x.HeSo[i] << "x";
                else out << x.HeSo[i] << "x";
                }
        }
        if(x.HeSo[0] > 0){
            out << "+" << x.HeSo[0];
        }
        else out << x.HeSo[0];
        return out;
    };

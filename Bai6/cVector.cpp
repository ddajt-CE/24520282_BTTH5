#include "cVector.h"
       cVector::cVector(){};
       cVector::cVector(const cVector &a){
         SoChieu = a.SoChieu;
         GiaTri = new int[SoChieu];
            for(int i = 0; i < SoChieu; i++) {
        GiaTri[i] = a.GiaTri[i];
    }
       };
       cVector& cVector::operator=(cVector &a){
            if(this != &a) {
        delete[] GiaTri;
        SoChieu = a.SoChieu;
        GiaTri = new int[SoChieu];
        for(int i = 0; i < SoChieu; i++) {
            GiaTri[i] = a.GiaTri[i];
        }
    }
    return *this;
       }
      istream& operator >> (istream& in,cVector &x){
        cout << "So chieu vector:";
        in >> x.SoChieu;
        if(cin.fail()){
            cout << "So chieu khong hop le" << endl;
             exit(0);
        }
        x.GiaTri = new int[x.SoChieu];
        cout << "Gia Tri Cua Vector:";
        for(int i = 0;i<x.SoChieu;i++){
            in >> x.GiaTri[i];
        }
        return in;
    };
      ostream& operator << (ostream& out,cVector x){
        for(int i = 0;i<x.SoChieu;i++){
            out << x.GiaTri[i] << " ";
        }
        return out;
    };
      cVector operator + (cVector a, cVector b){
        cVector c;
        if(a.SoChieu != b.SoChieu){
            cout << "Khong the thuc hien phep cong" << endl;
           exit(0);
        }
        else{
            c.SoChieu = a.SoChieu;
            c.GiaTri = new int[a.SoChieu];
            for(int i = 0;i<a.SoChieu;i++){
                c.GiaTri[i] = a.GiaTri[i] + b.GiaTri[i];
            }

        }return c;
    };
      cVector operator - (cVector a, cVector b){
        cVector c;
        if(a.SoChieu != b.SoChieu){
            cout << "Khong the thuc hien phep cong" << endl;
            exit(0);
        }
        else{

            c.SoChieu = a.SoChieu;
            c.GiaTri = new int[a.SoChieu];
            for(int i = 0;i<a.SoChieu;i++){
                c.GiaTri[i] = a.GiaTri[i] - b.GiaTri[i];
            }

        }return c;
    };
      int operator * (cVector a, cVector b){
        if(a.SoChieu != b.SoChieu){
            cout << "Khong the thuc hien phep tru" << endl;
            exit(0);
        }
        else{
        int c = 0;
        for(int i = 0;i<a.SoChieu;i++){
            c = c + (a.GiaTri[i] * b.GiaTri[i]);
        }
        return c;
        }

    };
      bool operator == (cVector a, cVector b){
        if(a.SoChieu != b.SoChieu){
            cout << "Khong the thuc hien so sanh" << endl;
            exit(0);
        }
        else{
            for(int i = 0;i<a.SoChieu;i++){
                if(a.GiaTri[i] != b.GiaTri[i]) return false;
            }
            return true;
        }
    };
    cVector::~cVector(){
        delete []GiaTri;
    };

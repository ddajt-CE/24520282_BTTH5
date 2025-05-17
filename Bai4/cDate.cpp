#include "cDate.h"

    istream& operator >> (istream& in, cDate &x){
        in >> x.iNgay >> x.iThang >> x.iNam;
        if(x.iNgay > 31 || x.iThang > 12){
            cout << "Nhap sai";
            cin.fail();
        }
        return in;
    };
    ostream& operator << (ostream& out, cDate x){
        out << setw(2) << setfill('0') << x.iNgay << "/" << setw(2) << setfill('0') << x.iThang << "/" << x.iNam << endl;
        return out;
    };
    cDate cDate::operator ++(){
    ++iNgay;
    if(iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12){
        if(iNgay > 31){
            ++iThang;
            if(iThang > 12) ++iNam;
        }
    }
    else{
        if(iNgay > 30){
            ++iThang;
            if(iThang > 12) ++iNam;
        }
    }
    return (*this);

    };
    cDate cDate::operator --(){
        --iNgay;
        if(iNgay < 1) --iThang;
        if(iThang < 1) --iNam;
    return (*this);
    };

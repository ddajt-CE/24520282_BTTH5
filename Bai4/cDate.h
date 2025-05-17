#pragma once
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


class cDate{
private:
    int iNgay,iThang,iNam;
public:
    friend istream& operator >> (istream& in, cDate &x);
    friend ostream& operator << (ostream& out,cDate x);
    cDate operator ++();
    cDate operator --();
};

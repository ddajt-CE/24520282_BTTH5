#pragma once
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

class cVector{
private:
    int SoChieu;
    int* GiaTri;
public:
    cVector();
    cVector( const cVector &a);
    cVector& operator = (cVector& a);
    friend istream& operator >> (istream& in,cVector &x);
    friend ostream& operator << (ostream& out,cVector x);
    friend cVector operator + (cVector a, cVector b);
    friend cVector operator - (cVector a, cVector b);
    friend int operator * (cVector a, cVector b);
    friend bool operator == (cVector a, cVector b);
    ~cVector();
};

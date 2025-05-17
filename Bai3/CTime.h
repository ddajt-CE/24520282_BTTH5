#pragma once
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

class CTime{
private:
    int Gio,Phut,Giay;
public:
    CTime();
    CTime(int Gio,int Phut,int Giay);
    friend istream& operator >> (istream& in, CTime &x);
    friend ostream& operator << (ostream& out,CTime x);
    CTime operator ++();
    CTime operator --();
};

#pragma once
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class PhanSo{
private:
    int Tu, Mau;
public:
    PhanSo();
    PhanSo(int tu, int mau = 1);
    void rutgon();
    friend istream& operator >> (istream& in,PhanSo &x);
    friend ostream& operator << (ostream& out,PhanSo x);
    friend PhanSo operator + (PhanSo a, PhanSo b);
    friend PhanSo operator - (PhanSo a, PhanSo b);
    friend PhanSo operator * (PhanSo a, PhanSo b);
    friend PhanSo operator / (PhanSo a, PhanSo b);
    friend bool operator == (PhanSo a, PhanSo b);
};

int ucln(int x , int y);

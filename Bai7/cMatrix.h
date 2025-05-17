#pragma once
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

class cMatrix{
private:
    int row,column;
    int* val;
public:
cMatrix();
cMatrix(const cMatrix& x);
cMatrix& operator = (const cMatrix& x);
friend istream& operator >> (istream& in,cMatrix &x);
friend ostream& operator << (ostream& out,cMatrix x);
cMatrix operator + (const cMatrix& x) const;
cMatrix operator - (const cMatrix& x) const;
cMatrix operator * (const cMatrix& x) const;
cMatrix operator * (const vector<int>& v)const;


};


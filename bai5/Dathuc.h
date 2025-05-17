#pragma once
#include<bits/stdc++.h>
using namespace std;

class Dathuc{
private:
    int Bac;
    int* HeSo;
public:
    friend istream& operator >> (istream& in,Dathuc &x);
    friend ostream& operator << (ostream& out,Dathuc x);
};

    #pragma once
    #include<bits/stdc++.h>
    using namespace std;

    class SoPhuc{
    private:
        double dThuc,dAo;
    public:
        SoPhuc(double dThuc,double dAo = 0);
        SoPhuc();
        friend SoPhuc operator + (SoPhuc a, SoPhuc b);
        friend SoPhuc operator - (SoPhuc a, SoPhuc b);
        friend SoPhuc operator * (SoPhuc a, SoPhuc b);
        friend SoPhuc operator / (SoPhuc a, SoPhuc b);
        friend bool operator == (SoPhuc a, SoPhuc b);
        friend bool operator != (SoPhuc a, SoPhuc b);
        friend istream& operator >> (istream& in,SoPhuc &x);
        friend ostream& operator << (ostream& out, SoPhuc x);
    };

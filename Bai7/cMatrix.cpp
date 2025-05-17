#include "cMatrix.h"


cMatrix::cMatrix(){};
cMatrix::cMatrix(const cMatrix& x){
    this->row = x.row;
    this->column = x.column;
    this->val = new int[x.row*x.column];
    for(int i = 0;i<this->row;i++){
        for(int j = 0;j<this->column;j++){
            this->val[i*this->column + j] = x.val[i*this->column + j];
        }
    }
};
cMatrix& cMatrix::operator = (const cMatrix& x){
if((this)!=&x){
    delete []val;
    this->row = x.row;
    this->column = x.column;
    this->val = new int[x.row*x.column];
    for(int i = 0;i<this->row;i++){
        for(int j = 0;j<this->column;j++){
            this->val[i*this->column + j] = x.val[i*this->column + j];
        }
    }
}
return (*this);
};
istream& operator >> (istream& in,cMatrix &x){
cout << "Nhap hang va cot ma tran:" << endl;
in >> x.row >> x.column;
x.val = new int[x.row * x.column];
cout << "Nhap gia tri:" << endl;
for(int i = 0;i<x.row;i++){
    for(int j = 0;j<x.column;j++){
        cin >> x.val[i*x.column + j];
    }
}
return in;
};
ostream& operator << (ostream& out,cMatrix x){
for(int i = 0;i<x.row;i++){
    for(int j = 0;j<x.column;j++){
        cout << x.val[i*x.column + j] << ' ';
    }
    cout << endl;
}
return out;
};
cMatrix cMatrix::operator + (const cMatrix& x) const{
cMatrix res;
res.row = row;
res.column = column;
res.val = new int[row * column];
if(this->row != x.row || this->column != x.column){
    cout << "Khong the thuc hien phep tinh" << endl;
    exit(0);
}
else{
    for(int i = 0;i<this->row;i++){
        for(int j = 0;j<this->column;j++){
            res.val[i*this->row + j] = this->val[i*this->column + j] + x.val[i*x.column + j];
        }
    }
    return (res);
}
};
cMatrix cMatrix::operator - (const cMatrix& x) const{
cMatrix res;
res.row = row;
res.column = column;
res.val = new int[row * column];
if(this->row != x.row || this->column != x.column){
    cout << "Khong the thuc hien phep tinh" << endl;
    exit(0);
}
else{
    for(int i = 0;i<this->row;i++){
        for(int j = 0;j<this->column;j++){
            res.val[i*this->row + j] = this->val[i*this->column + j] - x.val[i*x.column + j];
        }
    }
    return (res);
}
};
cMatrix cMatrix::operator * (const cMatrix& x) const{
    cMatrix c;
    if(this->column != x.row){
        cout << "Khong the thuc hien phep tinh " << endl;
        exit(0);
    }
    else{
        c.row = this->row;
        c.column = x.column;
        c.val = new int[c.row*c.column];
        for(int i = 0;i<c.row;i++){
            for(int j = 0;j<c.column;j++){
                c.val[i*c.column + j] = 0;
                for(int k = 0;k<this->column;k++){
                    c.val[i*c.column + j] += this->val[i*this->column + k] * x.val[k*x.column + j];
                }
            }
        }

    }
return c;
};

cMatrix cMatrix::operator * (const vector<int>& v)const{
cMatrix res;
res.row = row;
res.column = column;
res.val = new int[row * column];
if(this->column != v.size()){
    cout << "Khong the thuc hien phep tinh \n";
    exit(0);
}
else{
      for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            res.val[i*row + j] = v[j] * this->val[i*row+j];
        }
      }

}
 return res;
};





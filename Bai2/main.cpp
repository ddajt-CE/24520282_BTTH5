#include "PhanSo.h"

int main()
{
PhanSo a;
cout << "Nhap phan so a:" << endl;
cin >> a;
PhanSo b;
cout << "Nhap phan so b:" << endl;
cin >> b;
cout << "a+b="<<a+b;
cout << "a-b="<<a-b;
cout << "a*b="<<a*b;
cout << "a/b="<<a/b;
if(a==b) cout << "Hai phan so bang nhau";
else cout << "Hai phan so khong bang nhau";
}

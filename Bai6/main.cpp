#include "cVector.h"

int main()
{
cVector a,b;
cin >> a >> b;
cout << "Tong Hai Vector:" << a + b << endl;
cout << "Hieu Hai Vector:" << a-b<< endl;
cout << "Tich 2 vector:" << a*b << endl;
if(a == b){
    cout << "Hai vector bang nhau;";
}
else cout << "Hai vector khong bang nhau";
return 0;
}

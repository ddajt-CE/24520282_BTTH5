#include "cMatrix.h"
using namespace std;

int main()
{
cMatrix a;
cin >> a;
cMatrix b;
cin >> b;
cout << endl;
cout << "Tong hai ma tran:\n"<< a+b << endl;
cout << "Hieu hai ma tran:\n" << a-b << endl;
cout << "Tich hai ma tran:\n" << a*b << endl;
int n;
cout << "Kich thuc vector:";cin >> n;
vector<int> v(n);
cout << "Nhap gia tri cho vector \n";
for(int i = 0;i<n;i++){
    cin >> v[i];
}
cout << "Tich ma tran va vector:\n" << a*v << endl;

}


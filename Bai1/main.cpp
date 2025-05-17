#include "SoPhuc.h"


using namespace std;

int main()
{
    SoPhuc a;
    SoPhuc b;
    SoPhuc c;
    cin >> a >> b ;

    cout << "a + b = " << a+b;

    cout << "a - b = " << a-b;

    cout << "a * b = " << a*b;

    cout << "a / b = " << a/b;
    if(a == b) cout << "Hai so phuc bang nhau" << endl;
    if(a != b) cout << "Hai so phuc khong bang nhau" << endl;

}

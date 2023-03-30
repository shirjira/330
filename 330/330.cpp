#include <iostream>
using namespace std;
int main()
{
    int var = 20;
    int* ip = nullptr;
    double* ipl = nullptr;

    ip = &var;

    int** ipp = &ip;
    cout << "var=" << var << endl;
    cout << "&var =" << &var << endl;
    cout << "ip(i.e. &var)=" << ip << endl;
    cout << "ipp(i.e. &vip)=" << ipp << endl;
    cout << "*ip=" << *ip << endl;
    cout << "*ipp=" << *ipp << endl;
    cout << "**ipp=" << **ipp << endl;

    const int N = 5;
    int a[N] = { 0,10,20,30,40 };
    int* ptr = nullptr;
    ptr = a;


}
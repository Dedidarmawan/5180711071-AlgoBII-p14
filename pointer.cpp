#include<iostream>
using namespace::std;
main()
{
    float r,phi=3.14,luas;
    float *a=&r;
    cout<<"\nmasukkan nilai jari-jari=";cin>>r;
    luas=phi*(*a * *a);
    cout<<"\nluas lingkaran adalah="<<luas;
}

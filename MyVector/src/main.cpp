#include<iostream>
#include<MyVector.hpp>
using namespace std;
main()
{
    MyVector v(100);

    for(int i=0;i<v.getSize();i++)
    {
        v[i] = i;
    }

    cout<<"v[5] is "<<v[5]<<endl;
}
#include <iostream>
#include "MyVector.hpp"

MyVector::MyVector(int size):size(size){
    data = new int[size];
}

MyVector::~MyVector(){
    delete[] data;
}

int& MyVector::operator[](int index)
{
    if(index<size && index>=0)
    return data[index];
    else
    throw "out of bound";
}

int MyVector::getSize() const
{
    return size;
}







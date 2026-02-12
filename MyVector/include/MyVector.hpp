

#include <cstddef>

using namespace std;

class MyVector {
private:
    int* data;
    int size;
public:
    MyVector(int size);
    ~MyVector();
    int& operator[](int index);
    int getSize() const;
};


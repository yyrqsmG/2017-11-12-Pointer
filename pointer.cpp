#include <iostream>
using namespace std;

template <typename T>
class Pointer{
private:
    T *str;
public:
    Pointer(T *ptr)
    {
        str = new T;
        str = ptr;
    }
    ~Pointer()
    {
        delete str;
        str = NULL;
    }
    Pointer<T> operator *(Pointer<T> ptr)
    {
        if(this == &ptr)
            return this;
        else
            str = ptr;
            return str;
    }
    void func(void)
    {
        cout<<"指针已就位"<<endl;
    }
};

int main(void)
{
    Pointer<int> p();
    Pointer<int>*func();
}

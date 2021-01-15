 #include <iostream>
using namespace std;

template <typename T>
void Swap(T& a,T& b){
    T t =a;
    a = b;
    b=t;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
         Swap(a, b); //Automatically push to call
         //Swap<int>(a, b);//Display the specified call
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
 
    float c = 12.3;
    float d = 23.4;
 
         //Swap(c, d); //Automatically push to call
         Swap<float>(c, d); //Display the specified call
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}

#include <iostream>
using namespace std;

class A{
    private:
        int k;
        const float mc = 3.14;
    public:
        A(){
            k = 0;
        };
        A(int _k){
            k = _k;
        };
        ~A(){
        };
};

int main() {
  cout << "Hello Michael!\n";
}
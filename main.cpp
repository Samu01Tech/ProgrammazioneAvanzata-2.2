#include <iostream>
using namespace std;

class A{
    private:
        int k;
        const float mc;
        static int numistanze;
        static const int a = 4;
        static const float b;
    public:
        A():mc(3.14){
            k = 0;
            numistanze++;
            cout << "Istanze: " << numistanze << endl;
        };
        A(int _k, float _mc):mc(_mc){
            k = _k;
            numistanze++;
            cout << "Istanze: " << numistanze << endl;
        };
        ~A(){
            numistanze--;
            cout << "Istanze: " << numistanze << endl;
        };
        int getNI(){
            return numistanze;
        }
};

int A::numistanze = 0;
const float A::b = 0.05;

int main() {
    A a1;
    A a2(3, 6.28);
    A a3;
    return 0;
}
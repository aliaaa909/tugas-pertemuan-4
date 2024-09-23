#include <iostream>
using namespace std;

    int main ()
{
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout<< "program deret fibonacci" << endl;
    cout<< "silahkan masukkan nilai ke n : " ;
    cin>> n;

    f_n1 = 0;
    f_n2 = 1;
    f_n = f_n1 +  f_n2;
    cout << endl ;
    cout << "Dari rumus f_n = f_n1 + f_n2, maka deret fibonacci :" << endl;
    cout<< f_n << " ";
     for(int i = 1 ; i < n; i++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
    }

    cout << "\t";
    return 0;
}

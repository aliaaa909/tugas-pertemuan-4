#include <iostream>
using namespace std;

int main () {
    int n;

    //asking for input
    cout<< "Hi! this is a Star pyramid program" << endl;
    cout<< "Input pyramid height: " << endl;
    cin>> n;

    //variabel declaration
    int i,j,k;

    for (int i = 1; i <= n; i ++){
     for (int j = i; j <= n; j++ ){
     cout << " ";
     }

    for (int j = 1; j <= 2*i-1 ; j++ ){
     cout << "*";
     }
     cout<<endl;
}

      return 0;;
}


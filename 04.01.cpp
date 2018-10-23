#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    double pi = 3.14;
    double S = x * x * 4 * pi;
    double V = (x * x * x * pi * 4)/3;
     if(S == V){
        cout << "Equal!" << endl;
    }else if(S > V){
        cout << "Area is larger." << endl;
     }
    else{
        cout << "Volume is larger." << endl;
    }
}

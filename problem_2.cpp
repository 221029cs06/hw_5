#include <iostream>
using namespace std;
float num( float km, float b){
    return  km * b;
}
int main() {
   
    float km,b=1000.0;
    cin>>km;
    cout<<num(km,b);

    return 0;
}

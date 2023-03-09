#include <iomanip>
#include <iostream>
using namespace std;
float num(float a, float b){
    return a/b;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<setprecision(3)<<num(a,b);
    return 0;
}

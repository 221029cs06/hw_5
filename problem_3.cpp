#include <iostream>
using namespace std;
 

void num(int a, int b, int c)
{
   
     if(a*a==b*b+c*c ||b*b==c*c+a*a || c*c==a*a+b*b)
    {
        cout<<"Yes"<<endl;
    }else{
        cout<<"No";
    }
}

int main()
{
     
    
    int a, b, c;
    cin>>a>>b>>c;
    num(a,b,c);
}

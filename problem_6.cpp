#include<iostream>
using namespace std;
int main ()
{
    int arr[5], sum=1;
   
  
   
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum *= arr[i];
      
       
    }
    cout << sum;
 
    return 0;
}

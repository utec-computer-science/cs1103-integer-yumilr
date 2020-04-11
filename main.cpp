#include <iostream>
#include "Integer.h"

using namespace std;

int main(){
    Integer a=Integer();
    Integer b(4);
    Integer c(235);
    Integer d= c;
    a=b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<< d+4<<endl;
    int m=a^2;
    int n=d^0;
    cout<< m<<endl;
    cout<< n<<endl;
}





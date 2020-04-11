#include "Integer.h"
using namespace std;
Integer::Integer(){}//cout<<value<<"   sin parametro"<<endl;}
Integer::Integer (int value){
    this->value=value;
//    cout<<value<<"  int parametro;
}
Integer::Integer(const Integer& other){
    this->value=other.value;
//    cout<<value<<"  other parametro"<<endl;
}
Integer Integer::operator=(const Integer &other) {
    this->value=other.value;
 //   cout<<value<<"  op ="<<endl;
    return *this;
}
Integer Integer::operator+(int value){
    this->value=this->value+value;
  //  cout<<this->value<<"  op +"<<endl;
    return *this;
}
Integer Integer::operator^(int p){
    if (p==0) return 1;
    else
        for (int i = 1; i < p; ++i) {
        this->value*=value;
        }//cout<<value<<" op ^"<<endl;
    return *this;
}
Integer::operator int(){
    return this->value;
}

ostream& operator <<(ostream& os, const Integer&A){
    os << A.value;
}
istream& operator >>(istream& os, Integer&A){
    os >> A.value;
}
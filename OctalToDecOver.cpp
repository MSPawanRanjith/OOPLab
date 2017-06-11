#include<iostream>
using namespace std;

class octal{
  int oct,ten,dec;
public:
  octal(){
    oct=0;
    ten=1;
  }
  void operator =(int x){
    int r;
    dec=x;
    while(x!=0){
      r=x%8;
      x=x/8;
      oct=oct+ten*r;
      ten=ten*10;
    }
  }
  int operator +(int y){
    return dec+y;
  }
  friend ostream& operator <<(ostream &,octal);

};
ostream& operator <<(ostream& o,octal obj){
  o<<"The octal : "<<obj.oct<<"\nThe dec : "<<obj.dec<<"\n";
  return o;
}
int main(){
  octal o1;
  int x;
  cout<<"Enter the integer \n";
  cin>>x;
  o1=x;
  cout<<o1;
  int y=o1+x;
  cout<<"The added value : "<<y<<"\n";
  return 0;
}

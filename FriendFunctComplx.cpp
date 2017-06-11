#include<iostream>
using namespace std;

class complex{
  int real,img;
public:
  complex(){
    cout<<"Enter the number : "<<endl;
    cin>>real>>img;
  }

  friend void add(complex &,complex &);
  friend void mul(complex &,complex &);
};
void add(complex &c1,complex &c2){
  if(c1.img+c2.img>=0){
    cout<<"The addition is : "<<(c1.real+c2.real)<<" + "<<c1.img+c2.img<<" i"<<endl;
  }
  cout<<"The addition is : "<<(c1.real+c2.real)<<" "<<c1.img+c2.img<<" i"<<endl;
}
void mul(complex &c1,complex &c2){
  if(c1.img+c2.img>=0){
    cout<<"The addition is : "<<((c1.real*c2.real)-(c1.img*c2.img))<<" + "<<(c1.real*c2.img)+(c1.img*c2.real)<<" i"<<endl;
  }
  cout<<"The addition is : "<<((c1.real*c2.real)-(c1.img*c2.img))<<" "<<(c1.real*c2.img)+(c1.img*c2.real)<<" i"<<endl;
}
int main(){
  complex a;
  complex b;
  add(a,b);
  mul(a,b);
  return 0;

}

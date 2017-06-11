#include<iostream>
using namespace std;

class si{
  float p,t,r;
public:
  si(){
    //cout<<"Enter the principal amount"<<endl;
    //cin>>p;
  }
  void claculate(float p,float t=1.0,float r=12){
    std::cout << "The simple intrest for given " <<p<<"is : "<<(p*t*r)/100<<'\n';
  }
};
int main(){
  si s;
  float p;
  cout<<"Enter the principal amount"<<endl;
  cin>>p;
  s.claculate(p);
  s.claculate(p,2.0,24.0);
  s.claculate(p,12.0);
  return 0;
}

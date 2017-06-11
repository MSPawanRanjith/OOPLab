#include<iostream>
#include<exception>
using namespace std;

class MinimumBalance : public exception{
public:
  const char* check() const throw(){
    return "MinimumBalance is less to withdraw\n";
  }
};
class Acc{
public:
  float acc,bal,with,depo;
  void get(){
    cout<<"Enter the acc details \n";
    cin>>acc>>bal;
  }
  void show(){
    cout<<"Acc : "<<acc<<" Bal : "<<bal<<"\n";
  }
  void deposit(){
    cout<<"Amount to deposit \n";
    cin>>depo;
    bal+=depo;
  }
  void withdraw(){
    cout<<"Total Bal : "<<acc<<endl;
    cout<<"Amount to withdraw : \n";
    cin>>with;
    try{
      if(with<=acc)
        bal-=with;

    else{
      MinimumBalance m;
      throw m;
    }
  }
  catch(MinimumBalance &e){
    cout<<e.check();
  }
  }
};
int main(){
  Acc a;
  a.get();
  a.show();
  a.deposit();
  a.show();
  a.withdraw();
  a.show();
  return 0;
}

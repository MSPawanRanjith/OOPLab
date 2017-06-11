#include<iostream>
using namespace std;

class vectors{
  int a,b,c;
public:
  void set(){
    cout<<"Enter the Vector values : "<<endl;
    cin>>a>>b>>c;
  }
  void display(){
    cout <<"The vector is : " <<a<<"i + "<<b<<"j + "<<c<<"k "<< '\n';
  }
  void mul(){
    int n;
    cout<<"Enter the scalar to multiply : "<<endl;
    cin>>n;
    a *=n;
    b *=n;
    c *=n;
  }
};
int main(){
  vectors v;
  v.set();
  v.display();
  v.mul();
  v.display();
  return 0;
}

#include<iostream>
using namespace std;

//class A;
class B;
class A{
  int x,y;
public:
  void set(){
    cout<<"Enetr the values :"<<endl;
    cin>>x>>y;
  }
  void swap_A(B &obj);
  void dis(){
    cout<<" From A "<<x<<"   "<<y<<endl;
  }
  friend class B;
};

class B{


public:
      int a,b;
  void swap(A &obj){

    a=obj.x;
    b=obj.y;
  }
  B(){
    a=0;
    b=0;
    cout<<"Before exchange :"<<a<<"   "<<b<<endl;
  }
  void display(){
    cout<<"After exchange : "<<a<<"   "<<b<<endl;
  }
  friend class A;
};
void A :: swap_A(B &obj){
  x=obj.a;
  y=obj.b;
}
//void B :: swap(A &obj)
int main() {
  /* code */
  A a;
  a.set();
  B b;
//  b.display();
  b.swap(a);
  B s;
  a.swap_A(s);
  a.dis();
  b.display();

  return 0;
}

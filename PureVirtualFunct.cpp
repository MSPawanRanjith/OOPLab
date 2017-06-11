#include <iostream>
using namespace std;

class shape{
public:
  virtual float area()=0;
};
class Rectangle :public shape{
  float l,b;
public:
  Rectangle(float len,float bre){
    l=len;
    b=bre;
  }
  float area(){
    return l*b;
  }
};
class Elipse : public shape{
  float max;
  float min;
public:
  Elipse(float Max,float Min){
    max=Max;
    min=Min;
  }
  float area(){
    return (3.14*max*min);
  }
};
int main(){
  float l,b,max,min;
  cout<<"Enter the lenght and breadth : \n";
  cin>>l>>b;
  Rectangle r(l,b);
  cout<<"Enter the max lenght and min breadth : \n";
  cin>>max>>min;
  Elipse e(max,min);
  shape *s;
  s=&r;
  cout<<"The area is : "<<s->area()<<"\n";
  s=&e;
  cout<<"The area is : "<<s->area()<<"\n";
  return 0;
}

#include<iostream>
#include<math.h>
using namespace std;

class circle{

public:
  float rad;
  circle(float r){
    rad=r;
  }
  float area(){
    return 3.14*rad*rad;
  }
};
class sector:public circle{
  float a;
public:
  sector(float angle,float rad):circle(rad){
    a=angle;
  }
  float area(){
    return(rad*rad*(a/2));
  }
};
class segment : public circle{
  float h;
public:
  segment(float l,float rad):circle(rad){
    h=l;
  }
  float area(){
    return pow((rad*rad*((rad-h)/rad)-((rad-h)*((2*rad*h)-h*h))),0.5);
  }
};
int main(){
  float a,b,c;
  cout<<"radius : \n";
  cin>>a;
  cout<<"angle :\n";
  cin>>b;
  cout<<"length :\n";
  cin>>c;
  circle obj(a);
  sector sec(b,a);
  segment seg(c,a);
  cout<<"circle "<<obj.area()<<endl;
  cout<<"sector "<<sec.area()<<endl;
  cout<<"segment "<<seg.area()<<endl;
  return 0;
}

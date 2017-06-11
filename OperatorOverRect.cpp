#include<iostream>
using namespace std;

class Rectangle{
  int l,b;
public:
  Rectangle(){

  }
  Rectangle(int len,int bre){
    l=len;
    b=bre;
  }

  Rectangle operator +(Rectangle r){
    Rectangle temp;
    temp.l=l+r.l;
    temp.b=b+r.b;
    return temp;
  }
  int operator == (Rectangle r){
    if(l==r.l && b==r.b)
      return 1;
    else
      return 0;
  }
  friend ostream & operator <<(ostream & o,Rectangle &r);
};
ostream & operator <<(ostream &o,Rectangle &r){
  o<<"length : "<<r.l<<"\n breadth : "<<r.b<<"\n Peri and Area : "<<2*(r.l+r.b)<<"  "<<r.l*r.b<<"\n";
  return o;
}
int main(){
  int l,b;
  cout<<"Enter the values : "<<endl;
  cin>>l>>b;

  Rectangle r1(l,b);
  cout<<r1;

  cout<<"Enter the values : "<<endl;
  cin>>l>>b;
  Rectangle r2(l,b);
  cout<<r2;

  if(r1==r2){
    cout<<"Same rectangle\n";
  }
  else
    cout<<"Not same Rectangle\n";
  Rectangle r3;
  r3=r1+r2;
  cout<<r3;
  return 0;
}

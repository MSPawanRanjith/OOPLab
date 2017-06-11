#include<iostream>
using namespace std;

class Shape{
  //int a,b,c;
public:
  float area(int a){
    return a*a;
  }
  float area(int a, int b){
    return a*b;
  }
  float area(float c,float pi=3.14){
    return pi*c*c;
  }
};
int main(){
  int a,b;
  float c;
  Shape s;
  cout<<"Enter the values : \n";
  cin>>a>>b>>c;
  cout<<"Square area : "<<s.area(a)<<endl;
  cout<<"Rectangle area :"<<s.area(a,b)<<endl;
  cout<<"Circle area : "<<s.area(c)<<endl;
  return 0;
}

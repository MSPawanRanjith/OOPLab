#include<iostream>
using namespace std;
class dist{
  int feet;
  float inches;
public:

  void get(int i,float f){
    feet=i;
    inches=f;
  }
  void operator =(dist d){
    feet=d.feet;
    inches=d.inches;
  }
  dist operator ++(){
    ++(this->feet);
    ++(this->inches);
    return *this;
  }
  dist operator --(int){
    (this->feet)--;
    (this->inches)--;
    return *this;
  }
  friend ostream& operator <<(ostream&,dist);
};
ostream& operator <<(ostream& o,dist d){
  o<<"The feet : "<<d.feet<<"\nThe inches : "<<d.inches<<"\n";
  return o;
}
int main(){
  int feet;
  float inches;
  cout<<"Enter the values : "<<endl;
  cin>>feet>>inches;
  dist d1;
  d1.get(feet,inches);
  cout<<d1;
  ++d1;
  cout<<d1;
  d1--;
  cout<<d1;
  dist d2;
  d2=d1;
  cout<<d2;
  return 0;
}

#include<iostream>
using namespace std;

class A{
  int a,b;
public:
  A(){
    std::cout << "Enter the a & b values :" << '\n';
    std::cin >> a>>b;
  }
  friend void mean(A & );
};
void mean(A &obj){
  cout<<"The Mean : "<<(float)(obj.a+obj.b)/2<<"\n";
}
int main(){
  A a;
  mean(a);
  return 0;
}

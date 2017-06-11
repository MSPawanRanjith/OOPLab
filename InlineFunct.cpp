#include<iostream>
using namespace std;

inline int max_three(int a,int b,int c){
  return (a>b && a> c)?a:(b>a && b>c)?b:c;
}
int main(){
  int a,b,c;
  std::cout << "Enter the three numbers :" << '\n';
  cin>>a>>b>>c;
  cout<<"The max :"<<max_three(a,b,c)<<endl;
  return 0;
}

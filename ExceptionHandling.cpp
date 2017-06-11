#include<iostream>
using namespace std;

int main(){
  int a,b,q[10];
  cout<<"Enter the values :\n";
  cin>>a>>b;
  try{
    if(b!=0){
      cout<<(float)(a/b);
    }
    else{
      throw b;
    }
  }
  catch(int ){
    cout<<"Division by zero \n";
  }
  for(int i=0;i<10;i++){
    q[i]=i+1;
  }
  cout<<"Enter the pos :\n";
  cin>>a;
  try{
    if(a>=1 && a<=9){
      cout<<"Value : "<<q[a];
    }
    else
      throw a;
  }
  catch (int){
    cout<<"The Invalid Subscript\n";
  }
  return 0;
}

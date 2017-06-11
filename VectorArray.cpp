#include<iostream>
using namespace std;

int n=0;
int f=1;
class vector{
    int a[10];
public:

  void set(){
    cout<<"No. of elements \n";
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
  }
  int operator [] (int p){
    cout<<"n is : "<<n<<"\n";
    if(p<0 || p>n-1){
      cout<<"Invalid script";
      f=-1;
      return f;
    }
    else
    return a[p];
  }

};
int main(){
  vector v;
  v.set();
  int pos;
  while(f>0){
    cout<<"Subscript : \n";
    cin>>pos;
    cout<<"Element in pos : "<<v[pos]<<endl;

  }
  return 0;
}

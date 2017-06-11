#include<iostream>
using namespace std;
int r,c;
class matrix{
public:
  int a[10][10];
  void get(){
    cout<<"Enter the row and coloumns : \n";
    cin>>r>>c;
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        cin>>a[i][j];
    }
  }
  matrix operator + (int p){
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        a[i][j]+=p;
    }
    return *this;
  }
  friend ostream& operator <<(ostream&,matrix);
};
ostream& operator << (ostream &o,matrix m){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      o<<m.a[i][j]<<"\t";
    o<<endl;
  }
  return o;
}
int main(){
  int sc;
  matrix m1,m2;
  m1.get();
  cout<<m1;
  cout<<"Enter the scalar to add : \n";
  cin>>sc;
  m2=m1+sc;
  cout<<m2;
  return 0;
}

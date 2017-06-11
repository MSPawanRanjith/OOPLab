#include<iostream>
using namespace std;
int flag =0;
class Matrix{
  int r,c,i,j,k,**m;
public:
  Matrix(int m,int n){
    r=m;
    c=n;
  }
  Matrix(Matrix &obj){
    r=obj.r;
    c=obj.c;
  }
  Matrix(){

  }
  ~Matrix(){
    cout<<"Deleted\n";
  }
  void set(){
    m=new int *[r];
    for(i=0;i<r;i++){
      m[i]=new int[c];
    }
    cout<<"Enter the element :\n";
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
        cin>>m[i][j];
    }
  }
  void display(){
    cout<<"Elements \n";
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
        cout<<m[i][j]<<"\t";
      cout<<endl;
    }
  }
  void add(Matrix &m1, Matrix &m2){
    m=new int *[r];
    for(i=0;i<r;i++){
      m[i]=new int [c];
    }
    if(m1.r!=m2.r || m1.c!=m2.c){
      flag=1;
      cout<<"cant add\n";
      return;
    }
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
        m[i][j]=m1.m[i][j]+m2.m[i][j];
    }
  }
  void mul(Matrix &m1,Matrix &m2){
    m=new int*[r];
    for(i=0;i<r;i++){
      m[i]=new int [c];
    }
    if(m1.c!=m2.r){
      flag=1;
      cout<<"cant multiply\n";
      return;
    }
    for(i=0;i<m1.r;i++){
      for(j=0;j<m2.c;j++){
        m[i][j]=0;
        for(k=0;k<m1.c;k++)
          m[i][j]+=m1.m[i][k]*m2.m[k][j];
      }
    }
  }
};
int main(){
//  Matrix a,b,c,d;
  int n,m,i,j;
  cout<<"Enter the row and coloumn \n";
  cin>>m>>n;
  Matrix a(m,n);
  cout<<"Enter the row and coloumn \n";
  cin>>i>>j;
  Matrix b(i,j);
  Matrix c(b);
  Matrix d(m,j);
  a.set();
  a.display();
  b.set();
  b.display();
  c.add(a,b);
  c.display();
  d.mul(a,b);
  d.display();
  return 0;
}

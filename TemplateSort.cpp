#include<iostream>
using namespace std;

template<class t>
void sort(t a[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
  }
}
template <class x>
void swap(x& a, x&b){
  x temp=a;
  a=b;
  b=temp;
}
int main()
{ int x[5]={10,50,30,40,20};
float y[5]={1.1,5.5,3.3,4.4,2.2};
sort(x,5);
sort(y,5);
cout<<"sorted x arrays";
for(int i=0;i<5;i++)
cout<<x[i]<<" ";
cout<<"\n";
cout<<"sorted y arrays";
for(int j=0;j<5;j++)
cout<<y[j]<<" ";
cout<<"\n";
return 0;
}

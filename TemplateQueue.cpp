#include<iostream>
#include<stdlib.h>
using namespace std;

int r=-1,f=0;
template<class t>
class queue{
  t q[4];
public:
  void insert(){
    t item;
    cin>>item;
    if(r==3){
      cout<<"Owerflow\n";
      return;
    }
    ++r;
    q[r]=item;
  }
  void deleted(){
    t del_item;
    if(r==-1){
      cout<<"Underflow\n";
      return;
    }
    del_item=q[f];
    f++;
    if(f>r){
      f=0;
      r=-1;
    }
  }
  void display(){
    if(r==-1){
      cout<<"No elements\n";
      return;
    }
    for(int i=f;i<=r;i++)
      cout<<q[i]<<"\t";

    cout<<endl;
  }
};
int main(){
  queue<int>w1;
  queue<float>w2;
  int ch1=1,ch2=1,n;
  cout<<"\nEnter\n1 for integer queue\n2 for double queue\n:";
  cin>>n;
  if(n==1)
  {
  for(;;)
  {
  cout<<"\n1 to insert\n2 to delete\n3 to display\n4 to exit\n";
  cin>>ch1;
  switch(ch1)
  {
  case 1:w1.insert();
  break;
  case 2:w1.deleted();
  break;
  case 3:w1.display();
  break;
  case 4:exit(1);
  default:
  cout<<"Invalid choice\n";
  }
  }
  }
  else
  {
  while(ch2)
  {
  cout<<"\n1 to insert\n2 to delete\n3 to display\n4 to exit\n";
  cin>>ch2;
  switch(ch2)
  {
  case 1:w2.insert();
  break;
  case 2:w2.deleted();
  break;
  case 3:w2.display();
  break;
  case 4:exit(1);
  default:
  cout<<"Invalid choice\n";
  }
}
}
  return 0;
  }

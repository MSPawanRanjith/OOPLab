#include<iostream>
#include<string.h>
using namespace std;
class segment{
  char str[20];
public:
  segment(){

  }
  segment(char temp[20]){
    strcpy(str,temp);
  }
  int operator ==(segment &obj){
    if(strcmp(str,obj.str)==0)
      return 1;
    else
      return 0;
  }
  segment& operator + (segment &obj){
    //segment temp;
    strcat(str,obj.str);
    return *this;
  }
  friend ostream& operator <<(ostream&,segment);
};
ostream& operator <<(ostream &o,segment obj){
  o<<obj.str<<endl;
  return o;
}
int main(){
  char str1[20],str2[20];
  cout<<"Enter the string : \n";
  cin>>str1;
  segment s1(str1);
  cout<<"Enter the string : \n";
  cin>>str2;
  segment s2(str2);
  segment s3;
  cout<<"First string  "<<s1<<" \n second string "<<s2<<"\n";
  if(s1==s2)
    cout<<"Same string \n";
  else
    cout<<"Not same string \n";
  s3=s1+s2;
  cout<<s3;
  return 0;

}

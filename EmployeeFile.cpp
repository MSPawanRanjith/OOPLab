#include<iostream>
#include<fstream>
using namespace std;

class employee{
public:
  char name[20];
  int emp;
  char dept[20];
  float salary;
};
int main(){
  employee e;
  char str[50];
  ofstream ofile;
  ofile.open("Sample.txt",ios::out);
  cout<<"Emp no, name , salary , dept \n";
  cin>>e.emp>>e.name>>e.salary>>e.dept;
  ofile<<e.emp<<endl;
  ofile<<e.name<<endl;
  ofile<<e.salary<<endl;
  ofile<<e.dept<<endl;
  ofile.close();
  char ch;
  int l=0,c=0,w=0;
  ifstream ifile;
  ifile.open("Sample.txt",ios::in);
//  ifile.seekg(0,ios::beg);
  ifile.getline(str,50,EOF);
  puts(str);
  ifile.seekg(0,ios::beg);
  ch=ifile.get();
  while(ch!=EOF){
    c++;
    if(ch==' '|| ch=='\n')
      w++;
    if(ch=='\n')
        l++;
        ch=ifile.get();
  }
  cout<<"No. of line word and char "<<l<<w<<c<<"\n";


  //puts(str);
  return 0;
}

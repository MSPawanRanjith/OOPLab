#include<iostream>
#include<fstream>
using namespace std;

int main(){
  char a[30],b[20],str[50];
  ofstream ofile;
  ofile.open("Myfile.dat");
  cout<<"Enter the elements : \n";
  cin.getline(a,30,'\n');
  ofile<<a<<endl;
  cout<<"Enter the secon \n";
  cin.getline(b,20,'\n');
  ofile.seekp(15);
  ofile<<b<<endl;
  ofile.close();
  ifstream ifile;
  ifile.open("Myfile.dat");
  ifile.seekg(0,ios::beg);
  ifile.getline(str,50,EOF);
  puts(str);
  return 0;
}

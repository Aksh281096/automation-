#include <iostream>
using namespace std;
int main(){
    string Fullname;
int input_1=20,input_2;
cout <<"value of input_1;"<<input_1<<"\n";
cout<<"Enter your fullname:";
//cin >>Fullname;
getline(cin,Fullname);
cout<<"\n\ fullname:";
cout<<Fullname;
cout<<"enter the value of input_2;";
cin>>input_2;
cout<<"value of input_2="<<input_2;
return 0;
}

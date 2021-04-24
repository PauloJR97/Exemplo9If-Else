#include <iostream>
using namespace std;

int main() 
{
 int num;
 
 cout<<"Informe o numero: ";
 cin>>num;

 if(num % 2 == 0){
   cout<<"PAR"<<endl;
 }else{
   cout<<"IMPAR"<<endl;
 }
 cout<<endl<<endl;
 return 0;
}
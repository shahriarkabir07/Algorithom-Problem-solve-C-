#include <iostream>
using namespace std;
int main(){ int N; cin>>N; cout<<N<<endl; int notes[]={100,50,20,10,5,2,1}; for(int i:notes){ cout<<N/i<<" nota(s) de R$ "<<i<<",00\n"; N%=i;} }
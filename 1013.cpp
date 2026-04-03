#include <iostream>
#include <cmath>
using namespace std;
int main(){ int A,B,C; cin>>A>>B>>C; int maxAB=(A+B+abs(A-B))/2; int m=(maxAB+C+abs(maxAB-C))/2; cout<<m<<" eh o maior"<<endl; }
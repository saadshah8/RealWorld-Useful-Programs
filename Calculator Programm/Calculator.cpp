#include<iostream>
#define line cout<<endl;
using namespace std;

float add(float x, float y){
	return x+y;}
float sub(float x, float y){
	return x-y;}
float mul(float x, float y){
	return x*y;}
float div(float x, float y){
	return x/y;}
float cal(float x, float y, float (*p)(float a,float b)){
	float calc;
	calc=(*p)(x,y);return calc;}

main(){
   float a,b, (*p)(int,int), c;
   char op;
   cout<<"Enter 1st Number : "; cin>>a;
   cout<<"Enter 2nd Number : "; cin>>b;
   loop:
   cout<<"Enter Operator(+,-,*,/) : "; cin>>op;line
   if(op=='+'){c=cal(a,b,add);
   cout<<"The Sum of "<<a<<" and "<<b<<" is : "<<c;}
   else if(op=='-'){c=cal(a,b,sub);
   cout<<"The Subtraction of "<<a<<" and "<<b<<" is : "<<c;}
   else if(op=='*'){c=cal(a,b,mul);
   cout<<"The Multiplication of "<<a<<" and "<<b<<" is : "<<c;}
   else if(op=='/'){c=cal(a,b,div);
   cout<<"The Division of "<<a<<" and "<<b<<" is : "<<c;}
   else {cout<<"Wrong Entry, Enter again ";line
   goto loop;}
}

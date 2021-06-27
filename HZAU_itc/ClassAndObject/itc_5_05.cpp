#include<iostream>
using namespace std;
class Imaginary
{public:
Imaginary(float a,float b)  {x=a;y=b;}
friend float Add(Imaginary c1,Imaginary c2);
friend float Sub(Imaginary c1,Imaginary c2);
private:
       float x,y;
};
float Add(Imaginary c1,Imaginary c2)
{  cout<<c1.x+c2.x<<"+"<<c1.y+c2.y<<"i"<<endl;}
float Sub(Imaginary c1,Imaginary c2)
{  cout<<c1.x-c2.x<<c1.y-c2.y<<"i"<<endl;}
 
int main()
{
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;   
    Imaginary imag1(x1,y1),imag2(x2,y2);   
    Add(imag1,imag2);  
    Sub(imag1,imag2);  
    return 0;
}

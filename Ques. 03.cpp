/////////////////////////////////////////////////////////////////////////////
// Name: Muhammad Safiullah
// Reg No: 2023337
// CS101 Assignment – 3
// This question calculate sphere area
////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<cmath>
using namespace std;
double Circleradius(float r){
 return 3.14 * r * r;
}
double Spherevolume(float r ){
     (4.0/3.0) * 3.14 * r * r * r;
}

int main(){
 int radius;
 cout<<"radius of circle :"<<endl;
 cin>>radius;
 float Area = Circleradius(radius );
 cout<<"Area of circle : " <<Area<<endl;
 float volume = Spherevolume(radius);
 cout<<"Area of sphere : "<< volume <<endl;
 return 0;
}
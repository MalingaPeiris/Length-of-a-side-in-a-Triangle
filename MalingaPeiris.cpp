//Malinga Peiris
//https://github.com/MalingaPeiris
//C++ program to find the side of a triangle when the angle and other two sides are given

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
        double A,B,C,D,T;//declaer variables 
        double const PI=3.14;//constant value

        //User inputs
        cout<<"Enter the length of side A : "<<endl;
        cin>>A;
        cout<<"Enter the length of side B : "<<endl;
        cin>>B;
        cout<<"Enter the angle in degrees : "<<endl;
        cin>>D;

        //Converting degrees into radians
        T=D/180*PI;

        //Calculating length of side C
        C=sqrt((pow(A,2)+pow(B,2))-2*A*B*cos(T));

        //output
        cout<<"Length of the side C : "<<C<<" units."<<endl;
}
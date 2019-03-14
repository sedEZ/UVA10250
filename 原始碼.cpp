#include<iostream>
#include<iomanip>
#include<math.h>

#define FIXED_FLOAT 0.0000000003
using namespace std;

double x_1,y_1,x_2,y_2;

int main(){

    while(cin>>x_1>>y_1>>x_2>>y_2){
        if(x_1==x_2&&y_1==y_2){
            cout<<"Impossible."<<endl;
            continue;
        }

        double v1,v2;
        double mid_x,mid_y;
        double l;
        double a,b;

        mid_x = (x_1+x_2)/2;
        mid_y = (y_1+y_2)/2;
     //   cout<<mid_x<<" "<<mid_y<<endl;


        v1 = x_1-x_2;
        v2 = y_1-y_2;

        //out<<v1<<" "<<v2<<endl;

        l=sqrt(v1*v1+v2*v2)/2;

        if(v2!=0){
            a=sqrt((l*l)*(v2*v2)/(v1*v1+v2*v2));
            b=(-1)*v1*a/v2;
        }
        else{
            a=0;
            b=l;
        }

       // cout<<l<<" "<<a<<" "<<b<<endl;

        cout<<fixed<<setprecision(10);
        cout<<mid_x+a<<" "<<mid_y+b<<" "<<mid_x-a<<" "<<mid_y-b<<endl;

    }

    return 0;
}

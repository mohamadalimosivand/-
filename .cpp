#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the size of the triangle side:"<<endl;
    cin>>a>>b>>c;
    if(a<c&&b<c&&c<a<b){
        cout<<"yes,we have a Gha-em zavie-ye"<<endl;

    }
    else
        cout<<"No!!.we don't have Gha-em zavie-ye";
}

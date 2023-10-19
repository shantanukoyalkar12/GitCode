#include<iostream>
using namespace std;

int main() {
float sal,netsal,da,it,gsal,n;
cout<<"Enter number of employees"<<endl;
cin>>n;

while (n--)
{
cout<<"Enter basic salary"<<endl;
cin>>sal;
da=0.52*sal;
gsal=sal+da;
it=0.30*gsal;
netsal=sal+da-it;
cout<<"Your net salary is:"<<netsal<<endl;
}

    return 0;
}
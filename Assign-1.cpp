//Write a program to accept two integers and check whether they are equal or not
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Num 1:";
    cin>>a;
    cout<<"\n Enter Num 2:";
    cin>>b;
    if(a==b)
    {
        cout<<"Num 1 and Num 2 are equal";
    }
    else
    {
        cout<<"Num 1 and Num 2 are not equal";
    }

    return 0;
}
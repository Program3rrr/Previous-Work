#include <iostream>

using namespace std;
//Inputs instructions to find sum of odd numbers from 1 to 100
//numbers divisible by two without leaving a remainder are not included
int main()
{
    int sum=0,c=0,i;
    for(int i=2;i<100;i++)
    {   
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<"sum : "<<sum<<endl;
    return 0;
}
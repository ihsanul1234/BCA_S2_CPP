/*print a text and find sum of floating point numbers inputed from the user*/
#include<iostream>
using namespace std;
void myname()
{
    cout << "My Name is Ihsanul Haq." << endl ;
}
int sum()
{
    float a,b;
    cin >> a>> b;
    cout<< "sum of two floating point numbers are " << a+b<< endl;
    return 0;
}
int main()
{
    myname();
    sum();
 }
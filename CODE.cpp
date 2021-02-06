/* Program for implementing the fibonacci recursion series using the concept of stack */

#include <iostream>
using namespace std;

int Fibonacci_Recursion_Series(int a);  // function declared 

int Fibonacci_Recursion_Series(int a) // starting the function
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
        return ( Fibonacci_Recursion_Series(a-1) + Fibonacci_Recursion_Series(a-2) ); // recursion concept
    }
}

int main() // main function
{
    int n=0,b;
    cout<<"Enter the number upto which you want the series"<<endl; // number upto which we want to display the series
    cin>>b;
    cout<<"Fibonacci series terms are = "<<endl;
    for(int i=0;i<=b;i++)
    {
        cout<<Fibonacci_Recursion_Series(n); // passing the element to the function
        n++; // incrementing the first term which we had taken for the series
    }
    return 0;
} // program ends
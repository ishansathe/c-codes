#include<iostream>
using namespace std;
#include <string>
#include <Vector>


int sum (int arr[]);
double fact(double num);



int main()
{
    cout<<"This program has 2 functions. \n";
    cout<<"Press 1 to accept an array and print it's sum\n";
    cout<<"Press 2 to accept a number and print its factorial!\n";

    int val;
    cin>>val;
    switch(val)
    {
        case 1:
            cout<<"You have chosen to accept an array and print its sum";
            cout<<"\n At the moment, we can only accept 10 numbers into the array and then print those. So please do the same. \n";
            cout<<"Enter the elements\n";
            //I am yet to figure out how to assign values at run time to dynamic array
            int array[10];
            for(int i = 0; i<10; i++)
            {
                cin>>array[i];
            }
            cout<<"Following is the sum of all elements in the array: "<<sum(array);
            break;
        case 2:
            cout<<"You have chosen to accept a number and print its factorial.\n";
            int fact_num;
            cin>> fact_num;
            cout<<"Following is the factorial of given number: " <<fact(fact_num);
            break;
        default:
            cout<<"You have not chosen a valid option. Re run the code to try again.";
    }
}
int sum(int arr[])
{
    int sum = 0;
    for(int i = 0; i<10; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

double fact(double num)
{
    double fact = 1;
    while(num!= 1)
    {
        fact = fact * num;
        num--;
    }
    return fact;
}
#include <iostream>
using namespace std;


int GCD(int x, int y)
{
    int r, q;
    while (r!=0)
    {
        r = x%y;
        x = y;
        y = r;
    }
    return x;
}
void sort_asc(int *_x, int *_y)
{
    int swap; //temporary variable

    if(*_x<*_y)
    {
        swap = *_x;
        *_x = *_y;
        *_y = swap;   
    }
    /*
    Since we have only 2 variables to be ordered, I used to swap methodology to reduce space complexity
    */
}
int main()
{
    cout<<"Hello World \n";
    int num1 , num2;
    int x, y;
    cout<<"I'm writing a program to print GCD of 2 variables.\n";
    cout<<"You can now enter in any order as I have adjusted to code to sort them themselves.\n";
    cin>> num1 >> num2;

    sort_asc(&num1, &num2);
    /*okay so note to self:
        I have used *call by address* method over here
        I wanted 2 values to be updated inside a function, So!
        I used memory reference operator '&' to reference address of variables num1 and num2
        Then inside the sort_asc function, I use '*' reference variable to reference the value stored in that address!
        So, what happened here is that we accessed those values, swapped them and returned them(updated values) to their specific addresses
        Hence, we have successfully returned values of 2 variables from a function using pointers!
    */
    int _GCD = GCD(num1, num2);
    cout<< _GCD;
}


/*
Another way to use the swap function (easier/ shorter)
call by reference
instead of all the pointers.
We could just use '&' address reference operator 
example
void sort(&a, &b)
{
    a = 1;
    b = 2;
}
and then the value of a and b would be changed in the main function as well!
this works because when we send argmuments during function call like
    sort(num1, num2)
we are already sending a sort of address of that value (and operations are done using the values not the address).
So yes, this is quite simpler.


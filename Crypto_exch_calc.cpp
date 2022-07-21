#include <iostream>
using namespace std;

int large(int Array[], int n);

int main()
{
    int i, n, m, k, arr1[100], arr2[100], final[100], convert[100];
    cout<<"Enter number of currencies; number of bitcoins that Ron has; conversion rate of BTC to dollar\n";
    cout<<"You can enter maximum 100 for each of above values\n";
    cout<<"Please enter each in succession.\n";
    cin>> n >> m >> k;
    cout<<"\n Now, enter the conversion rate for each number of currency that you entered\n";
    for(i = 0; i<n; i++)
    {
        cin>>arr1[i];
    }
    cout<<" Nice, the conversion rates have been stored.";
    cout<<"\n Now, let's look at the *amount* of cryptocurrency that Ron can get in exchange for 1 BTC for each number of crypto you mentioned.";
    cout<<"\n Kindly enter their values\n";
    for(i = 0; i<n ; i++)
    {
        cin>>arr2[i];
    }
    
    cout<<"\n Very nice. \n";
    cout<<"Now in the next step, we will calculate Maximum USD Ron can make by exchanging currencies.\n";
    cout<<"(P.S: Ron can have only 1 currency to be sold into USD by the end.\n";
    
    
    //Here, I will first covert BTC to other currency
    for(i = 0; i<n ; i++)
    {
        convert[i] = m * arr2[i];
    }

    //Now, I will calculate amount of those currencies into USD
    for(i = 0; i<n ; i++)
    {
        final[i] = convert[i] * arr1[i] ;
    }
    


    int max = large(final, n);
    cout<<"Largest amount of USD that Ron can make is \t" << max;

    
    return 0;
    
}   

int large(int Array[], int n)
{
    cout<<"Now, finding out largest value on exchange";
    int large = Array[1];
    for (int y = 0; y<n; y++)
    {
        if(large < Array[y])
            large = Array[y];
    }
    return large;
}   
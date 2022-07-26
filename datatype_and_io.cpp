
//This code is from Day 2 of Hacker Rank 30 Days of code.
//They made us have these fixed include and int main function
//meaning we couldn't add functions in that editor
//And this is not about the functions but rather me documenting what I learnt through research!
//In this problem, we are given an integer, a double and a string
//We have to add/concatenate a new of the same type and then display

/*
Catch:-
    Double was a floating point value (in the output)
    like 14.0 (but by default, it always removes the '.0' because it is termed unnecessary)

    String given in input would be a whole sentence
    Ex: It is a beautiful day today
    and simple "cin" considers whitespaces " " to be like end of argument 
    so by using that, we would get only the first word recorded.
    Moreover, to get the full sentence, we use getline (newly learnt).
        However! simply that would not return the result! In fact, it would not consider the input at all!

    I will explain how and what I did, next.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int input;
    double d_input;
    string str;
    string finals;
    
    // Read and save an integer, double, and String to your variables.
    cin>>input;
    
    cin>>d_input;
    
    cin.ignore();
    /*
        As I said before! simply getline does not accept input string. 
        THat is because there are other inputs given before it (It would work, if it was the first)
        getline assumes the change in line as completion of input.
        So, when we would give any input argument before that, It would consider it as end of input and not be registered.
        //TBH man I don't know why this works in VS Code but it did not in that editor. Maybe cuz of change of compiler version or something?
    */

    getline(cin, str);
    //Accepts the line as a whole into 'cin' and then stores it in 'str'

    finals = s + str;
    //various ways to concatenate the string, I just picked his one
    
    
    // Print the sum of both integer variables on a new line.
    input += i;
    cout<<input<<"\n";
    
    // Print the sum of the double variables on a new line.
    cout<<setprecision(1)<<fixed;
    //This is used to set the fixed decimal point value in c++
    /*
        This can be used in error handling.
        While I was doing trial and error, I noticed that when I simply entered floating values, with some other precision function, it would always round up the numbers
        Like if 14.6 => 15 
        and 15.3 => 15
        This can be erroneous. As when we are looking for exact values, but program gives us the rounded ones
        Just some thing to be kept in mind when looking at advanced coding.
    */
    d_input+= d;
    
    cout<<d_input<<"\n";
    
    // Concatenate and print the String variables on a new line
    cout<<finals;
    // The 's' variable above should be printed first.

    return 0;
}
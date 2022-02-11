/*==============================================================================================================
Class:          CIS 054
Assignment:     Lab Assignment 2-1
Name:           Jeffrey Leong
Date:           Feb 10, 2022

Purpose:        Ask for user input. Find the sum and average of the numbers. 
                Determine if numbers are positive or negative. Find the sum and aveage of the positive 
                and negative numbers.
Input:          first number, second number
Output:         sum of first number and second number.
===============================================================================================================*/

/*
if user number > 0
    find the sum of positive numbers 
    find average of positive numbers.
else
    find the sum of negative numbers.
    find average of negative numbers.
add counter
output 
*/

#include <iostream>
using namespace std;

int main(){
    // Variables
    int user_numbers, count, positive = 0, negative = 0;
    double positive_sum = 0, negative_sum = 0, positive_average = 0, negative_average = 0, sum = 0, average;
    
    // Intro
    cout << "Welcome to the most intelligent Number Cruncher!\n\n";
    cout << "Please enter 10 integers seperated by spaces: \n";

    // Do-While loop
    do {
        // User Input
        cin >> user_numbers;

        // Compute
        if (user_numbers >= 0){
            positive_sum += user_numbers;
            positive++;
        } else {
            negative_sum += user_numbers;
            negative++;
        }
        
        sum += user_numbers;
        average =  sum/10;
        positive_average = positive_sum/positive;
        negative_average = negative_sum/negative;
        count++;
        } while (count < 10);

        // Output
        cout << endl;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "Upon our intelligent calculations, here is the result: \n";
        cout << "+ There are " << positive << " numbers, sum = " << positive_sum << " and average = " << positive_average << endl;
        cout << "+ There are " << negative << " numbers, sum = " << negative_sum << " and average = " << negative_average << endl;
        cout << "+ For all 10 numbers, sum = " << sum << " and average = " << average;
    return 0;
}

/*=======================================================================================
Problems I had working on this assignment (and how I overcame these problems)
1. Assigning variables and placing them in the right place. I knew how to get the desired
results in plain math but to do it in machine language was difficult. I had a general idea
of how I wanted to solve it but when I put it in code, I did not get the answer I wanted.
I tried outlining my answer before coding, and that seemed to work but the variables are what
confused me. I went online to find and looked at other people's examples, compared and 
applied it to my answer.

2. The assignment statements were a little tricky as well. I had to refer back to the book
so that I can get the symbols in the right place. The += concept was interesting to grasp 
but I managed to understand what I was doing after trial and error.

Other things I would like to share
1. I enjoyed this problem. It taught me how to use all the different tricks I learned from
reading the book. 

2. Stepping away did help. A change of environment was a nice way to clear my head. After
coming back, little by little, things were starting to work.
=======================================================================================*/
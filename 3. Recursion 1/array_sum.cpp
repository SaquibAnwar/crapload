// Sum of Array
// Send Feedback
// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^3
// Sample Input :
// 3
// 9 8 9
// Sample Output :
// 26

#include<iostream>
//#include "Solution.h"
using namespace std;

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  int sum1 = 0;
    if(n == 0 || n == 1)
        return *input;
    
    sum1 = sum(input+1, n-1);
    return sum1 + *input;


}



int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}



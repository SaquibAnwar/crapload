// Reverse Stack
// Send Feedback
// Reverse a given Stack with the help of another empty stack. Two stacks will be given. Out of which first contains some integers and second one is empty. You need to reverse the first one using second stack. Change in the given first stack itself.
// Note : You don't need to print or return the stack, just reverse the given stack and it will be printed internally.
// Input format :
// Line 1 : Size of Stack
// Line 2 : Stack elements (separated by space)
// Sample Input 1 :
// 4 
// 1 2 3 4     (4 is at top)
// Sample Output 1 :
// 1 2 3 4    (1 is at top)

#include <iostream>
using namespace std;
//#include "solution.h"
#include <stack>

void reverseStack(stack<int> &input, stack<int> &extra) {
	// Write your code here

}

int main() {
    stack<int> s1, s2;
    int size;
    cin >> size;

    int val;
    for(int i = 0; i < size; i++) {
    	cin >> val;
    	s1.push(val);
    }
    reverseStack(s1, s2);
    while(!s1.empty()) {
    	cout << s1.top() << " ";
    	s1.pop();
    }
}

#include <iostream>
#include "stackTemplate.cpp"
//#include "stackUsingLL.cpp"
using namespace std;

int main() {
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<< s.top() << endl;

    cout<< s.pop() << endl;
    cout<< s.pop() << endl;
    cout<< s.pop() << endl;

    cout<< s.size() << endl;

    cout<< s.isEmpty() << endl;
}
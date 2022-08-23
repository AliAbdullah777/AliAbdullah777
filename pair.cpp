#include<iostream>
using namespace std;
int main ()
{ 
    pair<int , string> A;
    A = {10, "Ali Abdullah"};
    cout << A.first <<" " << A.second << endl;

    pair<double , char> B;
    B = make_pair(1.01, '%')    ;
    cout << B.first <<endl;
    cout << B.second <<endl;

    return 0; 
}
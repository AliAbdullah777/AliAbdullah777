#include<iostream>
#include <string>
using namespace std;
int main ()
{
    string str = "Ali";
    string str2 = "Abdullah";
    string result = str +str2;
    cout << result << endl;
    if (str == str2)
    {
        cout << " correct ";
    }
    else
    {
        cout << "not correct";
    }
    return 0;
    
}

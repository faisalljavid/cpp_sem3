#include<iostream>
using namespace std;

int main()
{
    //?char S[10] = "hello";
    //?char S[] = {'H','e','l','l','o','\0'};
    char S[] = {65, 66, 67 , 68, 69, 70, 0};
    //! Forbidden method now: char *S = "Hello";
    cout << S << endl;
    return 0;
}
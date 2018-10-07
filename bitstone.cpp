#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream is("pass.in");



int main()
{
    string a;
    string key;
    getline(is, key);
    cout << "Enter key";
    cin >> a;
    if(!strcmp(&a[0], &key[0]))
        cout << "ok";
    return 0;
}

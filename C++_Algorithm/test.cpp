#include<bits/stdc++.h>

using namespace std;

int main(){

    int a = 5;
    int* ptr1 = new int(3);
    ptr1 = &a;
    cout << ptr1 << endl;
    cout << &a << endl;
    cout << *ptr1 << endl;
    ptr1 = new int(3);
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << &ptr1 << endl;
    return 0;
}
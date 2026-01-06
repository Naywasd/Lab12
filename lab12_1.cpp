#include<iostream>
using namespace std;

int fibonacci(int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    if (x == 0) return 0;
    if (x == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= x; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

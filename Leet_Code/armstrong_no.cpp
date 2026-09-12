#include<iostream>
#include<cmath>
using namespace std;

bool armstrong_no(int n, int count) {
    int temp = n;
    int rem, sum = 0;

    while(n != 0) {
        rem = n % 10;
        n /= 10;
        sum = sum + pow(rem, count);
    }

    if(sum == temp)
        return true;
    else
        return false;
}

int count_digit(int n) {
    int count = 0;

    if(n == 0)
        return 1;

    while(n != 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    int n;

    cout << "Enter any no : ";
    cin >> n;

    int digit = count_digit(n);

    cout << armstrong_no(n, digit);
}
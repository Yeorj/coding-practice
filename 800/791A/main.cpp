#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a, b, years=0;

    cin >> a >> b;

    while(a <= b){
        years++;
        a *= 3;
        b *= 2;
    }
    cout << years;
    return 0;
}


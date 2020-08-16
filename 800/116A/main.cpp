#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{   
    int size, a, b, max_size = 0 , sum =0;
    cin >> size;

    for (int i = 0; i < size; i++){
        cin >> a >> b;
        max_size = max(max_size, sum);
        sum += b-a;
    }
    cout << max_size;
    return 0;
}

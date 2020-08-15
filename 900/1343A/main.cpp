#include <bits/stdc++.h>

using namespace std;

int main(){
    // 2^K-1 * x. Find x so there is integer k > 1 that x + 2x + 4x + ... + 2^(K-1)*x = n
    // E.G:
    // IN: 3
    // Work: 3 = x + 2x + 4X + ... + 2^(k-1)*x
    //       3 = x (1 + 2 + 4 + ... + 2^(k-1))
    //       3 = x OR 3x OR 7x OR 15x OR ... x  * \sum_{k=0} 2^(k-1)
    //       It is obvious from above that x = 1 is the soltion for this problem

    // We need to find the x above so that X is a valid solution for any sequence possible.

    long long k, n, R, num_cases;

    cin >> num_cases;

    // BRUTE FORCE
    for (int i = 0; i < num_cases; i++){
        cin >> n; 
        k = 0; 
        R = 1;
        R += 2 << k++;
        while (n % R){ 
            R += 2 << k++; 
        }
        cout << n / R << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t, n, a, b;

    int current_letter;
    int up_or_down = 1;

    // string test_case;

    cin >> t;

    // char * s;

    for (int i = 0; i < t ; i++){
        cin >> n >> a >> b;                    // 7, 5 ,3

        // s = new char [n];
        current_letter = 0;
        for(int j = 0; j < n; j++){        
            if (j % b == 0) {
                current_letter = 0;
            }
            cout << char('a' + current_letter++);        // a, b, c, c, b, a, b, c
                                                       // 0, 1, 2, 2, 1, 0, 1, 2
        }
        cout << "\n";

        // cout << TODO << endl;
    }

}
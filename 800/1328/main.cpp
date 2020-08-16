#include <bits/stdc++.h>

using namespace std;

int GCD(const int& a, const int& b){
    if (b == 0){
        return a;
    }
    return GCD(b, a % b);
};

int LCM(const int& a, const int& b){
    return (a * b) / GCD(a,b);
};

int main(int argc, char const *argv[])
{
    /* code */
    int x, lcm, curr_a, curr_b, temp;
    cin >> x;
    int a[x], b[x], solution[x];
    

    // 10 4 => 2
    // 13 9 => 5 {13 - 9 = 4, 13 % 9 = 4, }
    // Find LCM and then find difference
    
    for (auto i = 0; i < x; i++){
        cin >> curr_a>> curr_b;
        if (curr_b > curr_a) {
            curr_b += curr_a;  // 9 = 5 + 4
            curr_a = curr_b - curr_a; // 9 - 4 => 5
            curr_b = curr_b - curr_a; // 9 - 5 => 4
        }
        temp = curr_a % curr_b; 
        solution[i] = 0;
        while(temp != 0){
            printf("\ncurr_b: {%d}, curr_a: {%d}, temp=b mod a: {%d}", curr_b, curr_a, temp);
            solution[i]++;
            temp = (++curr_a) % curr_b;
        }
        // lcm = GCD(a[i],b[i]);
    }for(auto i = 0; i < x; i++){
        cout << solution[i] << "\n";
    }
    return 0;
}

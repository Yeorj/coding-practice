#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int cases;
    string line;
    cin >> cases;
    int solutions[cases];
    int temp_count;
    for(auto i = 0; i < cases; i++){
        solutions[i] = 0;

        cin >> line;

        bool first_ones = false,
             second_ones = false;
        temp_count = 0;
        // cout << line;
        for(int j = 1; j < line.length(); j++){
            // cout << line[j] << '\t';
            if(line[j-1]== '1' && line[j] == '0'){
                first_ones = true;
                temp_count = 1;
            }else if(first_ones && line[j-1] == '0' && line[j] == '1'){
                second_ones = true;
            } else {
                temp_count++;
            }


            if (first_ones && second_ones){
                solutions[i] += temp_count;
                first_ones = false;
                second_ones = false;
            }
        }
        // cout << "\n";
    }
    for(auto iter : solutions){
        cout << iter << "\n";
    }
    return 0;
}

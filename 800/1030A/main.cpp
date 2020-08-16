#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int count, response;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> response;
        if (response){
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";
    
    return 0;
}

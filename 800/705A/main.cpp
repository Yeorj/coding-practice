#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int count;
    cin >> count;
    const string hate = " hate ";
    const string love = " love ";

    cout << "I";
    bool hate_love = true;
    while(count){
        if (hate_love){
            cout << hate;
        } else {
            cout << love;
        }

        count--;
        hate_love =  !hate_love;
        if (count > 0){
            cout << "that I";
        }
    }

    
    cout << "it";
    return 0;
}

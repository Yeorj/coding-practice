#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int amount, tmp_amount;

    scanf("%d", &amount);

    double total_ratio =0.0;
    

    for(int i = 0; i < amount; i++){
        scanf("%d", &tmp_amount);
        total_ratio +=(double) tmp_amount;
    }

    printf("%.5f", 100.0*total_ratio/(amount * 100.0));
    /* code */
    return 0;
}

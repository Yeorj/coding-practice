#include <bits/stdc++.h>

using namespace std;

int main(){

    int rows, count = 0;
    char shape[80];

    scanf("%d", &rows);

    for(auto i = 0;i < rows; i++){
        scanf("%s", &shape);
        if(string(shape) ==  "Tetrahedron"){
            count += 4;
        }else if(string(shape) == "Cube"){
            count += 6;
        } else if(string(shape) == "Octahedron"){
            count += 8;
        } else if (string(shape) == "Dodecahedron" ){
            count += 12;
        } else if (string(shape) == "Icosahedron" ){
            count += 20;
        }
    }

    printf("%d", count);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	int R, C;
	bool safe, left, above;

	cin >> R >> C;

	char pasture[R][C];
	//cout << R << " " << C;
	
	safe = true;
	above = true;
	left = true;
	for(int i = 0; i < R; i++){
		for (int j = 0; j < C; j++){
			cin >> pasture[i][j];
			if(pasture[i][j] == 'W'){
				//cout << "Its a wolf! At " << i << " " << j << endl;
				above = true;
				left = true;
				if(i >= 1){
					above = (pasture[i-1][j] != 'S');
				}
				if(j >= 1){
					left = (pasture[i][j-1] != 'S');
				//	cout << "Sheep\n";
				}
				safe = above && left;
			}
			if(!safe) break;
		}
		if (!safe) break;
	}
	if (pasture[R-1][C-1] == 'S' && safe){
		safe = !(pasture[R-2][C-1] == 'W' || pasture[R-1][C-2] == 'W');
	}

	if(safe){
		cout << "Yes\n";
		for(int i = 0; i < R; i++){
			for(int j= 0; j < C; j++){
				if(pasture[i][j] == '.'){
					cout << 'D';
				}else{
					cout << pasture[i][j];
				}
			}
			cout << "\n";
		}
	} else {
		cout << "No";
	}
	return 0;
}

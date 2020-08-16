#include <bits/stdc++.h>

using namespace std;

int main(){

	for (int i =1; i < 101; i++){
		if(!(i%3 && i%5)){
		if (i%3==0){
			cout<< "fizz";
		}
		if(i%5==0) {
			cout << "buzz";
		}
		}else{
			cout << i;
		}

		cout << "\n";
	}
	return 0;
}

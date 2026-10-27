#include <iostream>
using namespace std;

int GCD(int, int);
int main() {
	int N, G;
	while(cin >> N && N != 0){
		G = 0;
		for(int i = 1; i < N; i++){
			for(int j = i+1; j <= N; j++){
				G = G + GCD(i, j);
			}
		}
	}
	return 0;
}

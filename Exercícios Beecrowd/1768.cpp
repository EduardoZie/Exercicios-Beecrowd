#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;

    while(cin >> N){
        for(int i=1; i<=N; i+= 2){
            for(int j=0; j<(N-i)/2; j++){
                cout << " ";
            }

            for(int j=0; j<i; j++){
                cout << "*";
            }

            cout << endl;
        }

        for(int i=0; i < (N-1)/2; i++){
            cout << " ";
        }
        cout << "*" << endl;

        for(int i=0; i<(N-3)/2; i++) {
            cout << " ";
        }
        cout << "***" << endl << endl;
    }

    return 0;
}

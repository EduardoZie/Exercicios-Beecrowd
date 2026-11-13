#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;

    while(cin >> N){

        for(int i=1;i<=N;i+=2){
            for(int j=1;j<=(N-i)/2;j++){
                cout << " ";
            }

            for(int j=1;j<=i;j++){
                cout << "*";
            }

            cout << endl;
        }

        for(int i=1;i<=2;i++){
            for(int j=1;j<=(N-1)/2;j++){
                cout << " ";
            }

            if(i==1) cout << "*" << endl;
            else cout << "***" << endl;
        }

        cout << endl;
    }

    return 0;
}
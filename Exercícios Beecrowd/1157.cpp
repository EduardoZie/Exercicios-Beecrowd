#include <iostream>

using namespace std;
int main(){

int Number;
cin >> Number;

for(int i=1; i<=Number; i++){
    if (Number%i==0){
        cout << i << endl;
    }
}
    return 0;
}
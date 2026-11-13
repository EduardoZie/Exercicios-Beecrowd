#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
int A,B;
cin >> A >> B;
if (A>B){
    cout << ">" << endl;
}else if(B>A){
    cout << "<" << endl;
}else if (A==B){
    cout << "==" << endl;
}
return 0;
}
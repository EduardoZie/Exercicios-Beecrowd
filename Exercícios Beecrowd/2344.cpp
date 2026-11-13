#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

int Nota;
cin >> Nota;

if(Nota==0) cout << "E" << endl;
else if(Nota>=1 && Nota<=35) cout << "D" << endl;
else if(Nota>=36 && Nota<=60) cout << "C" << endl;
else if(Nota>=61 && Nota<=85) cout << "B" << endl;
else if(Nota>=86 && Nota<=100) cout << "A" << endl;

return 0;

}
#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
    
    int Cont=0;

    for(int i=32; i<=254; i++){
        cout << setw(4) << i << "=" << char(i);
        Cont++;

        if(Cont==10){
            cout << endl;
            Cont = 1;
        }
    }
    
    return 0;
}
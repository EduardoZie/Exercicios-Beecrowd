#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string a, b, c;
    cin >> a >> b >> c;

    if(a == "vertebrado"){
        if(b == "ave"){
            if (c == "carnivoro"){
                cout << "aguia" << endl;
            }
        } 
    }if(a == "vertebrado"){
        if (b == "ave"){
            if (c == "onivoro"){
                cout << "pomba" << endl;
            }
        }
    }if(a == "vertebrado"){
        if (b == "mamifero"){
            if (c == "onivoro"){
                cout << "homem" << endl;
            }
        }
    }if(a == "vertebrado"){
        if (b == "mamifero"){
            if (c == "herbivoro"){
                cout << "vaca" << endl;
            }
        }
    }
    /// Segunda parte
        if(a == "invertebrado"){
        if(b == "inseto"){
            if (c == "hematofago"){
                cout << "pulga" << endl;
            }
        } 
    }if(a == "invertebrado"){
        if (b == "inseto"){
            if (c == "herbivoro"){
                cout << "lagarta" << endl;
            }
        }
    }if(a == "invertebrado"){
        if (b == "anelideo"){
            if (c == "hematofago"){
                cout << "sanguessuga" << endl;
            }
        }
    }if(a == "invertebrado"){
        if (b == "anelideo"){
            if (c == "onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
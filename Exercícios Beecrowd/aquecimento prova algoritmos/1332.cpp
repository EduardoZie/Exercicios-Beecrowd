
#include <bits/stdc++.h>
using namespace std;
int main(){

    int Numero_Palavras;
    string word;
    string one = "one";
    string two = "two";
    string three = "three";

    cin >> Numero_Palavras;
    for(int i=0; i<Numero_Palavras; i++){

        cin >> word;

        if(word.size()==3){
            int Cont_One=0, Cont_Two=0;

            for(int j=0; j<word.size(); j++){
                if(word[j]!=one[j]) Cont_One++;
                if(word[j]!=two[j]) Cont_Two++;
            }

            if(Cont_One<=1){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
        else if(word.size()==5){
            int Cont_Three=0;

            for(int j=0; j<word.size(); j++){
                if(word[j]!=three[j]) Cont_Three++;
            }

            if(Cont_Three<=1){
                cout << 3 << endl;
            }
        }
    }

    return 0;
}

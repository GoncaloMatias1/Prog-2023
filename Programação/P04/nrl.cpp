#include <iostream>
using namespace std;

int nrl(const char s[], char low[]){
    int alfabeto[27] {0};    //26 zeros: para guardar quantas vezes uso cada letra, 'a' está na posição 0 etc
    int i = 0;
    int res = 0;
    while(s[i] != '\0'){
        if(s[i] == ' '){
            i++;
            continue;
        } else if(s[i] >= 'a' && s[i] <= 'z'){
            alfabeto[s[i] - 'a']++;
            i++;
        } else{
            alfabeto[s[i] - 'A']++;  //dá codigo ascci do F (5), vai para a posição 5 meter um 
            i++;
        }
    }
    int j = 0;  //j é o indice do low
    for(int x = 0; x < 27; x++){
        if(alfabeto[x] == 1){
            low[j] = 'a' + x;
            j++;
            res++;   //contar o número de caracteres minúsculos que aparecem apenas uma vez na strg de entrada.
        }
    }
    if(res == 0){
        low[0] = '\0';   //array n tem elementos
    }
    return res;
}

int main(){
  { const char s[] = "  F C U P  F E U P  Porto  ";
  char l[27] = { -1 };
  int r = nrl(s, l);
  cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n"; }
       return 0;
}
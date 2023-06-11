#include <iostream>
using namespace std;


int main(){
    char x;
    cin>>x;
    if (('a'<=x && x<='z')||('A'<=x && x<='Z')) cout<<"LETTER";
    else if ('0'<=x && x<='9') cout<<"DIGIT";
    else cout<<"OTHER";
    return 0;
}
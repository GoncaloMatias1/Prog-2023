#include <iostream>
using namespace std;

int main(){
    int count=0; int count1=0; int count2=0;
    int n; cin>>n;
    char a;
    for (int i=0;i<n;i++){
        cin>>a;
        if ((a>='a' && a<='z')||(a>='A' && a<='Z')) count1+=1;
        else if ((a>='0' && a<='9')) count+=1;
        else count2+=1;
    }
    cout<<count1<<" "<<count<<" "<<count2;
    return 0;
}
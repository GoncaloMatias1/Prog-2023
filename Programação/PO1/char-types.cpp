using namespace std;
#include <iostream>

int main(){
    int n;
    cin>>n;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    char a;
    for(int i=1; i<=n;i++){
        cin >> a;
        if ((a>='a' && a<='z')||(a>='A' && a<='Z')){
            count+=1;
        }else if ((a>='0' && a<='9')){
            count1+=1;
        }else{
            count2+=1;
        }
    }
    cout<<count<<" "<<count1<<" "<<count2;
    return 0;
}
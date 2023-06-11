using namespace std;
#include <iostream>


int main(){
    int n;
    cin>>n;
    int count,count1,count2;
    for(int i =0; i<=n;i++){
        if ('0'<=n<='9'){
            count+=1;
        } else if ('a'<=i<='z' || 'A'<=i<='Z'){
            count1+=1;
        }else{
            count2+=1;
        }
    }
    cout<<count<<" "<<count1<<" "<<count2;
    return 0;
}
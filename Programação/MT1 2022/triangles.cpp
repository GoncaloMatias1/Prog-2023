#include <iostream>
using namespace std;

int main(){
    int s1,s2,s3;
    cin>>s1; cin>>s2;cin>>s3;
    if (s1==s2 and s1==s3 and s2==s3) cout<<"equilateral";
    else if (s1==s2 or s1==s3 or s2==s3) cout<<"isoceles";
    else cout<<"scalene";
    return 0;
}


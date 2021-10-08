#include<iostream>
#include<iomanip>
using namespace std;
int favdice(int n){
    double ans=0;
    for(int i=1;i<=n;i++){
        ans += n/(i*1.0);
    }
    return ans;
} 
int main(){
    int n=6;
    cout<<favdice(n)+1;
    return 0;
}
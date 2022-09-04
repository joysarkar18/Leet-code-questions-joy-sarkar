#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, k;
    cin>>num>>k;
    int count=0;
    int i = k;
    while(i<num){
        int temp = num - i;
        if(temp%10==k){
            count++;
        }
        i+=10;

    } 
    if(count==0){
        cout<<-1;
    }
    else{
    cout<<count<<endl;

    }
    return 0;
}
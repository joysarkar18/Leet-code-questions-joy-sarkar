#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    string temp = str;
    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    vector <char> v;
    for(int i = 0 ; i< str.length() ; i++){
        for(int j = 0 ; j<str.length() ; j++){
            if(str[i]-str[j]==32 || str[i]-str[j]==-32 ){
                v.push_back(str[i]);
            }
        }

    }

    char maxch='A';
    while(!v.empty()){
       if(v.back()>maxch){
        maxch=v.back();
       }
       v.pop_back();

    }
    char ans = towupper(maxch);
   cout<<ans<<endl;
    // return (toupper(maxch));
    return 0;
}
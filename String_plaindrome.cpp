#include<iostream>
using namespace std;
char toLowerCase(string s){
    for(int i = 0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            return s[i];
        }
        else{
            char temp = s[i] - 'A' +'a';
            return temp;
        }
    }
}
int main(int argc, char const *argv[])
{ 
    string s;
    cin>>s;

    


return 0;
}
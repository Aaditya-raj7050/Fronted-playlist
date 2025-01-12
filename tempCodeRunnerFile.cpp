#include<bits/stdc++.h>
using namespace std ; 
int main(){

      string s = "geeksforgeeks" ; 
        unordered_map<char,int>m ; 
    vector<char>v ; 

    for(int i=0 ; i<s.size() ; i++){
        m[s[i]]++ ;


        if(m[s[i]] >= 2){
            v.push_back(s[i]) ;
        }
    }

    for(auto i=m.begin() ; i != m.end() ; i++){
        cout << i->first << " " << i->second << endl ; 
    }
    cout << endl ; 

    for(auto x:v){
        cout << x << " " ;
    }




    return 0;
}
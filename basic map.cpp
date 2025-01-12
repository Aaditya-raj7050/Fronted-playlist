#include<bits/stdc++.h>
using namespace std ; 
int main(){
    
    map<int,int>m ; 
    // insert the data in map
    m[5] = 4 ;
    m[2] = 5 ; 
    m[3] = 6 ; 
    m[30] = 0 ;
    cout << "size : " << m.size() << endl ;
    // cout << m[2] << " " << m[3] << " " << m[30] << endl ; 
    // cout << m.count(30) << endl ; 

    for(auto i=m.begin() ; i!=m.end() ; i++){
        cout << i->first << " " << i->second << endl ;
    }

    return 0 ;
}
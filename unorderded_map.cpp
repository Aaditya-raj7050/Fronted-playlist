#include<bits/stdc++.h>
using namespace std ;
int main(){

    unordered_map<int,int>m;  
     
     m[2] = 5 ; 
     m[8] = 3 ; 
     m[1] = 33 ; 
     m[5] = 44 ;

     m.erase(8) ;

     for(auto i=m.begin() ; i!=m.end() ; i++){
        cout << i->first << " " << i->second << endl ; 
     }

    return 0 ;
}
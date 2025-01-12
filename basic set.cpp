#include<bits/stdc++.h>
using namespace std; 
int main(){

    set<int>s ; 

    s.insert(2) ; 
    s.insert(1) ; 
    s.insert(8) ; 
    s.insert(6) ; 
    s.insert(7) ; 
    s.insert(2) ; 
    s.insert(3) ; 

    // set<int>::iterator itr ; 
    for( auto itr=s.begin() ; itr != s.end() ; itr++){
        cout << *itr << " " ;
    }





    return 0;
}
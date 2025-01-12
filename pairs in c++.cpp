#include<bits/stdc++.h>
using namespace std ; 
int main(){

    pair<int,int>p ; 
    p.first = 25 ; 
    p.second = 55 ; 

    cout << p.first << endl ; 
    cout << p.second << endl ; 

    pair<int,int>p2 ; 

    p2 = p ; 
    cout << p2.first << endl ;
    cout << p2.second << endl ;



    return 0 ;
}
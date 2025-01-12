#include<bits/stdc++.h>
using namespace std;  
int main(){

    int arr[] = {1,5,2,7,3,2,4,6,2} ; 
    int n = 9 ;
    map<int,int>m ; 

    for(int i=0 ; i<n ; i++){
        m[arr[i]] = i ;
    }   

    for(auto i=m.begin() ; i != m.end() ; i++){
        cout << i->first << " " << i->second << endl ; 
    }

    m.erase(2) ;
    cout << endl ;

     for(auto i=m.begin() ; i != m.end() ; i++){
        cout << i->first << " " << i->second << endl ; 
    }




    return 0 ;
}
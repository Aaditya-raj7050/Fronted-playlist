#include<bits/stdc++.h>
using namespace std ; 

bool sortbysec(pair<int,int>a , pair<int,int>b ){
    return (a.second < b.second) || (a.first == b.first && a.first < b.first);
}

int main(){

    vector<pair<int,int> >v ; 
    v.push_back(make_pair(10,20)) ; 
    v.push_back(make_pair(5,20)); 
    v.push_back(make_pair(5,6)) ; 
    v.push_back(make_pair(4,9)) ; 
    v.push_back(make_pair(10,8)) ; 

    sort(v.begin() , v.end() , sortbysec) ; 

    for(int i=0 ; i<5 ; i++){
        cout << v[i].first << " " << v[i].second << endl ;
    }


    return 0 ;
}
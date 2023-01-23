#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const mod = 1e9 + 7;
int const N = 1e7 + 10;
int const Mod = 998244353;
double eps = 1e-6;
using namespace std;



// This is the process when the array / vector is already sorted, then we will get 
// index of each element

int binary_search( vector< int > &element , int found ){

    int lo = 0, hi = element.size() - 1;
    while( hi >= lo ){
        int mid = ( hi + lo ) / 2;
        if( element[mid] == found ) return mid;
        if( element[mid] < found ) lo = mid + 1;
        else hi = mid;
    }
    return -1;
}
void case_solve(){

    int n; cin >> n;
    vector< int > element(n);

    for( int i = 0; i < n; i++ ) cin >> element[i];
    int length = element.size() - 1;

    int query;
    cin >> query;
    while( query-- ){
        int found;
        cin >> found;
        int index = binary_search( element , found );
        
        if( index == -1 ) cout << "-1" << endl;
        else cout << index + 1 << endl;
    }
}
int main(){
    int testcasecount = 1; //cin >> testcasecount;
    for( int cs = 1; cs <= testcasecount; cs++ ){
        case_solve();
    }
    return 0;
} 

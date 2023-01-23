#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const mod = 1e9 + 7;
int const N = 1e7 + 10;
int const Mod = 998244353;
double eps = 1e-6;
using namespace std;



//search in roated array "leetcode" problem

int binary_search( vector< int > &element , int lo , int hi , int target ){

    while( hi >= lo ){
        int mid = ( hi + lo ) / 2;
        if( element[mid] == target ) return mid;
        if( element[lo] <= element[mid] ){
            if( target <= element[mid] && target >= element[lo] ) hi = mid - 1;
            else lo = mid + 1;
        }
        else{
            if( target >= element[mid] && target <= element[lo] ) lo = mid + 1;
            else hi = mid - 1;
        }
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
        int target;
        cin >> target;
        int index = binary_search( element , 0 , n-1 , target );
        
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
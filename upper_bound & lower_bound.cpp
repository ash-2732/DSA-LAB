#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const mod = 1e9 + 7;
int const N = 1e7 + 10;
int const Mod = 998244353;
double eps = 1e-6;
using namespace std;



int upper_bound( vector< int > &element , int N , int found ){

    int lo = 0, hi = N;
    while( hi > lo ){
        int mid = ( hi + lo ) / 2;
        if( element[mid] < found ) lo = mid + 1;
        else hi = mid;
    }
    if( lo < N && element[lo] <= found ) lo++;
    return lo;
}
int lower_bound( vector< int > &element , int N , int found ){

    int lo = 0 , hi = N;
    while( hi > lo ){
        int mid = ( hi + lo ) / 2;
        if( element[mid] < found ) lo = mid + 1;
        else hi = mid;
    }
    if( lo < N && element[lo] < found ) lo++;
    return lo;
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
        int up = upper_bound( element , length , found );
        int lo = lower_bound( element , length , found );

        cout << up <<" "<< lo << endl;
    }
}
int main(){
    int testcasecount = 1; //cin >> testcasecount;
    for( int cs = 1; cs <= testcasecount; cs++ ){
        case_solve();
    }
    return 0;
} 

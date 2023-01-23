#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const mod = 1e9 + 7;
int const N = 1e7 + 10;
int const Mod = 998244353;
double eps = 1e-6;
using namespace std;


void Swap( int *num1 , int *num2 ){

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void Selection_sort( vector< int > & element , int n ){

    for( int i = 0; i < n-1; i++ ){
        int min_index = i;
        for( int j = i; j < n; j++ ){
            if( element[j] < element[min_index] )
            min_index = j;
        }
        if( min_index != i )
        Swap( &element[min_index] , &element[i] );
    }
}
void case_solve(){

    int n; cin >> n;
    vector< int > element(n);

    for( int i = 0; i < n; i++ ) cin >> element[i];
    Selection_sort( element , n);
    for( int printvalue : element ) cout << printvalue <<" ";
    cout << endl;
}
int main(){
    int testcasecount = 1; //cin >> testcasecount;
    for( int cs = 1; cs <= testcasecount; cs++ ){
        case_solve();
    }
    return 0;
} 
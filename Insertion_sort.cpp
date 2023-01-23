#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const mod = 1e9 + 7;
int const N = 1e7 + 10;
int const Mod = 998244353;
double eps = 1e-6;
using namespace std;



void Insertion_sort( vector< int > & element , int n ){

    for( int i = 1; i < n; i++ ){
        int key = element[i];
        int j = i - 1;
        while( j >= 0 && element[j] > key ){
            element[j+1] = element[j];
            j--;
        }
        element[j+1] = key;
    }
}
void case_solve(){

    int n; cin >> n;
    vector< int > element(n);

    for( int i = 0; i < n; i++ ) cin >> element[i];
    Insertion_sort( element , n);
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

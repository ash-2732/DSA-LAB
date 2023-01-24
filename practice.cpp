#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const mod = 1e9 + 7;
int const N = 1e5 + 10;
int const Mod = 998244353;
double eps = 1e-6;
using namespace std;



int a[N];

void Merge( int l , int r , int mid ){

    int left_length = mid - l + 1;
    int Left[left_length + 1];
    int right_length = r - mid;
    int Right[right_length + 1];

    for( int i = 0; i < left_length; i++ ) Left[i] = a[i+l];
    for( int i = 0; i < right_length; i++ ) Right[i] = a[i+mid+1];

    Left[left_length] = Right[right_length] = INT_MAX;
    int left_index = 0;
    int right_index = 0;

    for( int i = l; i <= r; i++ ){
        if( Left[left_index] <= Right[right_index] ){
            a[i] = Left[left_index];
            left_index++;
        }else{
            a[i] = Right[right_index];
            right_index++;
        }
    }
}
void Merge_sort( int l , int r ){

    if( l == r ) return;

    int mid = ( l + r ) / 2;
    Merge_sort( l , mid );
    Merge_sort( mid + 1 , r );
    Merge( l , r , mid );    
}
void Run_case(){

    int n; cin >> n;
    for( int i = 0; i < n; i++ ) cin >> a[i];
    Merge_sort( 0 , n - 1 );

    for( int i = 0; i < n; i++ ) cout << a[i] <<" ";
    cout << endl;
}
int main(){
    int testcasecount = 1; //cin >> testcasecount;
    for( int cs = 1; cs <= testcasecount; cs++ ){
        Run_case();
    }
    return 0;
} 
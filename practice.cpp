#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int const mod = 1e9 + 7;
int const N = 1e5 + 10;
int const Mod = 998244353;
double eps = 1e-6;
using namespace std;



void Swap( int *number1 , int *number2 ){

    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}
int Partition( vector< int > & element , int lo , int hi ){

    int pivot = element[hi];
    int i = lo - 1;
    for( int j = lo; j < hi; j++ ){
        if( element[j] < pivot ){
            i++;
            Swap( &element[i] , &element[j]);
        }
    }
    Swap( &element[i+1] , &element[hi] );
    return i + 1;
}
void QuickSort( vector< int > & element , int lo , int hi ){

    if( lo < hi ){
        int pi = Partition( element , lo , hi );
        QuickSort( element , lo , pi - 1 );
        QuickSort( element , pi + 1 , hi );
    }
}
void Run_case(){

    int n; cin >> n;
    vector< int > element(n);

    for( int i = 0; i < n; i++ ) cin >> element[i];
    QuickSort( element , 0 , n - 1 );

    for( int i = 0; i < n; i++ ) cout << element[i] <<" ";
    cout << endl;
}
int main(){
    int testcasecount = 1; // cin >> testcasecount;
    for( int cs = 1; cs <= testcasecount; cs++ ){
        Run_case();
    }
    return 0;
} 
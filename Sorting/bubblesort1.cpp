#include <bits/stdc++.h>
using namespace std;

int a[105];

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n-1; ++i){
        if(a[i] > a[i+1]){
            swap(a[i], a[i+1]);
        }
    }
    
    for(int i = 0; i < n; ++i){
        cout << a[i] << ' ';
    }
}

#include<iostream>
#define loop(n, body) for(int i=0; i<n; i++) body
using namespace std;


void merge(int res[], int a1[], int a2[], int n, int m){
    int i=0, j=0;
    int k = 0;
    while(i<n && j<m){
        if(a1[i] <= a2[j])
            res[k++] = a1[i++]; 
        else
            res[k++] = a2[j++];
    }

    while(i<n)
        res[k++] = a1[i++];
    
    while(j<m)
        res[k++] = a2[j++];
}



int main(){
    int n, m;
    cin >> n >> m;

    int a1[n], a2[m];
    loop(n, cin >> a1[i]; );
    loop(m, cin >> a2[i]; );

    int res[n+m];
    merge(res, a1, a2, n, m);

    loop(n+m, {
        cout << res[i] << " ";
    })

    return 0;
}
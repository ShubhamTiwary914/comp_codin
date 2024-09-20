#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void merge(int arr[], int l, int m, int r){
	vector<int> store;
	int i = l, j = m+1;
	while(i<=m && j<=r){
		if(arr[i] <= arr[j]){
			store.push_back(arr[i]);
			i++;
		}
		else{
			store.push_back(arr[j]);
			j++;
		}
	}

	while(i <= m){
		store.push_back(arr[i]);
		i++;
	}
	while(j <= r){
		store.push_back(arr[j]);
		j++;
	}

	for(int k=l; k<=r; k++){
		arr[k] = store[k - l];
	}
}



void mergeSort(int arr[], int l, int r){
	if(l >= r)
		return;
	int m = (l+r)/2;
	mergeSort(arr, l, m);
	mergeSort(arr, m+1, r);
	merge(arr, l, m, r);
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];

	for(int i=0; i<n; i++)
		cin >> arr[i];

	mergeSort(arr, 0, n);


	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}
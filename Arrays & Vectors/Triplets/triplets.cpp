/*
1. Brute Force using three loops-> O(n^3)
2. Sort the array and use two pointer approach-> O(NlogN)+O(N^2)
Given a[]={1,2,3,4,5,6,7,8,9,15}  -> same array after sorting also
now pick first element and for the remaining elements and remeining sum , find pairs that add up to remaining sum
*/

#include <bits/stdc++.h>
using namespace std;
void findTriplets(int a[], int n, int sum){
    sort(a,a+n);
    for(int i=0;i<n-3;i++){
        int j=i+1, k= n-1, x=sum-a[i];
        while(j<k){
            
            if(a[j]+a[k]>x) k--;
            else if(a[j]+a[k]<x) j++;
            else if(a[j]+a[k]==x){
               cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;
               j++;
               k--;
            }
        }
    }
}
int main() {
	int a[]={1,2,3,4,5,6,7,8,9,15};
	int sum=18;
	findTriplets(a,10,sum);
	return 0;
}
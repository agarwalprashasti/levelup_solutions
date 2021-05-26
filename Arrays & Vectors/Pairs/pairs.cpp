/*
1. Brute Force Solution using two loops -> O(N^2)
2. Sort the array, then pick an element and for remaining array apply binary serach to find the 
complement of the picked element. -> O(NlogN)+O(NlogN)=> O(NlogN)
Given  a[]={10,5,2,3,-6,9,11}
sorted a[]={-6,2,3,5,9,10,11}
if I pick -6, then for remeing array we use binary search to find 10

3. Most optimised solution using unordered_set

*/

#include <bits/stdc++.h>
using namespace std;
void findPairs(int a[], int n, int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-a[i])!=s.end()){
            cout<<a[i]<<","<<sum-a[i]<<endl;
        }
        s.insert(a[i]);
    }
}
int main() {
	int a[]={10,5,2,3,-6,9,11};
	int sum=4;
	findPairs(a,7,sum);
	return 0;
}
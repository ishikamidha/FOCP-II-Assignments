#include <iostream>
using namespace std;
 
 
	int CountOperations(string bulbs,int n,int l){
		int operations=0;
		int i=0;
 
		while(i<n){
			if(bulbs[i]=='1'){
				operations++;
				i=i+l;
			}else{
				i++;
			}
		}
		return operations;
	}
int main() {
	int n,k;
	cin>>n>>k;
 
	string bulbs;
	cin>>bulbs;
 
 
int low=1, high=n, answer = n;
while(low<=high){
	int mid =(low+high)/2;
	if (CountOperations(bulbs,n,mid)<=k){
		answer=mid;
		high=mid-1;
	}else{
		low=mid+1;
	}
	}
	cout<<answer<<endl;
	return 0;
}

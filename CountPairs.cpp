#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int count=0;
		for(int x=1;x*x<=N;x++){
			if (N%x==0){
				int y=N/x;
				if(__gcd(x,y)==1){ 
					if(x==y)  
					count++;
					else
					count +=2;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
	}
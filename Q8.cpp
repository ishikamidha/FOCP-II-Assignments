#include<iostream>
using namespace std;
int main(){
    
        int N;
        cin>>N;
        for(int i=1;i<=N;i++){
            if(i%3==0 && i%5==0){
                cout<<"BuzzFuzz"<<endl;}
            else if(i%3==0){
                cout<<"buzz"<<endl;}
            else if(i%5==0){
                cout<<"fuzz"<<endl;}
            else{
                cout<<i<<endl;
            }
        }
    
    return 0;
}
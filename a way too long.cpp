#include<iostream>
#include<string>
using namespace std;
int main(){
int num, range, i, count=0;
cin>>num;
string s1;

while(num--){
cin>>s1;
range = s1.length();

if(range>10){

		cout<<s1[0];
		cout<<range-2;
		cout<<s1[range-1]<<endl;

}


 else{
  cout<<s1<<endl;
}

}

}

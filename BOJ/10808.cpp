#include<bits/stdc++.h>
using namespace std;

string str;
int cnt[26];

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cin >> str; 
  for(char a : str){
  	cnt[a - 'a']++;
	}
	for(int i = 0; i < 26; i++) {
    cout << cnt[i] << " ";
  }
	return 0; 
}

// counting str 맵 또는 배열
// Map: string이 몇 개? 만약 10만 100만 1000만 띄엄띄엄 들어오면(pointer처럼 들어오면) int라도 Map을 써야함
// Arr: int가 몇 개?

// 문자를 기준으로 counting함. 문자는 숫자로 나타낼 수 있다.
// A=65, a=97 (ASCII). 알파벳은 26개.

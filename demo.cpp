#include<bits/stdc++.h>
using namespace std;
int main(){
//     Input: ["lint","code","love","you"]
// Output: ["lint","code","love","you"]
// Explanation:
// One possible encode method is: "lint:;code:;love:;you"
vector<string>input= {"lint","code","love","you"};
//vector<string>input= {"lint"};
string en="";
for(auto s:input){
    en=en+to_string(s.size())+s;
    //en=en+"#";
}
}
now some change
//
hello i am 
hemant is boomer

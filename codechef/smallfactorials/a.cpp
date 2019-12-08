#include <vector>
#include <iostream>
using namespace std;
//!NOT DONE
void fact(int x){
    vector<int> v(200);
    v[0] = x%10;
    int i=1;
    while(x/10 !=0){
        v[i]= x%10;
        x/=10;
        i++;
    }
}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(n--){
        int x; 
        cin >>x;
        fact(x);
    }

}
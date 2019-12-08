#include <bits/stdc++.h>
using namespace std;

string alphabet= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
vector<char> a(alphabet.begin(),alphabet.end());
vector<char> tv;
vector<string> hs;
int n,l;

bool ishard( vector<char> res){
    int ln = res.size()/2;
    string tmpres(res.begin(),res.end());
    for(int i=1;i<=ln;i++){

        string pattern = tmpres.substr(tmpres.length()-i,i);
        string base = tmpres.substr(tmpres.length()-i-i,i);
        // printf("from %s l=%d comparing %s and %s \n",tmpres.c_str(),i,pattern.c_str(),base.c_str());
        if(pattern==base){
        // printf("not hard\n");
        return false;
        } 
            
    }
    return true;
}

void nthrec(vector<char> res){
    if(hs.size()==n) return; 
    for(int i=0;i<l;i++){
        res.push_back(tv[i]);
        if(ishard(res)){
            // printf("%s was added hs\n",string(res.begin(),res.end()).c_str());
            hs.push_back(string(res.begin(),res.end()));
            nthrec(res);
        }
        if(hs.size()==n) return; 
        res.pop_back();

    }
    // printf("i ran out\n");
}

int main(){
    while(1){
        cin>>n>>l;
        if(n==0 && l == 0) break;
        tv.resize(l);
        for(int i=0;i<l;i++) tv[i] = a[i];
        nthrec(vector<char>());
        string res = hs[hs.size()-1];
        bool fst=  false;
        int grpcnt=0;
        int lncnt=0;
        for(int i=0;i<res.length();i++){
            if(fst){
                if(lncnt==64)
                {
                 printf("\n");
                 lncnt=0;
                }
                else if(lncnt%4==0){
                    printf(" ");
                }
            }
            else fst= true;
            printf("%c",res[i]);
            lncnt++;
        }

        printf("\n%d\n",int(res.length()));
        // printf("output was used with n=%d, and l=%d\n",n,l);
        tv.clear();
        hs.clear();
    }
}
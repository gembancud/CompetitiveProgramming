#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<vector<int>> b;
int ways=0;
vector<vector<int>> precalc(9,vector<int>(65,0));

bool isvalid(int x,int y ,set<pair<int,int>> bp){
    for(int i=1;i<n;i++){
        //tl
            if(binary_search(bp.begin(),bp.end(),make_pair(x-i,y-i))) return false;
        //tr
            if(binary_search(bp.begin(),bp.end(),make_pair(x-i,y+i))) return false;
        //bl
            if(binary_search(bp.begin(),bp.end(),make_pair(x+i,y-i))) return false;
        //br
            if(binary_search(bp.begin(),bp.end(),make_pair(x+i,y+i))) return false;

    }
    return true;
}

void rec(int i,set<pair<int,int>> bp){
    // if(bp.size()==k) {
    //     ways++;
    //     // for(auto&i:bp)printf("%d %d\n",i.first,i.second);
    //     // printf("\n");
    //     return;
    // }
    // if(idx==n ||idy==n) return;
    for(;i<n*n;i++){
    int row=i/n;
    int col=i%n;
            // printf("checking %d %d\n",idx,idy);
            if(isvalid(row,col,bp)){
                // printf("at pos %d valid: %d %d\n",int(bp.size())+1,row,col);
                set<pair<int,int>> tbp=bp;
                tbp.insert(make_pair(row,col));
                if(tbp.size()==k) {
                    ways++;
                    // for(auto&i:tbp)printf("%d %d\n",i.first,i.second);
                    // printf("\n");
                    continue;
                }
                // rec(0,0,tbp);
                rec(i+1,tbp);
            }
            // else printf("at pos %d not valid: %d %d\n",int(bp.size())+1,row,col);
    }
}

void setprecalc(){
precalc[1][0]=1;
precalc[1][1]=1;
precalc[2][0]=1;
precalc[2][1]=4;
precalc[2][2]=4;
precalc[3][0]=1;
precalc[3][1]=9;
precalc[3][2]=26;
precalc[3][3]=26;
precalc[3][4]=8;
precalc[3][5]=0;
precalc[4][0]=1;
precalc[4][1]=16;
precalc[4][2]=92;
precalc[4][3]=232;
precalc[4][4]=260;
precalc[4][5]=112;
precalc[4][6]=16;
precalc[4][7]=0;
precalc[5][0]=1;
precalc[5][1]=25;
precalc[5][2]=240;
precalc[5][3]=1124;
precalc[5][4]=2728;
precalc[5][5]=3368;
precalc[5][6]=1960;
precalc[5][7]=440;
precalc[5][8]=32;
precalc[5][9]=0;
precalc[6][0]=1;
precalc[6][1]=36;
precalc[6][2]=520;
precalc[6][3]=3896;
precalc[6][4]=16428;
precalc[6][5]=39680;
precalc[6][6]=53744;
precalc[6][7]=38368;
precalc[6][8]=12944;
precalc[6][9]=1600;
precalc[6][10]=64;
precalc[6][11]=0;
precalc[7][0]=1;
precalc[7][1]=49;
precalc[7][2]=994;
precalc[7][3]=10894;
precalc[7][4]=70792;
precalc[7][5]=282248;
precalc[7][6]=692320;
precalc[7][7]=1022320;
precalc[7][8]=867328;
precalc[7][9]=389312;
precalc[7][10]=81184;
precalc[7][11]=5792;
precalc[7][12]=128;
precalc[7][13]=0;
precalc[8][0]=1;
precalc[8][1]=64;
precalc[8][2]=1736;
precalc[8][3]=26192;
precalc[8][4]=242856;
precalc[8][5]=1444928;
precalc[8][6]=5599888;
precalc[8][7]=14082528;
precalc[8][8]=22522960;
precalc[8][9]=22057472;
precalc[8][10]=12448832;
precalc[8][11]=3672448;
precalc[8][12]=489536;
precalc[8][13]=20224;
precalc[8][14]=256;
precalc[8][15]=0;
}

int main(){
    // freopen("pre","w",stdout);
    // for(int i=8;i<=8;i++){
    //     for(int j=13;j<=ceil(double(i*i)/2.0);j++){
    //         n=i,k=j;
    //         b.resize(n,vector<int>(n));
    //         if(j==0) ways=1;
    //         else rec(0,set<pair<int,int>>());
    //         printf("precalc=[%d][%d]=%d;\n",i,j,ways);
    //         if(ways==0) break;
    //         b.clear();
    //         ways=0;
    //     }
    // }
    setprecalc();
    while(cin>>n>>k){
        if(n==0 && k==0) break;
        printf("%d\n",precalc[n][k]);
    }
}
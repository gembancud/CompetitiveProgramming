#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f, r;
    while (cin >> f)
    {
        if (f == 0)
            break;
        cin >> r;
        vector<double> fv(f);
        for (auto &i : fv)
            cin >> i;
        vector<double> rv(r);
        for (auto &i : rv)
            cin >> i;
        
        vector<double> dr;
        for(int i=0;i<f;i++){
            for(int j=0;j<r;j++){
                dr.push_back(rv[j]/fv[i]);
            }
        }
        sort(dr.begin(),dr.end());
        double mxspd= dr[1]/dr[0];
        for(int i=0;i<dr.size()-1;i++){
            double spd = dr[i+1]/dr[i];
            mxspd = max(mxspd,spd);
        }
        cout << setprecision(2)<<fixed<<mxspd <<endl;
        
    }
}
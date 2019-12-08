#include <bits/stdc++.h>
using namespace std;

int comp(vector<char> a, vector<char> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b)
        return 1;
    else
        return 0;
}
void pv(vector<char> v)
{
    for (auto &i : v)
    {
        cout << i;
    }
    cout << endl;
}

map<string,int> hesh;
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        // vector<char> v(s.begin(), s.begin());
        for(auto i=s.begin();i!=s.end();i++){
            string z;
            z.push_back(*i);
            hesh[z]++;
            // cout << "added "<<z<<endl;
        }
        for(int sz=2;sz<s.length();sz++){
            // cout <<"size " << sz<< endl;
            for(auto i=s.begin();i!=s.end()-sz+1;i++){
                string::iterator i2= next(i,sz);
                string z(i,i2);
                sort(z.begin(),z.end());
                hesh[z]++;
                // cout << "added "<<z <<endl;
            }
        }
        for(auto &i:hesh){
            int temp= i.second*(i.second-1)/2;
            count +=temp;
        }
        cout << count <<endl;
        hesh.clear();
    }
}
        // !DOESNT WORK
        // pv(v);
        // for (int i = 0; i < v.size()-1; i++)
        // {
        //     for (int ii = 0; ii < i + 1; ii++)
        //     {
        //         tv.push_back(v[ii]);
        //     }
        //     pv(tv);
        //     int tvs = tv.size();
        //     cout <<"size is " <<tvs<< endl;
        //     for (int j = 0;j<v.size() ; j++)
        //     {
        //         for (int jj = 0; jj < tvs; jj++)
        //         {
        //             // cout << "debug passed " << v[jj+j]<<endl;
        //             tsv.push_back(v[j+jj]);
        //         }
        //         cout << "compared to: ";
        //         pv(tsv);
        //         count += comp(tv, tsv);
        //         cout << "count: " << count << endl;
        //         tsv.clear();
        //     }
        //     tv.clear();
        // }
        // count -= v.size()-1;
        // cout << count << endl;
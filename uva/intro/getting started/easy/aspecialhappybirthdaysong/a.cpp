#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> song = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    int n;
    cin >> n;
    vector<string> ppl(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ppl[i];
    }

    int mx = 16*ceil(double(ppl.size())/16.0);
    int mn = min(song.size(),ppl.size());
    for(int i=0;i<mx;i++){
        printf("%s: %s\n",ppl[i%ppl.size()].c_str(),song[i%song.size()].c_str());
    }
}
#include <bits/stdc++.h>
using namespace std;

map<string, int> proc(string s)
{
    map<string, int> m;
    string word = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            sort(word.begin(), word.end());
            m[word]++;
            word = "";
        }
        else
            word += s[i];
    }
    sort(word.begin(), word.end());
    m[word]++;
    // for (auto &i : m)
    // {
    //     printf("%s:%d\n", i.first.c_str(), i.second);
    // }

    return m;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        // cout << s << endl;
        map<string, int> m = proc(s);
        bool isloop = false;
        if (m["FM"] % 2 == 0 && m.count("FF") == m.count("MM")){
            if(m["FF"] == m["MM"]) isloop =true;
        }
        (isloop) ? cout << "LOOP\n" : cout << "NO LOOP\n";
    }
}
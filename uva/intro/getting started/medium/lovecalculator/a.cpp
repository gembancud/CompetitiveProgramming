#include <bits/stdc++.h>
using namespace std;

int cv(char c)
{
    switch (c)
    {
    case 'a':
        return 1;
        break;
    case 'b':
        return 2;
        break;
    case 'c':
        return 3;
        break;
    case 'd':
        return 4;
        break;
    case 'e':
        return 5;
        break;
    case 'f':
        return 6;
        break;
    case 'g':
        return 7;
        break;
    case 'h':
        return 8;
        break;
    case 'i':
        return 9;
        break;
    case 'j':
        return 10;
        break;
    case 'k':
        return 11;
        break;
    case 'l':
        return 12;
        break;
    case 'm':
        return 13;
        break;
    case 'n':
        return 14;
        break;
    case 'o':
        return 15;
        break;
    case 'p':
        return 16;
        break;
    case 'q':
        return 17;
        break;
    case 'r':
        return 18;
        break;
    case 's':
        return 19;
        break;
    case 't':
        return 20;
        break;
    case 'u':
        return 21;
        break;
    case 'v':
        return 22;
        break;
    case 'w':
        return 23;
        break;
    case 'x':
        return 24;
        break;
    case 'y':
        return 25;
        break;
    case 'z':
        return 26;
        break;
    default: return 0;
    }
}

int main()
{
    string a, b;
    while (getline(cin ,a)&&getline(cin,b))
    {
        int vala = 0, valb = 0;
        for (auto &i : a)
        {
            if(!isalpha(i)) continue;
            vala += cv(tolower(i));
            // cout << vala <<endl;
        }
        for (auto &i : b)
        {
            if(!isalpha(i)) continue;
            valb += cv(tolower(i));
            // cout << valb <<endl;

        }
        string valas = to_string(vala);
        string valbs = to_string(valb);

        while(valas.length()!=1){
            int tmp=0;
            for(auto&i:valas){
                tmp+= int(i)-'0';
            }
            valas = to_string(tmp);
        }
        vala = stoi(valas);

        while(valbs.length()!=1){
            int tmp=0;
            for(auto&i:valbs){
                tmp+= int(i)-'0';
            }
            valbs = to_string(tmp);
        }
        valb= stoi(valbs);

        double num = min(vala, valb);
        double den = max(vala, valb);
        // printf("%d and %d\n", num, den);
        double ratio = num/den;
        ratio*=100;
        // cout << ratio<<endl;
        cout << setprecision(2) <<fixed << ratio << " \%\n";
    }
}
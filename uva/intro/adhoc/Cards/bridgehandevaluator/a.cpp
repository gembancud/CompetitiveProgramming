#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    while (getline(cin, x))
    {
        vector<int> cards(13, 0);
        vector<int> suits(4, 0);
        vector<int> suitsofkings;
        vector<int> suitsofqueens;
        vector<int> suitsofjacks;
        vector<bool> stoppedsuits(4, false);
        vector<string> hand;

        for (int i = 0; i < x.size(); i += 3)
        {
            hand.push_back(x.substr(i, 2));
        }
        // for (auto &i : hand)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;

        for (int i = 0; i < 13; i++)
        {
            string s = hand[i];
            bool cj = false, cq = false, ck = false, ca = false;
            switch (s[0])
            {
            case 'A':
                ca = true;
                cards[0]++;
                break;
            case '2':
                cards[1]++;
                break;
            case '3':
                cards[2]++;
                break;
            case '4':
                cards[3]++;
                break;
            case '5':
                cards[4]++;
                break;
            case '6':
                cards[5]++;
                break;
            case '7':
                cards[6]++;
                break;
            case '8':
                cards[7]++;
                break;
            case '9':
                cards[8]++;
                break;
            case 'T':
                cards[9]++;
                break;
            case 'J':
                cj = true;
                cards[10]++;
                break;
            case 'Q':
                cq = true;
                cards[11]++;
                break;
            case 'K':
                ck = true;
                cards[12]++;
                break;
            }
            switch (s[1])
            {
            case 'S':
                if (ca)
                    stoppedsuits[0] = true;
                if (cj)
                    suitsofjacks.push_back(0);
                if (cq)
                    suitsofqueens.push_back(0);
                if (ck)
                    suitsofkings.push_back(0);
                suits[0]++;
                break;
            case 'H':
                if (ca)
                    stoppedsuits[1] = true;

                if (cj)
                    suitsofjacks.push_back(1);
                if (cq)
                    suitsofqueens.push_back(1);
                if (ck)
                    suitsofkings.push_back(1);
                suits[1]++;
                break;
            case 'D':
                if (ca)
                    stoppedsuits[2] = true;

                if (cj)
                    suitsofjacks.push_back(2);
                if (cq)
                    suitsofqueens.push_back(2);
                if (ck)
                    suitsofkings.push_back(2);
                suits[2]++;
                break;
            case 'C':
                if (ca)
                    stoppedsuits[3] = true;

                if (cj)
                    suitsofjacks.push_back(3);
                if (cq)
                    suitsofqueens.push_back(3);
                if (ck)
                    suitsofkings.push_back(3);
                suits[3]++;
                break;
            }
        }

        //tally
        int initpoints = 0;
        initpoints += 4 * cards[0] + cards[10] + 2 * cards[11] + 3 * cards[12];
        // printf("very init: %d\n", initpoints);
        for (auto &i : suitsofjacks)
        {
            if (suits[i] <= 3)
                initpoints--;
        }
        for (auto &i : suitsofqueens)
        {
            if (suits[i] <= 2)
                initpoints--;
            if (suits[i] >= 3)
                stoppedsuits[i] = true;
        }
        for (auto &i : suitsofkings)
        {
            if (suits[i] <= 1)
                initpoints--;
            if (suits[i] >= 2)
                stoppedsuits[i] = true;
        }

        bool allstopped = true;
        for (int i = 0; i < stoppedsuits.size(); i++)
        {
            if (!stoppedsuits[i])
                allstopped = false;
        }

        int notrumppoints = initpoints;
        for (int i = 0; i < suits.size(); i++)
        {
            if (suits[i] == 2)
                initpoints++;
            else if (suits[i] == 1)
                initpoints += 2;
            else if (suits[i] == 0)
                initpoints += 2;
        }

        // printf("init: %d\n notrump: %d\n", initpoints,notrumppoints);

        if (initpoints < 14)
        {
            cout << "PASS";
        }
        else if (notrumppoints >= 16 && allstopped)
        {
            cout << "BID NO-TRUMP";
        }
        else
        {
            int mx = 0;
            int idxofmx;
            for (int i = 0; i < suits.size(); i++)
            {
                if (mx < suits[i])
                {
                    mx = suits[i];
                    idxofmx = i;
                }
            }
            cout << "BID ";
            switch (idxofmx)
            {
            case 0:
                cout << "S";
                break;
            case 1:
                cout << "H";
                break;
            case 2:
                cout << "D";
                break;
            case 3:
                cout << "C";
                break;
            }
        }
        cout << endl;
        cin.ignore(0);
    }
}
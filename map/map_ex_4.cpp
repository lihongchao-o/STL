#include <iostream>
#include <utility>
#include <string>
#include <map>

using namespace std;    // not the best in bigger projects | avoid it


class Demonstration {
public:
    enum TYPE {
        starters = 1,
        subs = 2,
        coach = 3,
    };
    typedef map<TYPE, map<int, string>> squadMap; 

    // push a player in the team's squad
    // TYPE::starters or TYPE::subs
    void push(const Demonstration::TYPE &tp, const string &player_name, int position) {
        squad[tp].insert(pair<int, string>(position, player_name));
    }
    // Print team | Starters & Subtitutes
    void print() {
        map<int, string>::iterator coachItr = squad[coach].begin();
        cout << "Coach : \t" << coachItr->second << "\n\n";
        cout << "STARTERS : \n";
        map<int, string>::iterator startersItr = squad[starters].begin();
        map<int, string>::iterator subsItr = squad[subs].begin();
        while(startersItr != squad[starters].end())
        {
            cout << "\t\t" << startersItr->second << endl;
            startersItr++;
        }
        cout << "\nSubtitutes : \n";
        while(subsItr != squad[subs].end())
        {
            cout << "\t\t" << subsItr->second << endl;
            subsItr++;
        }
    }
private:
    squadMap squad;
};


int main()
{
    Demonstration hchao;

    hchao.push(Demonstration::TYPE(3), "aaa", 1);

    hchao.push(Demonstration::TYPE(1), "bbb", 1);
    hchao.push(Demonstration::TYPE(1), "ccc", 2);
    hchao.push(Demonstration::TYPE(1), "ddd", 3);
    hchao.push(Demonstration::TYPE(1), "eee", 4);
    hchao.push(Demonstration::TYPE(1), "fff", 5);
    hchao.push(Demonstration::TYPE(1), "jjj", 6);
    hchao.push(Demonstration::TYPE(1), "kkk", 7);
    hchao.push(Demonstration::TYPE(1), "lll", 8);
    hchao.push(Demonstration::TYPE(1), "mmm", 9);
    hchao.push(Demonstration::TYPE(1), "nnn", 10);
    hchao.push(Demonstration::TYPE(1), "ooo", 11);

    hchao.push(Demonstration::TYPE(2), "ppp", 1);
    hchao.push(Demonstration::TYPE(2), "qqq", 2);
    hchao.push(Demonstration::TYPE(2), "rrr", 3);
    hchao.push(Demonstration::TYPE(2), "sss", 4);

    hchao.print();

    return 0;
}

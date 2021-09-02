#include <iostream>
#include <map>
#include <vector>

using namespace std;

template<typename T>
void print(const T& t)
{
    cout << "Super League 1 Ranking:\n";
    for(const auto& [position, team] : t) {
        cout << position << ": " << team << endl;
    }
}

int main()
{
    // Way I:
    /*
    map<int, string> t_map {
        {1, "aa"}, {2, "bb"}, {3, "cc"}, {4, "dd"},
        {5, "ee"}, {6, "ff"}, {7, "gg"}, {8, "hh"}, {9, "ii"},
        {10, "jj"}, {11, "kk"}, {12, "ll"}, {13, "mm"}, {14, "nn"}
    };
    */

    // Way II:
    vector<string> teams {"aa", "bb", "cc", "dd", "ee", "ff",
                           "gg", "hh", "ii", "jj", "kk",
                           "ll", "mm", "nn"};

    map<int, string> t_map{}; 
    for(int i=0; i<teams.size(); i++)
        t_map.insert(pair<int, string>(i+1, teams[i]));

    print(t_map);

    // Delete a few teams:
    cout << endl;
    for(size_t i=4; i<10; i++)
        t_map.erase(i);
    print(t_map);


    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void subsequences(string s, string emp, vector<string> &ans, int i)
{
    if (i == s.size())
    {
        ans.push_back(emp);
        return;
    }
    subsequences(s, emp, ans, i + 1);        //* exclude...
    subsequences(s, emp + s[i], ans, i + 1); //* include current index value..
}

int main()
{
    string str = "xyz";
    string empty = "";
    vector<string> answer;
    int index = 0;
    subsequences(str, empty, answer, index);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << i + 1 << "-> " << answer[i] << endl;
    }

    return 0;
}
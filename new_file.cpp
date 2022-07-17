#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    for (int i = 6; i < 26; i++)
    {
        // cout << char('A' + i) << endl;
        // cout << i << endl;
        string cmd = string("touch Qu_") + char('A' + i) + string(".md");
        system(cmd.c_str());
    }
    // system()
}
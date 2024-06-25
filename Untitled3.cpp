
#include <iostream>
#include <string>
using namespace std;
 
int subStringsStartingHere(string str, int n,
                            int startIndex)
{
    int count = 0, i = 1;
    while (i <= n)
    {
        if (str.substr(0,i) == 
                str.substr(startIndex, i))
        {
            count++;
        }
        else
            break;
        i++;
    }
 
    return count;
}
int countSubStrings(string str, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
 
        if (str[i] == str[0])
            count += subStringsStartingHere(str, 
                                           n, i);
    }
    return count;
}
 
int main() 
{
    string str = "abcda";
    int n = str.length();
   

    cout << (countSubStrings(str, n));
}
 

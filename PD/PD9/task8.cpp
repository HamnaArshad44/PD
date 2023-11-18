#include <iostream>
using namespace std;
string findBroken(string correct, string typed);
string unique(string ans);
main()
{
  string correct, typed;
  cout << "Enter the correct phrase: ";
  getline(cin, correct);
  cout << "Enter what you actually typed: ";
  getline(cin, typed);
  string result = findBroken(correct, typed);
  string x = unique(result);
  cout << "Broken keys: " << x << endl;
}
string findBroken(string correct, string typed)
{
  string ans = "";
  for (int i = 0; i < correct.length(); i++)
  {
    if (correct[i] != typed[i])
    {
      ans = ans + correct[i];
    }
  }
  return ans;
}
string unique(string ans)
{
  for (int i = 0; ans[i] != '\0'; i++)
  {
    for (int j = 0; ans[j] != '\0'; j++)
    {
      if (i != j)
      {

        if (ans[i] == ans[j])
        {

          for (int k = j; ans[k] != '\0'; k++)
          {
            ans[k] = ans[k + 1];
          }
        }
      }
    }
  }
  return ans;
}

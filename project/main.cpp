#define STOP (0)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  /* grab current word */
  string resp;
  cout << "Give me some words: ";
  getline(cin, resp);
  resp.push_back('\n');

  /* print individual word */
  vector<string> words;
  words.push_back("");
  int wordIndex = 0;
  for (auto c : resp)
  {
    if ((c == ' ') || (c == '\n'))
    {
      cout << "word " << wordIndex << " is " << words.at(wordIndex) << endl;
      words.push_back("");
      wordIndex += 1;
    }
    else
    {
      words.at(wordIndex) = words.at(wordIndex) + c;
    }
  }
  cout << "Word count is " << wordIndex << endl;
  return 0;
}


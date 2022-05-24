#define STOP (0)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* This function will seperate a sentence given the a specified deliminator
 * will return vector array of strings.
 *
 * Sources:
 *   > programiz.com/cpp-programming/vectors
 *   > techiedelight.com/append-char-end-string-cpp
 */

vector<string> seperateByDelim(string sentence, char regx)
{
  vector<string> sepWords;
  sepWords.push_back("");
  for (auto c : sentence)
  {
    if ((c == regx) || (c == '\n'))
    {
      if (c == '\n')
      {
        break;
      }
      else
      {
        sepWords.push_back("");
      }
    }
    else
    {
      sepWords.at(sepWords.size() - 1) = sepWords.at(sepWords.size() - 1) + c;
    }
  }
  return sepWords;
} /* seperateByDelim() */

int main()
{
  /* grab a sentence from user */
  string buffer;
  cout << "Give me a sentence: ";
  getline(cin, buffer);
  buffer.push_back('\n');

  /* grab words seperated by a deliminator */
  vector<string> words = seperateByDelim(buffer, ' ');

  /* print the words in a loop */
  for (int i = 0; i < (int) words.size(); i++)
  {
    cout << i << " : " << words.at(i) << endl;
  }

  return 0;
} /* main() */


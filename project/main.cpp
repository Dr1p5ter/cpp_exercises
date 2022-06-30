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

class Fruit
{
  private:
    string fruitName;
    string fruitDesc;
    int fruitNum;
  public:
    Fruit()
    {
      fruitName = "";
      fruitDesc = "";
      fruitNum = 0;
    };
    string getFruitName();
    void setFruitName(string newFruitName);
    string getFruitDesc();
    void setFruitDesc(string newFruitDesc);
    void incNum(int numToInc);
    void decNum(int numToDec);
    void print();
};

string Fruit::getFruitName() { return fruitName; }

void Fruit::setFruitName(string newFruitName) { fruitName = newFruitName; }

string Fruit::getFruitDesc() { return fruitDesc; }

void Fruit::setFruitDesc(string newFruitDesc) { fruitDesc = newFruitDesc; }

void Fruit::incNum(int numToInc) { fruitNum += numToInc; }

void Fruit::decNum(int numToDec) { fruitNum -= numToDec; }

void Fruit::print()
{
  cout << "\tFruit name : " << '\"' << fruitName << '\"' << '\n';
  cout << "\tFruit desc : " << '\"' << fruitDesc << '\"' << '\n';
  cout << "\tFruit num  : " << fruitNum << '\n';
}

int main()
{
  string nameBuffer = "";
  string descBuffer = "";
  string optionBuffer = "";
  while (optionBuffer.compare("0") != 0)
  {
    /* grabs the option buffer */
    cout << "Options for computation:" << endl;
    cout << "\t0 : End Program" << endl;
    cout << "\t1 : Make Fruit" << endl;
    cout << "Choice = ";
    getline(cin, optionBuffer);

    /* operates on instructions provided by optionBuffer */
    if (optionBuffer.compare("0") == 0)
    {
      cout << "Ending loop.." << endl;
    }
    else if (optionBuffer.compare("1") == 0)
    {
      /* grab the fruit name from user */
      cout << "Give me the fruit\'s name: ";
      getline(cin, nameBuffer);

      /* grabs the fruit desc from user */
      cout << "Give me the fruit\'s desc: ";
      getline(cin, descBuffer);

      /* makes the object and prints the contents */
      Fruit myFruit;
      myFruit.setFruitName(nameBuffer);
      myFruit.setFruitDesc(descBuffer);
      myFruit.print();

      /* decide to modify num of fruit you have */
      string fruitBuffer = "";
      while (fruitBuffer.compare("0") != 0)
      {
        cout << "Options for fruit modification:" << endl;
        cout << "\t0 : Restart" << endl;
        cout << "\t1 : Increase Fruit Quantity" << endl;
        cout << "\t2 : Decrease Fruit Quantity" << endl;
        cout << "\t3 : Change Fruit Name" << endl;
        cout << "\t4 : Print Fruit Name" << endl;
        cout << "\t5 : Change Fruit Description" << endl;
        cout << "\t6 : Print Fruit Description" << endl;
        cout << "Choice = ";
        getline(cin, fruitBuffer);

        // TODO : finish this up some other time
        /* operates on instructions provided by fruitBuffer */
        if (fruitBuffer.compare("0") == 0)
        {
          cout << "Restarting loop.." << endl;
        }
        else if (fruitBuffer.compare("1") == 0)
        {
          cout << "|WIP|" << endl;
        }
        else if (fruitBuffer.compare("2") == 0)
        {
          cout << "|WIP|" << endl;
        }
        else if (fruitBuffer.compare("3") == 0)
        {
          cout << "|WIP|" << endl;
        }
        else if (fruitBuffer.compare("4") == 0)
        {
          cout << "|WIP|" << endl;
        }
        else if (fruitBuffer.compare("5") == 0)
        {
          cout << "|WIP|" << endl;
        }
        else if (fruitBuffer.compare("6") == 0)
        {
          cout << "|WIP|" << endl;
        }
        else
        {
          cout << "Make sure your input is correct.." << endl;
        }
      }
    }
    else
    {
      cout << "Make sure your input is correct.." << endl;
    }
  }
  return 0;
} /* main() */


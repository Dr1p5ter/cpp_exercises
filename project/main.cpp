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

/* This function will verify that a given string only contains numbers; will
 * return a boolean equivilent.
 */

int verifyNumberString(string numString)
{
  for (auto c : numString)
  {
    if ((c < 48) || (c > 57))
    {
      return 0;
    }
  }
  return 1;
} /* verifyNumberString() */

/* This class will be used for holding specific information about fruit that
 * the user will generate data for.
 */

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
    void setFruitName(string newFruitName);
    void setFruitDesc(string newFruitDesc);
    void incNum(int numToInc);
    void decNum(int numToDec);
    void print();
};
void Fruit::setFruitName(string newFruitName) { fruitName = newFruitName; }
void Fruit::setFruitDesc(string newFruitDesc) { fruitDesc = newFruitDesc; }
void Fruit::incNum(int numToInc) { fruitNum += numToInc; }
void Fruit::decNum(int numToDec) { fruitNum -= numToDec; }
void Fruit::print()
{
  cout << "\tFruit name : " << '\"' << fruitName << '\"' << '\n';
  cout << "\tFruit desc : " << '\"' << fruitDesc << '\"' << '\n';
  cout << "\tFruit num  : " << fruitNum << '\n';
}
/* class Fruit */

/* Program will begin here and execute the following instructions. Comments
 * are provided for better understanding. User will provide data and main
 * will do the rest.
 */

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
    cout << endl;

    /* operates on instructions provided by optionBuffer */
    if (optionBuffer.compare("0") == 0)
    {
      cout << "Ending loop..\n" << endl;
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
      cout << endl;

      /* decide to modify num of fruit you have */
      string fruitBuffer = "";
      while (fruitBuffer.compare("0") != 0)
      {
        cout << "Options for fruit modification:" << endl;
        cout << "\t0 : Restart" << endl;
        cout << "\t1 : Increase Fruit Quantity" << endl;
        cout << "\t2 : Decrease Fruit Quantity" << endl;
        cout << "\t3 : Change Fruit Name" << endl;
        cout << "\t4 : Change Fruit Description" << endl;
        cout << "\t5 : Print Fruit Data" << endl;
        cout << "Choice : ";
        getline(cin, fruitBuffer);
        cout << endl;

        /* operates on instructions provided by fruitBuffer */
        if (fruitBuffer.compare("0") == 0)
        {
          cout << "Restarting loop..\n" << endl;
        }
        else if (fruitBuffer.compare("1") == 0)
        {
          string stringToIntBuffer = "";
          cout << "How many would you like to add? ";
          getline(cin, stringToIntBuffer);
          if (verifyNumberString(stringToIntBuffer))
          {
            cout << "Increasing quantity now..\n" << endl;
            myFruit.incNum(stoi(stringToIntBuffer));
          }
          else
          {
            cout << "Invalid number inputed..\n" << endl;
          }
        }
        else if (fruitBuffer.compare("2") == 0)
        {
          string stringToIntBuffer = "";
          cout << "How many would you like to remove? ";
          getline(cin, stringToIntBuffer);
          if (verifyNumberString(stringToIntBuffer))
          {
            cout << "Decreasing quantity now..\n" << endl;
            myFruit.decNum(stoi(stringToIntBuffer));
          }
          else
          {
            cout << "Invalid number inputed..\n" << endl;
          }
        }
        else if (fruitBuffer.compare("3") == 0)
        {
          string newNameBuffer = "";
          cout << "What would you like to change the name to? ";
          getline(cin, newNameBuffer);
          cout << "Changing name now..\n" << endl;
          myFruit.setFruitName(newNameBuffer);
        }
        else if (fruitBuffer.compare("4") == 0)
        {
          string newDescBuffer = "";
          cout << "What would you like to change the description to? ";
          getline(cin, newDescBuffer);
          cout << "Changing description now..\n" << endl;
          myFruit.setFruitDesc(newDescBuffer);
        }
        else if (fruitBuffer.compare("5") == 0)
        {
          myFruit.print();
          cout << endl;
        }
        else
        {
          cout << "Make sure your input is correct..\n" << endl;
        }
      }
    }
    else
    {
      cout << "Make sure your input is correct..\n" << endl;
    }
  }
  return 0;
} /* main() */


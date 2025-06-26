#include "trieClass.h"
#include <string>
class trie
{
  trieNode *root;

public:
  root = new trieNode('\0');

  void insertword(trieNode *root, string word)
  {
    // base case
    if (word.size() == 0)
    {
      root->isTerminal = true;
      return;
    }
    // small calculation
    int index = word[0] - 'a';
    trieNode *child;
    if (root->children[index] != NULL)
    {
      child = root->children[index];
    }
    else
    {
      child = new trieNode *[word[0]];
      root->children[index] = child;
    }
    // recursion
    insertword(child, word.substr(1));
  }
  // for user
  void insertword(string word)
  {
    insertword(root, word);
  }

  bool search(trieNode *root, string word)
  {
    // base
    if (word.size() == 0)
    {
      if (root->isTerminal)
        return 1;
      else
        return 0;
    }
    int index = word[0] - 'a';
    bool flag = 0;
    trieNode *child;
    if (root->children[index] != NULL)
    {
      child = root->children[index];
      flag = search(child, word.substr(1));
    }
    return flag;
  }
  bool searchword(string word)
  {
    return search(root, word);
  }
  void remove(trieNode *root, string word)
  {
    // base
    if (word.size() == 0)
    {
      root->isTerminal = false;
      return;
    }
    // small calculation
    int index = word[0] - 'a';
    trieNode *child;
    if (root->children[index] != NULL)
    {
      child = root->children[index];
    }
    // word not found
    else
      return;
    // recursion
    remove(child, word.substr(1));
    // remove useless childNode
    if (child->isTerminal == false)
    {
      for (int i = 0; i < 26; i++)
      {
        if (child->children[i] != NULL)
          return;
      }
      delete child;
      root->children[index] = NULL;
    }
  }

  void removeword(string word)
  {
    remove(root, word);
    return;
  }
};
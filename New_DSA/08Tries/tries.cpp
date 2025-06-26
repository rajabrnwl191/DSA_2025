#include <iostream>
#include "trie.h"
#include "trieClass.h"
using namespace std;
int main()
{

  trie t;
  t.insertword("and");
  t.insertword("are");
  t.insertword("dot");
  cout << t.searchword("and") << endl;
  t.removeword("and");
  cout << t.searchword("and") << endl;
  return 0;
}
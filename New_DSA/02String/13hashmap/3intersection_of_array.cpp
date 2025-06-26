#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void print_Intersection_MY_Method(vector<int> &arr1, int size1, vector<int> &arr2, int size2)
{
  unordered_map<int, int> ourmap;
  for (int i = 0; i < size1; i++)
  {
    ++ourmap[arr1[i]];
  }
  for (int i = 0; i < size2; i++)
  {
    if (ourmap[arr2[i]] > 0)
    {
      cout << arr2[i] << endl;
      --ourmap[arr2[i]];
    }
    else
      ourmap.erase(arr2[i]);
  }
}

void printIntersection_concept_video(int arr1[], int arr2[], int n, int m)
{
  unordered_map<int, int> freq;
  for (int i = 0; i < n; ++i)
  {
    ++freq[arr1[i]];
  }
  for (int i = 0; i < m; ++i)
  {
    if (freq.find(arr2[i]) != freq.end())
    {
      cout << arr2[i] << "\n";
      if (freq[arr2[i]] > 1)
      {
        --freq[arr2[i]];
      }
      else
      {
        freq.erase(arr2[i]);
      }
    }
  }
}

int main()
{
  int size1 = 0, size2 = 0;
  cout << "Enter the size of array1 and array2: ";
  cin >> size1 >> size2;
  vector<int> arr1;
  vector<int> arr2;
  cout << "Enter the element of array1 :" << endl;
  int a;
  for (int i = 0; i < size1; i++)
  {
    cin >> a;
    arr1.push_back(a);
  }
  cout << "Enter the element of array2 :" << endl;
  for (int i = 0; i < size2; i++)
  {
    cin >> a;
    arr2.push_back(a);
  }
  for (int i = 0; i < size1; i++)
    cout << arr1[i] << " ";
  cout << endl;
  for (int i = 0; i < size2; i++)
    cout << arr2[i] << " ";
  cout << endl;
  print_Intersection(arr1, size1, arr2, size2);
  return 0;
}
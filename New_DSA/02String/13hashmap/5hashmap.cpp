#include <string>
template <typename V>
class MapNode
{
public:
  string key;
  V value;
  MapNode *next;

  MapNode(string key, V value)
  {
    this->key = key;
    this->value = value;
    next = NULL;
  }
  ~MapNode()
  {
    delete next;
  }
};

template <typename V>
class ourmap
{
public:
  vector<V> **buckets;
  int numbuckets;
  int count;
  ourmap()
  {
    count = 0;
    numbuckets = 10;
    buckets = new MapNode<V> *[numbuckets];
    for (int i = 0; i < numbuckets; i++)
    {
      buckets[i] = NULL;
    }
  }
  ~ourmap()
  {
    for (int i = 0; i < numbuckets; i++)
    {
      delete buckets[i];
    }
    delete[] buckets;
  }
  int size()
  {
    return count;
  }
  int getvalue(string key)
  {
    int bucketIndex = getBucketIndex(key);
    MapNode<V> *head = buckets[bucketIndex];
    while (head != NULL)
    {
      if (head->key == key)
      {
        return head->value;
      }
      head = head->next;
    }
    return 0;
  }

private:
  int getBucketIndex(string key)
  {
    int hashCode = 0;
    int currentCoeff = 1;
    for (int i = key.length() - 1; i >= 0; i--)
    {
      hashCode += key[i] * currentCoeff;
      hashCode = hashCode % numbuckets;
      currentCoeff *= 37;
      currentCoeff = currentCoeff % numbuckets;
    }
    return hashCode % numbuckets;
  }

  void rehash()
  {
    MapNode<V> **temp = buckets;
    buckets = new MapNode<V> *[2 * numbuckets];
    for (int i = 0; i < 2 * numbuckets; i++)
      buckets[i] = NULL;
    int oldnumbuckets = numbuckets;
    numbuckets = 2 * numbuckets;
    count = 0;
    for (int i = 0; i < oldnumbuckets; i++)
    {
      MapNode<V> *head = temp[i];
      while (head != NULL)
      {
        string key = head->key;
        V value = head->value;
        insert(key, value);
        head = head->next;
      }
    }

  public:
    for (int i = 0; i < oldnumbuckets; i++)
    {
      MapNode<V> head = temp[i];
      delete head;
    }
    delete[] temp;
  }

  void insert(string key, V value)
  {
    int bucketIndex = getBucketIndex(key);
    MapNode<V> *head = buckets[bucketIndex];
    while (head != NULL)
    {
      if (head->key == key)
      {
        head->value = value;
        return;
      }
      head = head->next;
    }
    head = buckets[bucketIndex];
    MapNode<V> *node = new MapNode<V>(key, value);
    node->next = head;
    buckets[bucketIndex] = node;
    count++;
    double loadfactor = (1.0 * count) / numbackets;
    if (loadfactor > 0.7)
      rehash();
  }

  V remove(string key)
  {
    int bucketIndex = getBucketIndex(key);
    MapNode<V> *head = buckets[bucketIndex];
    while (head != NULL)
    {
      if (head->key == key)
      {
        if (prev == NULL)
          buckets[bucketIndex] = head->next;
        else
          prev->next = head->next;

        V value = head->value;
        head->next = NULL;
        delete head;
        count--;
        return value;
      }
      prev = head;
      head = head->next;
    }
    return 0;
  };

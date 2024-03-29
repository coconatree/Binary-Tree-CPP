#ifndef KEY_VALUE_H
#define KEY_VALUE_H

typedef int  KeyType;
typedef int DataType;

#include <iostream>

class KeyValue
{

public:

    KeyValue();
    KeyValue(KeyType key, DataType data);

    ~KeyValue();

    KeyType getKey();
    DataType getData();

    void setKey(KeyType key);
    void setData(DataType data);

    bool validate(const KeyType& key);

private:

    // Class Variables

    KeyType   _key;
    DataType _data;

friend std::ostream& operator << (std::ostream& out, KeyValue& obj);

};

#endif
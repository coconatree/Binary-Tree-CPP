#ifndef KEY_VALUE_H
#deifne KEY_VALUE_H

class KeyValue
{

typedef int  KeyType;
typedef int DataType;

public:

    KeyValue();
    KeyValue();

    ~KeyValue();

    KeyType getKey();
    DataType getData();

    void setKey(KeyType key);
    void setData(DataType data);

private:

    // Class Variables

    KeyType   _key;
    DataType _data;
};

#endif
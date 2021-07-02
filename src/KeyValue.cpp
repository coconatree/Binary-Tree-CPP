#include "include/KeyValue.h"

KeyValue::KeyValue(){};

KeyValue::KeyValue(KeyType key, DataType data)
{
    this->setKey(key);
    this->setData(data);
}

KeyValue::~KeyValue(){}

KeyType KeyValue::getKey()
{
    return this->_key;
}

DataType KeyValue::getData()
{
    return this->_data;
}

void KeyValue::setKey(KeyType key)
{
    this->_key = key;
}

void KeyValue::setData(DataType data)
{
    this->_data = data;
}

bool KeyValue::validate(const KeyType& key)
{
    return this->_key == key;
}

std::ostream& operator << (std::ostream& out, KeyValue& obj)
{
    return out << "{ Key : " << obj._data << ", Item : " << obj._key << " } "; 
}
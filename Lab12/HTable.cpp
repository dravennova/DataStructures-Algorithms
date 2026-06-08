#include <iostream>
#include "HTable.h"

HTable::HTable()
{
    this->max_size = 23;
    this->numel = 0;
    dt = new Data[max_size];

    for(int i = 0;i < max_size; i++)
    {
        dt[i].key = -1;
        dt[i].value = "N/A";
    }
}

HTable::HTable(int t_size)
{
    this->max_size = t_size;
    this->numel = 0;
    dt = new Data[max_size];

    for(int i = 0; i < max_size; i++)
    {
        dt[i].key = -1;
        dt[i].value = "N/A";
    }
}

int HTable::hash(int& k)
{
    return (k % max_size);
}

int HTable::rehash(int& k)
{
    return (k+1) % max_size;
}

int HTable::add(Data &d)
{
    if(numel >= max_size)
    {
        return -1;
    }

    int index = hash(d.key);
    int startIndex = index;

    while(dt[index].key != -1)
    {
        index = rehash(index);
        if(index == startIndex)
        {
            return -1;
        }
    }
    dt[index] = d;
    numel++;
    return 0;
}

int HTable::remove(Data &d)
{
    int index = hash(d.key);
    int startIndex = index;

    while (dt[index].key != -1) 
    {
        if (dt[index].key == d.key) 
        {
            dt[index].key = -1;
            dt[index].value = "N/A";
            numel--; 
            return 0; 
        }

        index = rehash(index); 

        if (index == startIndex) 
            return -1;
    }

    return -1;
}

void HTable::output()
{
    int i;
	for(i=0; i< max_size ; i++)
	{
		cout<<i<<"-> "<<dt[i].key<<" "<<dt[i].value<<endl;	
	}
	cout<<"There are "<<i-1<<" data in the table."<<endl;	
}

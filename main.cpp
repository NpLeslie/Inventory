#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> listFromString(string);

int main()
{
    string input;
    vector <string> inventory;

    cout<<"What's in the store (separate items by commas)? ";
    getline(cin,input);

    inventory = listFromString(input); //TODO: Write this function!

    cout<<inventory.size()<<" items in inventory.\n";
    for(int i=0; i<inventory.size(); i++)
    {
        cout<<inventory.at(i)<<endl;
    }

    return 0;
}

vector<string> listFromString(string raw)
{
  string item=""; 
  vector<string> list;
  
  for(int index=0;index<raw.length();index++)
  {
    if(raw.at(index)==',')
    {
      list.push_back(item);
      item="";
    }
    else
    {
      item.append(1, raw.at(index));
    }
  }
  
  list.push_back(item);

  return list;
}



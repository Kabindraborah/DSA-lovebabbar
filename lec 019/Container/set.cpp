#include <iostream>
#include<set>

using namespace std;

int main()
{
set<int>s;

s.insert(5);
s.insert(1);
s.insert(6);
s.insert(0);
s.insert(6);
s.insert(5);
s.insert(6);

for(auto i:s){
cout<<i<<endl;
}

s.erase(s.begin());
cout<<"After erase"<<endl;
for(auto i:s){
cout<<i<<endl;
}
cout<<s.count(5)<<endl;

set<int>::iterator itr = s.find(5);

for(auto it =  itr; it != s.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
}
#include <iostream>
#include<queue>

using namespace std;
int main()
{

queue<string>q;
q.push("love");
q.push("babbar");
q.push("kumar");

cout<<"Size before pop "<<q.size()<<endl;

cout<<"First element "<<q.front()<<endl;

q.pop();
cout<<"first element after pop "<<q.front()<<endl;

cout<<"size after pop "<<q.size()<<endl;
}
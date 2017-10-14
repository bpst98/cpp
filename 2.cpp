#include <iostream>
#include<cstring>

using namespace std;

void find_and_replace(string& source, string const& find, string const& replace)
{
    for(string::size_type i = 0; (i = source.find(find, i)) != string::npos;)
    {
        source.replace(i, find.length(), replace);
        i += replace.length();
    }
}

int main()
{
    string text;

    // simple replace 2
    cin>>(text);
    find_and_replace(text, "3.14", "banana");
    cout << "replace: " << text << endl;

    cout << endl;



    return 0;
}

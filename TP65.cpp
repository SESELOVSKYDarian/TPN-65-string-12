#include <iostream>
#include <string>
using namespace std;
int ContarIslotes(string f);
int main()
{
    string frase;
    cout<<"Ingrese la frase: ";
    getline(cin, frase);
    cout<<"La cantidad de islotes son: "<<ContarIslotes(frase)<<endl;
}

int ContarIslotes(string f)
{
	int islotes;
    for (int i = 0; i < f.size(); i++)
    {
    	if (f[i+1]==f[i-1])
    	{
    		islotes++;
		}
    }
    return islotes;
}
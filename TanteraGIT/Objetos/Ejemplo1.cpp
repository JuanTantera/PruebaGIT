#include <iostream>
#include <string.h>

using namespace std;

class HOLA
{
public:
	char m_szMensaje[11];
	
	HOLA (char *in)
	{
		strcpy(m_szMensaje,in);
	}
	void Saludar(void)
	{
		cout<<m_szMensaje<<endl;
	}
};

int main(void) 
{
	char cad[20];
	strcpy (cad, "Hola");
	HOLA MiObjeto(cad);
	MiObjeto.Saludar();
	return 0;
}



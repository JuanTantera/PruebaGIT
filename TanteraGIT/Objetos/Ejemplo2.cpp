#include <iostream>
#include <string.h>

using namespace std;

class CHOLA2
{
private:	

	char m_szMensaje[20];

public:
	
	void IniciarMensaje(char *m)
	{
		if (m != NULL) strcpy(m_szMensaje,m);
		else strcpy(m_szMensaje,"");
	}
	void Saludar(void)
	{
		cout<<m_szMensaje<<endl;
	}	
};

int main(void) 
{
	char hola[20];
	CHOLA2 MiObjeto;
	strcpy(hola,"Buenos dias");
	MiObjeto.IniciarMensaje(hola);
	MiObjeto.Saludar();

	return 0;
}



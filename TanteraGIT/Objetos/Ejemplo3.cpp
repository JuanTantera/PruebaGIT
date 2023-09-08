#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

class CHORA  
{
public:
	CHORA();
	CHORA(int iHora, int iMinuto);
	void	IncrementaMinuto(void);
	void	AsignaHora(int iHora);
	void	AsignaHora(int iHora, int iMinuto);
	void	AsignaMinuto(int iMinuto);
	int		DevuelveHora(void);
	int		DevuelveMinuto(void);
	void	MuestraHora(void);
private:	
	int m_iHora;
	int m_iMinuto;
	
};

CHORA::CHORA(void)
{
	
	AsignaHora(12);
	AsignaMinuto(0);
}


CHORA::CHORA(int iHora,int iMinuto)
{
	AsignaHora(iHora);
	AsignaMinuto(iMinuto);
}

void CHORA::AsignaHora(int iHora, int iMinuto)
{
	AsignaHora(iHora);
	AsignaMinuto(iMinuto);
}

void CHORA::AsignaHora(int iHora)
{
	if (iHora>=1 && iHora<=12)
		m_iHora=iHora;
}

void CHORA::AsignaMinuto(int iMinuto)
{
	if ( iMinuto>=0 && iMinuto <=59)
		m_iMinuto=iMinuto;	
}

int CHORA::DevuelveHora(void)
{
	return m_iHora;
}

int CHORA::DevuelveMinuto(void)
{
	return m_iMinuto;
}

void CHORA::MuestraHora(void)
{
	if (m_iMinuto <10)
		cout<<m_iHora<<":0"<<m_iMinuto;
	else
		cout<<m_iHora<<":"<<m_iMinuto;
	
}

void CHORA::IncrementaMinuto()
{
	m_iMinuto++;
	if (m_iMinuto >=60)
	{
		m_iMinuto=0;
		m_iHora++;
		if (m_iHora >12)
			m_iHora=1;
	}
	
}


int main(void) 
{
	CHORA Hora;
	CHORA Hora2(12,55);
	int i;
	
	for (i=0;i<10;i++)
	{
		Hora.IncrementaMinuto();
		Hora.MuestraHora();
		cout<<endl;

	}
	
	
	return 0;
}



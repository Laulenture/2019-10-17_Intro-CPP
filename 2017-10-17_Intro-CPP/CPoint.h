#pragma once
///Point dans un plan
class CPoint
{
	///Par d�faut la port�e des membres d'un classe sont private
private:
	///que dans la classe ell-m�me
	int nX;
	int nY;
	
protected:
	///dans la classe et les enfants de la classe 


public:
	///public est partout, dans la classe et � l'�xterieur

	//Prototypes ou d�clarations
	///Assesseurs
	int getX();
	int getY();
	///Mutateurs
	void setX(int nX);
	void setY(int nY);

};


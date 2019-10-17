#pragma once
///Point dans un plan
class CPoint
{
	///Par défaut la portée des membres d'un classe sont private
private:
	///que dans la classe ell-même
	int nX;
	int nY;
	
protected:
	///dans la classe et les enfants de la classe 


public:
	///public est partout, dans la classe et à l'éxterieur

	//Prototypes ou déclarations
	///Assesseurs
	int getX();
	int getY();
	///Mutateurs
	void setX(int nX);
	void setY(int nY);

};

